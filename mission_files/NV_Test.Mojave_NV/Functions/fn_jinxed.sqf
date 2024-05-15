life_l = life_l - 2;
while {alive player} do 
{
    _playerwithJinxed = player nearEntities 5 select {((_x getVariable ["life_jinxed",0]) == 1)};
    _arraySize = count _playerwithJinxed;
    if (_arraySize == 0) then
        {
            life_l = life_l + 2;
            player setVariable ["life_jinxed", 0];
            break;
        };
    sleep 5;
};