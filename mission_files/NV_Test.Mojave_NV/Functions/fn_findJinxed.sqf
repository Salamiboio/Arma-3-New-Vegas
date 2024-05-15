while {alive player} do 
{
    _jinxedPlayers = unittest nearEntities 5 select {((_x getVariable ["life_jinxed",0]) == 0)}; 
    {
        _x setVariable ["life_Jinxed", 2]; 
        [] remoteExec ["sal_fnc_jinxed", _x];  
    } forEach _jinxedPlayers;
    sleep 5;
};