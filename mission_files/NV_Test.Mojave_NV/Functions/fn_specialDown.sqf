params ["_idc", "_idc2"];
_TEXT = ctrlText _idc;
_POINTSTEXT = ctrlText 1007;
_PARSEDTEXT = parseText _TEXT;
_POINTSTEXT = parseText _POINTSTEXT;
_TEXTSPLIT = str(_PARSEDTEXT) splitString " ";
_POINTSSPLIT = str(_POINTSTEXT) splitString " ";
_POINTS = parseNumber(format["%1%2",(_POINTSSPLIT select 0), (_POINTSSPLIT select 1)]);
_STATS =  parseNumber(format["%1%2",(_TEXTSPLIT select 0), (_TEXTSPLIT select 1)]);
_STATSNEWNUM = _STATS - 1;
_STATSNEW = "";
if (_STATSNEWNUM > 9) then
{
    _STATSNEW = format["%1%2",(str(_STATSNEWNUM) select [0, 1]), (str(_STATSNEWNUM) select [1, 1])];
} else
{
    _STATSNEW = format["0%1",(str(_STATSNEWNUM) select [0, 1])];
};

_POINTSNEWNUM = _POINTS + 1;
_POINTSNEW = "";
if (_POINTSNEWNUM > 9) then
{
    _POINTSNEW = format["%1%2",(str(_POINTSNEWNUM) select [0, 1]), (str(_POINTSNEWNUM) select [1, 1])];
} else
{
    _POINTSNEW = format["0%1",(str(_POINTSNEWNUM) select [0, 1])];
};
_STOP = 0;
_STATSNEWPUSH = "";
_POINTSNEWPUSH = "";
_UPDATE = 0;
if (_STATS <= 1) then {
    _STATSNEWPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_TEXTSPLIT select 0)), (parseNumber(_TEXTSPLIT select 1))];
    _POINTSNEWPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_POINTSSPLIT select 0)), (parseNumber(_POINTSSPLIT select 1))];
    _STOP = 1;
    _UPDATE = parseNumber(format["%1%2",(parseNumber(_TEXTSPLIT select 0)), (parseNumber(_TEXTSPLIT select 1))]);
};
if (_STATSNEWNUM > 10 && _STOP == 0) then {
    _STATSNEWPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_TEXTSPLIT select 0)), (parseNumber(_TEXTSPLIT select 1))];
    _POINTSNEWPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_POINTSSPLIT select 0)), (parseNumber(_POINTSSPLIT select 1))];
    _UPDATE = parseNumber(format["%1%2",(parseNumber(_TEXTSPLIT select 0)), (parseNumber(_TEXTSPLIT select 1))]);
};
if (_STATSNEWNUM <= 10 && _STOP == 0) then {
    _STATSNEWPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_STATSNEW select [0,1])), (parseNumber(_STATSNEW select [1,1]))];
    _POINTSNEWPUSH = format["<t size='1.3' color='#38d408' align='left'  shadow='0'>%1 %2</t>", (parseNumber(_POINTSNEW select [0,1])), (parseNumber(_POINTSNEW select [1,1]))];
    _UPDATE = parseNumber(format["%1%2",(parseNumber(_STATSNEW select [0,1])), (parseNumber(_STATSNEW select [1,1]))]);
};
switch (_UPDATE) do
{
	case 1: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>V.Bad</t>";};
	case 2: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Bad</t>";};
	case 3: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Poor</t>";};
	case 4: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Fair</t>";};
	case 5: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>";};
	case 6: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Good</t>";};
	case 7: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>V.Good</t>";};
	case 8: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Great</t>";};
	case 9: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Exclnt</t>";};
	case 10: {(displayCtrl _idc2) ctrlSetStructuredText parseText "<t color='#38d408' align='left' 'shadow='0'>Heroic</t>";};
};
(displayCtrl _idc) ctrlSetStructuredText parseText _STATSNEWPUSH;
(displayCtrl 1007) ctrlSetStructuredText parseText _POINTSNEWPUSH;