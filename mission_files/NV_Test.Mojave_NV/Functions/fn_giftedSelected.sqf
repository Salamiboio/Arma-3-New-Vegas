_TRAIT = parseText (ctrlText 1122);
_TRAITSELECTED = parseNumber (ctrlText 1024);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1122) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1024, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
	[1000, 1100] call sal_fnc_specialUpTrait;
	[1001, 1101] call sal_fnc_specialUpTrait;
	[1002, 1102] call sal_fnc_specialUpTrait;
	[1003, 1103] call sal_fnc_specialUpTrait;
	[1004, 1104] call sal_fnc_specialUpTrait;
	[1005, 1105] call sal_fnc_specialUpTrait;
	[1006, 1106] call sal_fnc_specialUpTrait;
	[[1140], -10] call sal_fnc_skillchange;
	[[1141], -10] call sal_fnc_skillchange;
	[[1142], -10] call sal_fnc_skillchange;
	[[1158], -10] call sal_fnc_skillchange;
	[[1143], -10] call sal_fnc_skillchange;
	[[1144], -10] call sal_fnc_skillchange;
	[[1145], -10] call sal_fnc_skillchange;
	[[1146], -10] call sal_fnc_skillchange;
	[[1147], -10] call sal_fnc_skillchange;
	[[1148], -10] call sal_fnc_skillchange;
	[[1157], -10] call sal_fnc_skillchange;
	[[1149], -10] call sal_fnc_skillchange;
	[[1150], -10] call sal_fnc_skillchange;
	[[1151], -10] call sal_fnc_skillchange;
	[[1155], -10] call sal_fnc_skillchange;
	[[1152], -10] call sal_fnc_skillchange;
	[[1156], -10] call sal_fnc_skillchange;
	[[1153], -10] call sal_fnc_skillchange;

};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1122) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1024, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
	[1000, 1100] call sal_fnc_specialDownTrait;
	[1001, 1101] call sal_fnc_specialDownTrait;
	[1002, 1102] call sal_fnc_specialDownTrait;
	[1003, 1103] call sal_fnc_specialDownTrait;
	[1004, 1104] call sal_fnc_specialDownTrait;
	[1005, 1105] call sal_fnc_specialDownTrait;
	[1006, 1106] call sal_fnc_specialDownTrait;
	[[1140], 10] call sal_fnc_skillchange;
	[[1141], 10] call sal_fnc_skillchange;
	[[1142], 10] call sal_fnc_skillchange;
	[[1158], 10] call sal_fnc_skillchange;
	[[1143], 10] call sal_fnc_skillchange;
	[[1144], 10] call sal_fnc_skillchange;
	[[1145], 10] call sal_fnc_skillchange;
	[[1146], 10] call sal_fnc_skillchange;
	[[1147], 10] call sal_fnc_skillchange;
	[[1148], 10] call sal_fnc_skillchange;
	[[1157], 10] call sal_fnc_skillchange;
	[[1149], 10] call sal_fnc_skillchange;
	[[1150], 10] call sal_fnc_skillchange;
	[[1151], 10] call sal_fnc_skillchange;
	[[1155], 10] call sal_fnc_skillchange;
	[[1152], 10] call sal_fnc_skillchange;
	[[1156], 10] call sal_fnc_skillchange;
	[[1153], 10] call sal_fnc_skillchange;

};