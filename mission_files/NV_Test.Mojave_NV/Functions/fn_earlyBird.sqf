life_s = life_s - 1;
    life_p = life_p - 1;
    life_e = life_e - 1;
    life_c = life_c - 1;
    life_i = life_i - 1;
    life_a = life_a - 1;
    life_l = life_l - 1;
    while {alive player} do 
    {
        if ((daytime > 6 && daytime < 12) && life_EBird == 1) then
        {
            life_s = life_s + 3;
            life_p = life_p + 3;
            life_e = life_e + 3;
            life_c = life_c + 3;
            life_i = life_i + 3;
            life_a = life_a + 3;
            life_l = life_l + 3;
            life_EBird = 2;

        };
        if ((daytime > 12) && life_EBird == 2) then
        {
            life_s = life_s - 3;
            life_p = life_p - 3;
            life_e = life_e - 3;
            life_c = life_c - 3;
            life_i = life_i - 3;
            life_a = life_a - 3;
            life_l = life_l - 3;
            life_EBird = 1;
        };
        sleep 60;
    };