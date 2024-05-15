_CW = 0; // 100
_STRENGTH = str((parseText(ctrlText 1000))) splitString " ";
_STNUM =  parseNumber(format["%1%2",(_STRENGTH select 0), (_STRENGTH select 1)]);
_CWFINAL = _CW + ((_STNUM * 10)) - (25 * parseNumber(ctrlText(1011)));
_CWPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _CWFINAL];
(displayCtrl 1174) ctrlSetStructuredText parseText _CWPUSH;