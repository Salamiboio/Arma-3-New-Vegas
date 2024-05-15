params[ "_unit" ];
[] call sal_fnc_assignValues;
_life_jinxed = player getVariable ["life_jinxed", 0];
if (_life_jinxed == 1) then
    {
        [] spawn sal_fnc_findJinxed;
    };
_unit addAction
[
	"Test Condition",	
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_caller globalChat "it works";
	},
	nil,		 
	1.5,		 
	true,		 
	true,		 
	"",			 
	"life_isSneaking > 0 && _target != player",		 
	50,			 
	false,		
	"",			
	""			
];

_unit addEventHandler ["AnimDone", {
	params ["_unit", "_anim"];
    if (stance player =="CROUCH") then 
        {
            _sneakNumber = random 100;
            if (life_sneakTime == 0) then 
            {
                if (_sneakNumber > life_sneak) then 
                    {
                        player globalChat "Sneak Check Fail";
                    };
                if (_sneakNumber < life_sneak) then 
                    {
                        player globalChat "Sneak Check Pass";
                    };
            };
            life_sneakTime = life_sneakTime + 2;
            if (life_sneakTime >= 10) then 
            {
                life_sneakTime = 1;
                if (_sneakNumber > life_sneak) then 
                    {
                        player globalChat "Sneak Check Fail";
                    };
                if (_sneakNumber < life_sneak) then 
                    {
                        player globalChat "Sneak Check Pass";
                    };
            };
        };
    if (stance player != "CROUCH" && life_sneakTime > 0) then 
        {
            life_sneakTime = 0;
        };
}];
_unit addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
    if (_weapon == "Throw") then 
    {
        _projectileVelocity = velocity _projectile;
        player globalChat str _projectileVelocity;
        _vel = velocity _projectile;
        _dir = getDir _projectile;
        _additionalSpeed = (2 * ((life_throwing - 50) / 10)); // in m/s
        _projectile setVelocity 
        [
        (_vel select 0) + (sin _dir * _additionalSpeed),
	    (_vel select 1) + (cos _dir * _additionalSpeed),
	    (_vel select 2) // horizontal only
        ];
        _projectileVelocity = velocity _projectile;
        player globalChat str _projectileVelocity;
    };
}];
_unit addEventHandler [ "HandleDamage", {
    params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit", "_context"];
    player globalChat "test";
    _source_life_Finesse = _source getVariable ["life_Finesse",0];
    _source_life_Kamikaze = _source getVariable ["life_kamikaze",0];
    _crit = random 100;
    _critDamageMultiplier = ((random [60, 75, 100])/30);
    _critSuccess = 0;
    _critChance = 5 + (10 * _source_life_Finesse);
    if (_crit <= _critChance) then {_critSuccess = 1;};
    _damage = ((_damage * 1) - (_damage * 0.3 * _source_life_Finesse) + (_damage * 0.15 * _source_life_Kamikaze)) + (_damage * (_critDamageMultiplier * _critSuccess));
    _playerHealth = damage _source;
    _bodyHealth = _source getHitPointDamage "hitBody";
    _headHealth = _source getHitPointDamage "hitHead";
    _source_life_HBlooded = _source getVariable ["life_HBlooded",0];
    if ((_bodyHealth > 0.50 || _headHealth > 0.50) && _source_life_HBlooded == 1) then
    {
        _damage = _damage + (_damage * 0.15 );
    };
    _damage = _damage * (life_baseHP / 100);
    _damage = _damage/2;
    _damage;
}];            
player setVariable ["IMS_EventHandler_Hit",{
    _victim = _this select 0;
    _attacker = _this select 1;
    _weapon = _this select 2;
    _damage = damage _victim;
    _crit = random 100;
    _critDamageMultiplier = ((random [60, 75, 100])/30);
    _critSuccess = 0;
    _source_life_Finesse = _attacker getVariable ["life_Finesse",0];
    _source_life_Finesse = _attacker getVariable ["life_HHanded",0];
    _critChance = 5 + (10 * _source_life_Finesse) - (30 * _source_life_Finesse);
    if (_crit <= _critChance) then {_critSuccess = 1;};
    _meleeWeapon = currentWeapon _attacker;
    _attackerUnarmed = 0;
    if (currentWeapon _attacker == "") then 
        {
            _attackerUnarmed = _attacker getVariable ["life_unarmed", 0];
        };
    _attackerMelee = _attacker getVariable ["life_mWeapons", 0];
    _victim setDamage ((_damage * (_attackerMelee/65)) + (_damage * (_attackerUnarmed/65)) + (_damage * (0.25 * _source_life_Finesse))) + ( _damage * (_critDamageMultiplier * _critSuccess));
    player globalChat str getAllHitPointsDamage player;
},true];
player addEventHandler ["GestureDone", {
	params ["_unit", "_gesture"];
    if (_gesture == "amovpercmstpsraswpstdnon_amovpercmstpsraswrfldnon") then
        {
            _sguns = sGunsArray find _gesture;
            if (_sguns >=0 ) then 
            {
                _recoilcoef = life_sGuns / 65;
                _swaycoef = life_sGuns / 65;
            } else
            {
                _eWeapons = eWeaponsArray find _gesture;
                if (_eWeapons >= 0) then 
                {
                    _recoilcoef = life_eWeapons / 65;
                    _swaycoef = life_eWeapons / 65;
                } else
                {
                    _bGuns = bGunsArray find _gesture;
                    if (_bGuns >= 0) then
                        {
                            _recoilcoef = life_bGuns / 65;
                            _swaycoef = life_bGuns / 65;
                        };
                };
            };
            if (life_oneHander > 0) then 
            {
                _recoilcoef = _recoilcoef + (0.2 * life_oneHander);
                _swaycoef = _swaycoef + (0.2 * life_oneHander);
            };
            player setUnitRecoilCoefficient _recoilcoef;
            player setCustomAimCoef _swaycoef;
            player globalchat "rifle";
        };

    if ( _gesture == "amovpercmstpsraswrfldnon_amovpercmstpsraswpstdnon") then
        {
            sguns = sGunsArray find _gesture;
            if (_sguns >=0 ) then 
            {
                _recoilcoef = life_sGuns / 65;
                _swaycoef = life_sGuns / 65;
            } else
            {
                _eWeapons = eWeaponsArray find _gesture;
                if (_eWeapons >= 0) then 
                {
                    _recoilcoef = life_eWeapons / 65;
                    _swaycoef = life_eWeapons / 65;
                };
        if (life_oneHander > 0) then
        {
            _recoilcoef = _recoilcoef - (0.2 * life_oneHander);
            _swaycoef = _swaycoef - (0.2 * life_oneHander);
        };
            player setUnitRecoilCoefficient _recoilcoef;
            player setCustomAimCoef _swaycoef;
            player globalchat "pistol";
        };
    };
}];
if (life_EBird == 1) then 
{
    [] spawn sal_fnc_earlyBird;
};
if (life_NPerson == 1) then 
{
    [] spawn sal_fnc_nightPerson;
};