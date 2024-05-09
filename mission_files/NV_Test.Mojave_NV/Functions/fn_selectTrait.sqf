params ["_idc", "_idc2"];
_TRAIT = parseText (ctrlText _idc);
_TRAITSELECTED = parseNumber (ctrlText _idc2);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl _idc) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [_idc2, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl _idc) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [_idc2, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
};

