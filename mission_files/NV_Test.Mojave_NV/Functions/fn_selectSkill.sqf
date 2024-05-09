params ["_idc", "_idc2", "_idc3"];
_SKILL = parseText (ctrlText _idc); // "Small Guns"
_SKILLSELECTED = parseNumber (ctrlText _idc2); // 0
_SKILLNUM = parseNumber(str(parseText(ctrlText _idc3))); // 0
_SKILLPOINTS = str(parseText (ctrlText 1159)) splitString " "; // ["0", "3"]
_POINTS = parseNumber(format["%1%2",(_SKILLPOINTS select 0), (_SKILLPOINTS select 1)]);
if (_POINTS == 0 && _SKILLSELECTED == 0) then
{
	hint "You can only select 3 Skills!";
};
if (_POINTS > 0 && _SKILLSELECTED == 0) then
{
	_SKILLPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _SKILL];
	(displayCtrl _idc) ctrlSetStructuredText parseText _SKILLPUSH;
	ctrlSetText [_idc2, "1"];
	_NEWPOINTS = _POINTS - 1;
	_NEWPOINTSPUSH = format["<t size='1.2' color='#38d408' align='left'  shadow='0'>0 %1</t>", _NEWPOINTS];
	(displayCtrl 1159) ctrlSetStructuredText parseText _NEWPOINTSPUSH;
	_NEWSKILLNUM = str(_SKILLNUM + 15) + "%";
	_NEWSKILLPUSH = format["<t size='0.8' color='#ffffff' align='left'  shadow='0'>%1</t>", _NEWSKILLNUM];
	(displayCtrl _idc3) ctrlSetStructuredText parseText _NEWSKILLPUSH;
};
if (_SKILLSELECTED > 0) then
{
	_SKILLPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _SKILL];
	(displayCtrl _idc) ctrlSetStructuredText parseText _SKILLPUSH;
	ctrlSetText [_idc2, "0"];
	_NEWPOINTS = _POINTS + 1;
	_NEWPOINTSPUSH = format["<t size='1.2' color='#38d408' align='left'  shadow='0'>0 %1</t>", _NEWPOINTS];
	(displayCtrl 1159) ctrlSetStructuredText parseText _NEWPOINTSPUSH;
	_NEWSKILLNUM = str(_SKILLNUM - 15) + "%";
	_NEWSKILLPUSH = format["<t size='0.8' color='#38d408' align='left'  shadow='0'>%1</t>", _NEWSKILLNUM];
	(displayCtrl _idc3) ctrlSetStructuredText parseText _NEWSKILLPUSH;
};