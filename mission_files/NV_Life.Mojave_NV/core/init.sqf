#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Master client initialization file
*/
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log format["------------------------------------------ Version %1 -------------------------------------------",(LIFE_SETTINGS(getText,"framework_version"))];
diag_log "----------------------------------------------------------------------------------------------------";

[sr_door, sr_enterance, "Silver Rush"] spawn sal_fnc_loading_screen;
[sr_door_exit, sr_exit, "Freeside"] spawn sal_fnc_loading_screen;

[mar_door, mar_enterance, "Mick and Ralph's"] spawn sal_fnc_loading_screen;
[mar_door_exit, mar_exit, "Freeside"] spawn sal_fnc_loading_screen;

lvb_door setObjectTextureGlobal [0, ""];
[lvb_door, lvb_enterance, "Las Vegas Boulevard Station"] spawn sal_fnc_loading_screen;
[lvb_door_exit, lvb_exit, "New Vegas"] spawn sal_fnc_loading_screen;

jail_door setObjectTextureGlobal [0, ""];
[jail_door, jail_enterance, "NCR Jail"] spawn sal_fnc_loading_screen;
[jail_door_exit, jail_exit, "Freeside"] spawn sal_fnc_loading_screen;

[pwn1_door, pwn1_enterance, "Pawn Shop"] spawn sal_fnc_loading_screen;
[pwn1_door_exit, pwn1_exit, "Freeside"] spawn sal_fnc_loading_screen;

[me_door, me_enterance, "Mojave Express"] spawn sal_fnc_loading_screen;
[me_door_exit, me_exit, "Freeside"] spawn sal_fnc_loading_screen;

[king_door, king_enterance, "Mojave Express"] spawn sal_fnc_loading_screen;
[king_door_door_exit, king_door_exit, "Freeside"] spawn sal_fnc_loading_screen;

dp_missions addAction[localize"STR_MAR_Get_Delivery_Mission", life_fnc_getDPMission, "dp_1", 0, false ,false , "", ' isNil "life_dp_point" && !life_delivery_in_progress ', 5];

Pawn_Shop addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Silver_Rush addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Atomic_Wrangler addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Kings addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Followers_of_the_Apocalypse addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
Mick_and_Ralphs addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_LVB_Station addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_NCR_Jail addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
Roys_Motel addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Tops addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Gomorrah addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Lucky_38 addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Ultra_Luxe addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];
The_Vault_21_Hotel addAction[localize"STR_MAR_Deliver_Package", life_fnc_dpFinish, "dp_1", 0, false, false,"",'!isNil "life_dp_point" && life_delivery_in_progress && life_dp_point == _target ', 5];

0 cutText[localize "STR_Init_ClientSetup","BLACK FADED",99999999];
_timeStamp = diag_tickTime;

waitUntil {!isNull (findDisplay 46)};
[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

diag_log "[Life Client] Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";
diag_log "[Life Client] Variables initialized";

diag_log "[Life Client] Setting up Eventhandlers";
[] call life_fnc_setupEVH;
diag_log "[Life Client] Eventhandlers completed";

diag_log "[Life Client] Setting up user actions";
[] call life_fnc_setupActions;
diag_log "[Life Client] User actions completed";

diag_log "[Life Client] Waiting for the server to be ready...";
waitUntil {!isNil "life_server_isReady" && {!isNil "life_server_extDB_notLoaded"}};

if (life_server_extDB_notLoaded) exitWith {
    0 cutText [localize "STR_Init_ExtdbFail","BLACK FADED",99999999];
};

waitUntil {life_server_isReady};
diag_log "[Life Client] Server loading completed ";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED",99999999];

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED",99999999];

[] spawn life_fnc_escInterupt;

switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
        [] call life_fnc_initCop;
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
        [] call life_fnc_initCiv;
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
        [] call life_fnc_initMedic;
    };
    case east: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_adac");
        [] call life_fnc_initAdac;
    };
};
CONSTVAR(life_paycheck);

player setVariable ["restrained", false, true];
player setVariable ["Escorting", false, true];
player setVariable ["transporting", false, true];
player setVariable ["playerSurrender", false, true];
player setVariable ["realname", profileName, true];

diag_log "[Life Client] Past Settings Init";
[] execFSM "core\fsm\client.fsm";
diag_log "[Life Client] Executing client.fsm";

(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
[player, life_settings_enableSidechannel, playerSide] remoteExecCall ["TON_fnc_manageSC", RSERV];

[] spawn life_fnc_survival;

0 cutText ["","BLACK IN"];

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

addMissionEventHandler ["EachFrame", life_fnc_playerTags];
addMissionEventHandler ["EachFrame", life_fnc_revealObjects];

if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};
if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId";

/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player, player getVariable ["realname", name player]] remoteExec ["HC_fnc_wantedProfUpdate", HC_Life];
} else {
    [getPlayerUID player, player getVariable ["realname", name player]] remoteExec ["life_fnc_wantedProfUpdate", RSERV];
};

[] call life_fnc_hudSetup;
life_s = life_bs;
life_p = life_bp;
life_e = life_be;
life_c = life_bc;
life_i = life_bi;
life_a = life_ba;
life_l = life_bl;
[] call life_fnc_hudUpdate;

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime - _timeStamp)];
diag_log "----------------------------------------------------------------------------------------------------";
[] spawn theprogrammer_core_fnc_clientInit;