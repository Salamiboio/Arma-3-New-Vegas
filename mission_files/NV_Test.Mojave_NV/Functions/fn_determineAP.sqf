_AP = str((parseText(ctrlText 1173))) splitString " ";
_APNUM =  0; // 100
_AGILITY = str((parseText(ctrlText 1005))) splitString " ";
_AGNUM =  parseNumber(format["%1%2",(_AGILITY select 0), (_AGILITY select 1)]);
_AGFINAL = _APNUM + ((_AGNUM * 8) - _APNUM) + (15 * parsenumber(ctrltext(1014))) - (10 * (parseNumber(ctrlText(1010))));
_AGPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _AGFINAL];
(displayCtrl 1173) ctrlSetStructuredText parseText _AGPUSH;