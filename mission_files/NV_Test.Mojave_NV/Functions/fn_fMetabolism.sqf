_TRAIT = parseText (ctrlText 1107);
_TRAITSELECTED = parseNumber (ctrlText 1009);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
_RR = 0; // 100
_ENDURANCE = str((parseText(ctrlText 1002))) splitString " ";
_ENNUM =  parseNumber(format["%1%2",(_ENDURANCE select 0), (_ENDURANCE select 1)]);
_RRFINAL = ((_ENNUM * 2));
_SIGN = "%";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1107) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1009, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
	_RRPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1%2</t>", 0, _SIGN];
	(displayCtrl 1175) ctrlSetStructuredText parseText _RRPUSH;
};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1107) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1009, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
	_RRPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1%2</t>", _RRFINAL, _SIGN];
	(displayCtrl 1175) ctrlSetStructuredText parseText _RRPUSH;
};