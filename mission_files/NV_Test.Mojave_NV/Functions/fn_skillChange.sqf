params ["_IDC", "_NUM"];
_SIGN = "%";
{
	_SKILLSELECTED = parseNumber (ctrlText _x);
	_NEWSKILL = _SKILLSELECTED + _NUM;
	_NEWSKILLPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1%2</t>", _NEWSKILL, _SIGN];
	(displayCtrl _x) ctrlSetStructuredText parseText _NEWSKILLPUSH;
} forEach _idc;