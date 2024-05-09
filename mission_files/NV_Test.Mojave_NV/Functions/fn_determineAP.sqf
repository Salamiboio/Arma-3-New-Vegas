_AP = 40; // 100
_AGILITY = str((parseText(ctrlText 1005))) splitString " ";
_AGNUM =  parseNumber(format["%1%2",(_AGILITY select 0), (_AGILITY select 1)]);
_AGFINAL = _AP + ((_AGNUM * 8 - 40));
_AGPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1</t>", _AGFINAL];
(displayCtrl 1173) ctrlSetStructuredText parseText _AGPUSH;