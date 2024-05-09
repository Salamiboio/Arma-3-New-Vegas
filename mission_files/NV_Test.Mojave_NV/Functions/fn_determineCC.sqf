_CC = 0; // 100
_LUCK = str((parseText(ctrlText 1006))) splitString " ";
_LKNUM =  parseNumber(format["%1%2",(_LUCK select 0), (_LUCK select 1)]);
_CCFINAL = _CC + ((_LKNUM * 1));
_SIGN = "%";
_CCPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1%2</t>", _CCFINAL, _SIGN];
(displayCtrl 1177) ctrlSetStructuredText parseText _CCPUSH;