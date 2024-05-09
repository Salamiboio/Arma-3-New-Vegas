_RR = 0; // 100
_ENDURANCE = str((parseText(ctrlText 1002))) splitString " ";
_ENNUM =  parseNumber(format["%1%2",(_ENDURANCE select 0), (_ENDURANCE select 1)]);
_RRFINAL = ((_ENNUM * 2));
_SIGN = "%";
if ((ctrlText 1009) == "0") then {
	_RRPUSH = format["<t size='1' color='#38d408' align='left' 'shadow='0'>%1%2</t>", _RRFINAL, _SIGN];
	(displayCtrl 1175) ctrlSetStructuredText parseText _RRPUSH;
};