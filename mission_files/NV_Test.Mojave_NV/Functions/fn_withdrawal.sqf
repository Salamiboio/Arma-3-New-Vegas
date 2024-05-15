params ["_strength", "_perception", "_endurance", "_charisma", "_intelligence", "_agility", "_luck"];

life_s = life_s + _strength;
life_p = life_p + _perception;
life_e = life_e + _endurance;
life_c = life_c + _charisma;
life_i = life_i + _intelligence;
life_a = life_a + _agility;
life_l = life_l + _luck;
//[] call life_fnc_hudUpdate;