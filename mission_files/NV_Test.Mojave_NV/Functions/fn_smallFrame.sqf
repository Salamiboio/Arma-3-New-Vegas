_TRAIT = parseText (ctrlText 1109);
_TRAITSELECTED = parseNumber (ctrlText 1011);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
_CW = str((parseText(ctrlText 1174))) splitString " ";
_CWNUM =  parseNumber(format["%1%2",(_CW select 0), (_CW select 1)]);
_CWNUMNEW = _CWNUM - 25;
_CWNUM = _CWNUM + 25;
_CWPUSH = "";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1109) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1011, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
	[1005, 1105] call sal_fnc_specialUpTrait;
	_CWPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _CWNUMNEW];
	life_kamikaze = 1;
};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1109) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1011, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
	[1005, 1105] call sal_fnc_specialDownTrait;
	_CWPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _CWNUM];
	life_kamikaze = 0;
};
(displayCtrl 1174) ctrlSetStructuredText parseText _CWPUSH;