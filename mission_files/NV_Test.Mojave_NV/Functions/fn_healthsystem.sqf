params ["_unit", "_causedBy", "_damage", "_instigator"];
_num1 = getAllHitPointsDamage player; 
_hitPoints = _num1 select 0; 
_hitNums = _num1 select 2; 
_healthArray = [];
_k = 0; 

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
            player setHitPointDamage ["hitBody", _bodyDamage];
            player setHitPointDamage [(_x select 0), 1];
        } else
        {
            player setHitPointDamage [(_x select 0), parseNumber (_x select 1)]; 
        };
}forEach _healthArrayFinal;
