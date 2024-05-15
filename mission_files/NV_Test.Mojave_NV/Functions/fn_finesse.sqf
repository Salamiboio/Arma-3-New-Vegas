_TRAIT = parseText (ctrlText 1111);
_TRAITSELECTED = parseNumber (ctrlText 1013);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
_SIGN = "%";
_CC = str((parseText(ctrlText 1177))) splitString " ";
_CCNUM = parseNumber(format["%1%2",(_CC select 0), (_CC select 1)]);
_CCNEWNUM = _CCNUM + 10;
_CCNUM = _CCNUM - 10;
_CCPUSH = "";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1111) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1013, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
	_CCPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1%2</t>", _CCNEWNUM, _SIGN];
};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1111) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1013, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
	_CCPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1%2</t>", _CCNUM, _SIGN];

};
(displayCtrl 1177) ctrlSetStructuredText parseText _CCPUSH;