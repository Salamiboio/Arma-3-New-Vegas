/*
_null=this execVM "The-Programmer\Craft\init.sqf";
*/
_this allowDamage false; 
_this enableSimulation false;
_this addAction [(["STR_OPEN_WORKBENCH","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),max_craft_fnc_openWorkBench,"",0,false,false,"",'(isNull (cursorObject getVariable ["workbench_in_use_by",objNull]))'];