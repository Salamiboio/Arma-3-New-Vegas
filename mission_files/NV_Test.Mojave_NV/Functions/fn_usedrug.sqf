params ["_healing", "_time", "_sound", "_hunger", "_thirst", "_rads", "_strength", "_perception", "_endurance", "_charisma", "_intelligence", "_agility", "_luck", "_time2", "_type"];

//playsound _sound;
//if (_rads > 0) then
//{
	//life_rads = life_rads + _rads;
	//playsound "radiation1"
//} else
//{
	//life_rads = life_rads + _rads;
//};

//if (life_rads > 100) then
//{
//	life_rads = 100;
//};

//life_hunger = life_hunger + _hunger;
//life_thirst = life_thirst + _thirst;

//if (life_hunger > 100) then
//{
//	life_hunger = 100;
//};

//if (life_thirst > 100) then 
//{
//	life_thirst = 100;
//};

//[_strength, _perception, _endurance, _charisma, _intelligence, _agility, _luck, _time2] spawn sal_fnc_specialmod;

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
_addictedNum = random 100;
switch (_type) do
{
	case "Buffout": 
		{
			if (life_bAddict >= 3) then
			    {
			        [1,0,1,0,0,0,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_bAddict > 0) then
			    {
			        life_bAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_bAddict = 1;
			        ["Buffout"] spawn sal_fnc_addicted;
			    };
		};
	case "Ultrajet": 
		{
			if (life_ujAddict >= 3) then
			    {
			        [2,1,0,0,0,2,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_ujAddict > 0) then
			    {
			        life_ujAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_ujAddict = 1;
			        ["Ultrajet"] spawn sal_fnc_addicted;
			    };
		};
	case "Jet":
		{
			[30] spawn sal_fnc_jetEffect; 
			if (life_jAddict >= 3) then
			    {
			        [0,0,0,1,0,1,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_jAddict > 0) then
			    {
			        life_jAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_jAddict = 1;
			        ["Jet"] spawn sal_fnc_addicted;
			    };
		};
	case "Mentats": 
		{
			if (life_mAddict >= 3) then
			    {
			        [0,1,0,0,1,0,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_mAddict > 0) then
			    {
			        life_mAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_mAddict = 1;
			        ["Mentats"] spawn sal_fnc_addicted;
			    };
		};
	case "Alcohol": 
		{
			if (life_aAddict >= 3) then
			    {
			        [0,0,0,1,0,1,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_aAddict > 0) then
			    {
			        life_aAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_aAddict = 1;
			        ["Alcohol"] spawn sal_fnc_addicted;
			    };
		};
	case "Psycho": 
		{
			if (life_pAddict >= 3) then
			    {
			        [0,1,1,0,0,0,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_pAddict > 0) then
			    {
			        life_pAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_pAddict = 1;
			        ["Psycho"] spawn sal_fnc_addicted;
			    };
		};
	case "Medx": 
		{
			if (life_mxAddict >= 3) then
			    {
					[0,0,0,0,1,1,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_mxAddict > 0) then
			    {
			        life_mxAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_mxAddict = 1;
			        ["Medx"] spawn sal_fnc_addicted;
			    };
		};
	case "Ant": 
		{
			if (life_anAddict >= 3) then
			    {
					[2,0,0,0,0,0,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_anAddict > 0) then
			    {
			        life_anAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_anAddict = 1;
			        ["Ant"] spawn sal_fnc_addicted;
			    };
		};
	case "Tobacco": 
		{
			if (life_tAddict >= 3) then
			    {
					[0,1,0,1,0,0,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_tAddict > 0) then
			    {
			        life_tAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_tAddict = 1;
			        ["Tobacco"] spawn sal_fnc_addicted;
			    };
		};
	case "Hydra": 
		{
			if (life_hAddict >= 3) then
			    {
					[0,0,3,0,0,0,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_hAddict > 0) then
			    {
			        life_hAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_hAddict = 1;
			        ["Hydra"] spawn sal_fnc_addicted;
			    };
		};
	case "Turbo": 
		{
			if (life_tboAddict >= 3) then
			    {
					[0,0,0,0,0,2,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_tboAddict > 0) then
			    {
			        life_tboAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_tboAddict = 1;
			        ["Turbo"] spawn sal_fnc_addicted;
			    };
		};
	case "Steady": 
		{
			if (life_sAddict >= 3) then
			    {
					[1,0,0,0,0,1,0] call sal_fnc_withdrawal;
			    };
			if (life_addicted == 1 && life_sAddict > 0) then
			    {
			        life_sAddict = 1;
			    };
			if (_addictedNum < (25 - (12 * life_ChemResistant) + (25 * life_chemReliant))) then
			    {
			        life_addicted = 1;
			        life_sAddict = 1;
			        ["Steady"] spawn sal_fnc_addicted;
			    };
		};
};
