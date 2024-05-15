	life_p = life_p - 1;
    life_i = life_i - 1;
    while {alive player} do 
    {
        if ((daytime > 6 && daytime < 18) && life_NPerson == 1) then
        {
    		life_p = life_p - 2;
    		life_i = life_i - 2;
            life_NPerson = 2;

        };
        if ((daytime > 18) && life_NPerson == 2) then
        {
    		life_p = life_p + 2;
    		life_i = life_i + 2;
            life_NPerson = 1;
        };
        sleep 60;
    };