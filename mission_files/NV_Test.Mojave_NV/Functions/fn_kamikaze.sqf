_TRAIT = parseText (ctrlText 1112);
_TRAITSELECTED = parseNumber (ctrlText 1014);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
_AP = str((parseText(ctrlText 1173))) splitString " ";
_APNUM =  parseNumber(format["%1%2",(_AP select 0), (_AP select 1)]);
_APNUMNEW = _APNUM + 15;
_APNUM = _APNUM - 15;
_APPUSH = "";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1112) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1014, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
	_APPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _APNUMNEW];
};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1112) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1014, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
	_APPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _APNUM];
};
(displayCtrl 1173) ctrlSetStructuredText parseText _APPUSH;