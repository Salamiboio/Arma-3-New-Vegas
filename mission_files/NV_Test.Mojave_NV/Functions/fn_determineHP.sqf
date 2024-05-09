_HP = 100; // 100
_STRENGTH = str((parseText(ctrlText 1000))) splitString " ";
_ENDURANCE = str((parseText(ctrlText 1002))) splitString " ";
_STNUM =  parseNumber(format["%1%2",(_STRENGTH select 0), (_STRENGTH select 1)]); //05
_ENNUM =  parseNumber(format["%1%2",(_ENDURANCE select 0), (_ENDURANCE select 1)]);
_HPFINAL = _HP + ((_STNUM * 8 - 40) + (_ENNUM * 8 - 40));
_HPPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>Health Points    %1/%1</t>", _HPFINAL];
(displayCtrl 1168) ctrlSetStructuredText parseText _HPPUSH;