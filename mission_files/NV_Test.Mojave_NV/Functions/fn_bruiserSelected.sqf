_TRAIT = parseText (ctrlText 1108);
_TRAITSELECTED = parseNumber (ctrlText 1010);
_TRAITS = parseNumber (ctrlText 1008);
_TRAITPUSH = "";
_STRENGTH = str((parseText(ctrlText 1000))) splitString " ";
_AP = str((parseText(ctrlText 1173))) splitString " ";
_STNUM =  parseNumber(format["%1%2",(_STRENGTH select 0), (_STRENGTH select 1)]); //05
_APNUM =  parseNumber(format["%1%2",(_AP select 0), (_AP select 1)]);
_STNUMNEW = _STNUM + 2;
_APNUMNEW = _APNUM - 10;
_STNUM = _STNUMNEW - 4;
_APNUM = _APNUMNEW + 20;
if (_STNUMNEW > 9) then
{
    _STNUMNEW = format["%1%2",(str(_STNUMNEW) select [0, 1]), (str(_STNUMNEW) select [1, 1])];
} else
{
    _STNUMNEW = format["0%1",(str(_STNUMNEW) select [0, 1])];
};
if (_STNUM > 9) then
{
    _STNUM = format["%1%2",(str(_STNUM) select [0, 1]), (str(_STNUM) select [1, 1])];
} else
{
    _STNUM = format["0%1",(str(_STNUM) select [0, 1])];
};
_STPUSH = "";
_APPUSH = "";
if (_TRAITS == 0 && _TRAITSELECTED == 0) then
{
	hint "You can only select 2 Traits!";
};
if (_TRAITS > 0 && _TRAITSELECTED == 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1108) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1010, "1"];
	_NEWTRAITS = str(_TRAITS - 1);
	ctrlSetText [1008, _NEWTRAITS];
	_STPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_STNUMNEW select [0,1])), (parseNumber(_STNUMNEW select [1,1]))];
	_APPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _APNUMNEW];
};
if (_TRAITSELECTED > 0) then
{
	_TRAITPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _TRAIT];
	(displayCtrl 1108) ctrlSetStructuredText parseText _TRAITPUSH;
	ctrlSetText [1010, "0"];
	_NEWTRAITS = str(_TRAITS + 1);
	ctrlSetText [1008, _NEWTRAITS];
	_STPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_STNUM select [0,1])), (parseNumber(_STNUM select [1,1]))];
	_APPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _APNUM];
};
(displayCtrl 1000) ctrlSetStructuredText parseText _STPUSH;
(displayCtrl 1173) ctrlSetStructuredText parseText _APPUSH;
