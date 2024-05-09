#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

[] execVM "core\init.sqf";
[] execVM "briefing.sqf";
waitUntil {!isNull player};
params ["_unit"];

_unit addEventHandler ["Fired", { params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"]; if ((_unit inArea nv_1 || _unit inArea nv_2 || _unit inArea nv_3 || _unit inArea nv_4 || _unit inArea nv_5) && side _unit != west) then {_unit addRating -9999};}];