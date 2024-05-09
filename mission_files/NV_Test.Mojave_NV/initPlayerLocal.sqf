life_s = 5;
life_p = 5;
life_e = 5;
life_c = 5;
life_i = 5;
life_a = 5;
life_l = 5;
life_EBird = 1;
life_hblooded = 0;
life_finesse = 0;
life_kamikaze = 0;
life_baseHP = 100;
params[ "_unit" ];
_unit addEventHandler [ "HandleDamage", {
    params ["_unit", "_selection", "_damage", "_source", "_projectile", "_hitIndex", "_instigator", "_hitPoint", "_directHit", "_context"];
    player globalChat "test";
    private _selectionDamage = _unit getHit _selection;
    private _damageRecieved = (_damage - _selectionDamage) max 0;
    _damageRecieved = _damageRecieved / 10;
    _damage = _damageRecieved + _selectionDamage;
    _crit = random 100;
    _critDamageMultiplier = ((random [60, 75, 100])/30);
    _critSuccess = 0;
    _critChance = 5 + (10 * life_finesse);
    if (_crit <= _critChance) then {_critSuccess = 1;};
    _source_life_Finesse = _source getVariable "life_Finesse";
    _source_life_Kamikaze = _source getVariable "life_kamikaze";
    _damage = ((_damage * 1) - (_damage * 0.3 * _source_life_Finesse) + (_damage * 0.15 * _source_life_Kamikaze)) + (_damage * (_critDamageMultiplier * _critSuccess));
    _playerHealth = damage _source;
    _bodyHealth = _source getHitPointDamage "hitBody";
    _headHealth = _source getHitPointDamage "hitHead";
    _source_life_HBlooded = _source getVariable "life_HBlooded";
    if ((_bodyHealth > 0.50 || _headHealth > 0.50) && _source_life_HBlooded == 1) then
    {
        _damage = _damage + (_damage * 0.15 );
    };
    _damage = _damage * (life_baseHP / 100);
    _damage;
}];
if (life_EBird == 1) then {
    life_s = life_s - 1;
    life_p = life_p - 1;
    life_e = life_e - 1;
    life_c = life_c - 1;
    life_i = life_i - 1;
    life_a = life_a - 1;
    life_l = life_l - 1;
    while {alive player} do 
    {
        if ((daytime > 6 && daytime < 12) && life_EBird == 1) then
        {
            life_s = life_s + 3;
            life_p = life_p + 3;
            life_e = life_e + 3;
            life_c = life_c + 3;
            life_i = life_i + 3;
            life_a = life_a + 3;
            life_l = life_l + 3;
            life_EBird = 2;

        };
        if ((daytime > 12) && life_EBird == 2) then
        {
            life_s = life_s - 3;
            life_p = life_p - 3;
            life_e = life_e - 3;
            life_c = life_c - 3;
            life_i = life_i - 3;
            life_a = life_a - 3;
            life_l = life_l - 3;
            life_EBird = 1;
        };
        sleep 60;
    };
};