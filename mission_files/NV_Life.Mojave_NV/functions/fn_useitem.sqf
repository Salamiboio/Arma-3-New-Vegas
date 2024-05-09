params ["_healing", "_time", "_sound", "_hunger", "_thirst", "_rads", "_strength", "_perception", "_endurance", "_charisma", "_intelligence", "_agility", "_luck", "_time2"];

playsound _sound;
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

if (_healing != 0) then 
{
	_true_healing = _healing / 100;
	for "_i" from 1 to _time do 
	{   
		_pdamage = damage player;  
		_amount = _pdamage - _true_healing;
		player setdamage _amount; 
		sleep 1;   
	}; 
};

