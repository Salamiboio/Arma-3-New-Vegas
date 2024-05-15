params ["_unit", "_causedBy", "_damage", "_instigator"];
_num1 = getAllHitPointsDamage player; 
_hitPoints = _num1 select 0; 
_hitNums = _num1 select 2; 
_healthArray = [];
_k = 0; 
_hitNums set [11, 0];
if (_hitNums select 0 > 0|| _hitNums select 1 > 0) then
    {
        _headDamage = (_hitNums select 0) + (_hitNums select 1) + (_hitNums select 2);
        _hitNums set [0, 0];
        _hitNums set [1, 0];
        _hitNums set [2, _headDamage];
    };
if (_hitNums select 3 > 0 || _hitNums select 4 > 0|| _hitNums select 5 > 0|| _hitNums select 6 > 0) then
    {
        _chestDamage = (_hitNums select 3) + (_hitNums select 4) + (_hitNums select 5) + (_hitNums select 6) + (_hitNums select 7);
        _hitNums set [3, 0];
        _hitNums set [4, 0];
        _hitNums set [5, 0];
        _hitNums set [6, 0];
        _hitNums set [7, _chestDamage];
    };
if (_hitNums select 8 > 0) then
    {
        _armDamage = (_hitNums select 8) + (_hitNums select 9);
        _hitNums set [8, 0];
        _hitNums set [9, _armDamage];
    };
{ 
    if ((_hitNums select _k) == 1) then 
    {
        _number1 = "1";
        _healthArray append [format["%1,%2", _x, _number1]]
    } else
    {
        _healthDamage = str((_hitNums select _k));
        _healthArray append [format["%1,%2", _x, _healthDamage]]; 
    };
    _k = _k + 1; 
}forEach _hitPoints; 

_healthArrayFinal = [];  
{     
    _healthArrayFinal append [_x splitString ","];     
}forEach _healthArray; 

player setDamage 0; 

{ 
    if (parseNumber (_x select 1) == 1) then 
        {
            _bodyDamage = (_hitNums select 7) + _damage;
            _cutDamage = [_bodyDamage, 2] call BIS_fnc_cutDecimals;
            player setHitPointDamage ["hitBody", _cutDamage];
            player setHitPointDamage [(_x select 0), 1];
        } else
        {
            _Damage = parseNumber (_x select 1);
            _cutDamage = [_Damage, 2] call BIS_fnc_cutDecimals;
            player setHitPointDamage [(_x select 0), _cutDamage]; 
        };
}forEach _healthArrayFinal;
