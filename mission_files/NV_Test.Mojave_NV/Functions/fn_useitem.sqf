params ["_healing", "_time", "_sound", "_hunger", "_thirst", "_rads", "_strength", "_perception", "_endurance", "_charisma", "_intelligence", "_agility", "_luck", "_time2"];

playsound _sound;
_cutHealing = floor (life_faid /25);
_healing = _healing + (_cutHealing);
if (_rads > 0) then
{
	life_rads = life_rads + _rads;
	playsound "radiation1"
} else
{
	life_rads = life_rads + _rads;
};

if (life_rads > 100) then
{
	life_rads = 100;
};

life_hunger = life_hunger + _hunger;
life_thirst = life_thirst + _thirst;

if (life_hunger > 100) then
{
	life_hunger = 100;
};

if (life_thirst > 100) then 
{
	life_thirst = 100;
};

[_strength, _perception, _endurance, _charisma, _intelligence, _agility, _luck, _time2] spawn sal_fnc_specialmod;
_time = _time - (round(_time/2 * life_fastMetabolism));
if (_healing != 0) then 
{
	_damagePoints = getAllHitPointsDamage player select 0;
	_damageList = getAllHitPointsDamage player select 2;
	_damagelist set [11,0];	
	_hitIndexSorted = [];
	_healthArraySorted = [_damagelist, [], {_x}, "DESCEND"] call BIS_fnc_sortBy;
	{
		if (_x > 0) then 
		{
			_hitIndex = _damageList find _x;
			_hitIndexSorted pushback _hitIndex;
		};
	}forEach _healthArraySorted;
	for "_i" from 1 to _time do 
	{
		_true_healing = (_healing / life_baseHP) + ((_healing / life_baseHP) * life_fastMetabolism);
		_true_healing = [_true_healing, 3] call BIS_fnc_cutDecimals;
		_damageList = getAllHitPointsDamage player select 2;
		{
		_highestHit =  _damageList select _x;
		_amount = (_highestHit - _true_healing);
		if (_amount < 0) then 
		{
			_true_healing = _amount * -1;
			player setHitPointDamage [(_damagePoints select _x), 0];
		} else
		{
			_new_true_healing = 0;
			player setHitPointDamage [(_damagePoints select _x), _amount];
			break;
		};

		}forEach _hitIndexSorted;
		sleep 1;   
	}; 
};


