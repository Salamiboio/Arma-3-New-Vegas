#include "..\..\script_macros.hpp"
/*
    File: fn_updateRequest.sqf
    Author: Tonic

    Description:
    Passes ALL player information to the server to save player data to the database.
*/
private ["_packet","_array","_flag","_alive","_position"];
_packet = [getPlayerUID player,(profileName),playerSide,CASH,BANK];
_array = [];
_alive = alive player;
_position = getPosATL player;
_flag = switch (playerSide) do {case west: {"cop"}; case civilian: {"civ"}; case independent: {"med"}; case east: {"adac"};};

{
    _varName = LICENSE_VARNAME(configName _x,_flag);
    _array pushBack [_varName,LICENSE_VALUE(configName _x,_flag)];
} forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_flag] configClasses (missionConfigFile >> "Licenses"));

_packet pushBack _array;

[] call life_fnc_saveGear;
_packet pushBack life_gear;

_array = [];
_array pushBack life_hunger;
_array pushBack life_thirst;
_array pushBack (damage player);
_array pushBack life_rads;
_array pushBack life_s;
_array pushBack life_p;
_array pushBack life_e;
_array pushBack life_c;
_array pushBack life_i;
_array pushBack life_a;
_array pushBack life_l;
_array pushBack life_bs;
_array pushBack life_bp;
_array pushBack life_be;
_array pushBack life_bc;
_array pushBack life_bi;
_array pushBack life_ba;
_array pushBack life_bl;
_packet pushBack _array;

switch (playerSide) do {
    case civilian: {
        _packet pushBack life_is_arrested;
        _packet pushBack _alive;
        _packet pushBack _position;
    };
};

if (life_HC_isActive) then {
    _packet remoteExecCall ["HC_fnc_updateRequest",HC_Life];
} else {
    _packet remoteExecCall ["DB_fnc_updateRequest",RSERV];
};
