#include "..\..\script_macros.hpp"
/*
    File: fn_hudUpdate.sqf
    Author: Daniel Stuart

    Description:
    Updates the HUD when it needs to.
*/
disableSerialization;

if (isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
LIFEctrl(2200) progressSetPosition (life_hunger / 100);
LIFEctrl(2201) progressSetPosition (1 - (damage player));
LIFEctrl(2202) progressSetPosition (life_thirst / 100);
LIFEctrl(2203) progressSetPosition (life_rads / 100);
LIFEctrl(2204) progressSetPosition (life_s / 10);
LIFEctrl(2205) progressSetPosition (life_p / 10);
LIFEctrl(2206) progressSetPosition (life_e / 10);
LIFEctrl(2207) progressSetPosition (life_c / 10);
LIFEctrl(2208) progressSetPosition (life_i / 10);
LIFEctrl(2209) progressSetPosition (life_a / 10);
LIFEctrl(2210) progressSetPosition (life_l / 10);