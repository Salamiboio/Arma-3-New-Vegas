params ["_healing", "_time", "_healingsound", "_eatingsound", "_hunger", "_rads"];

if (_rads > 0) then
{
	life_rads = life_rads + _rads;
	playsound "radiation1"
};

if (_hunger > 0) then
{
	life_hunger = life_hunger + _hunger;
	playsound _eatingsound;
};

if (_healing > 0) then 
{
	_true_healing = _healing / _time;
	playsound _healingsound;
	for "_i" from 1 to _time do {   
		_pdamage = damage player;  
		_amount = _pdamage - _true_healing;
		player setdamage _amount; 
		sleep 1;   
	}; 
};

