params ["_type"];
switch (_type) do 
{
	case "Buffout":
		{
			while {alive player} do 
			{

				life_bAddict = life_bAddict + 1;
				if (life_bAddict == (3 + (3 * life_chemReliant))) then
					{
						[-1,0,-1,0,0,0,0] call sal_fnc_withdrawal;
					};
				if (life_bAddict > 9 || life_bAddict == 0) then
					{
						life_bAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Ultrajet":
		{
			while {alive player} do 
			{

				life_ujAddict = life_ujAddict + 1;
				if (life_ujAddict == (3 + (3 * life_chemReliant))) then
					{
						[-2,-1,0,0,0,-2,0] call sal_fnc_withdrawal;
					};
				if (life_ujAddict > 9 || life_ujAddict == 0) then
					{
						life_ujAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Jet":
		{
			while {alive player} do 
			{

				life_jAddict = life_jAddict + 1;
				if (life_jAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,0,0,-1,0,-1,0] call sal_fnc_withdrawal;
					};
				if (life_jAddict > 9 || life_jAddict == 0) then
					{
						life_jAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Mentats":
		{
			while {alive player} do 
			{

				life_mAddict = life_mAddict + 1;
				if (life_mAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,-1,0,0,-1,0,0] call sal_fnc_withdrawal;
					};
				if (life_mAddict > 9 || life_mAddict == 0) then
					{
						life_mAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Alcohol":
		{
			while {alive player} do 
			{

				life_aAddict = life_aAddict + 1;
				if (life_aAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,0,0,-1,0,-1,0] call sal_fnc_withdrawal;
					};
				if (life_aAddict > 9 || life_aAddict == 0) then
					{
						life_aAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Psycho":
		{
			while {alive player} do 
			{

				life_pAddict = life_pAddict + 1;
				if (life_pAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,-1,-1,0,0,0,0] call sal_fnc_withdrawal;
					};
				if (life_pAddict > 9 || life_pAddict == 0) then
					{
						life_pAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Psycho":
		{
			while {alive player} do 
			{

				life_mxAddict = life_mxAddict + 1;
				if (life_mxAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,0,0,0,-1,-1,0] call sal_fnc_withdrawal;
					};
				if (life_mxAddict > 9 || life_mxAddict == 0) then
					{
						life_mxAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Ant":
		{
			while {alive player} do 
			{

				life_anAddict = life_anAddict + 1;
				if (life_anAddict == (3 + (3 * life_chemReliant))) then
					{
						[-2,0,0,0,0,0,0] call sal_fnc_withdrawal;
					};
				if (life_anAddict > 9 || life_anAddict == 0) then
					{
						life_anAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Tobacco":
		{
			while {alive player} do 
			{

				life_tAddict = life_tAddict + 1;
				if (life_tAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,-1,0,-1,0,0,0] call sal_fnc_withdrawal;
					};
				if (life_tAddict > 9 || life_tAddict == 0) then
					{
						life_tAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Hydra":
		{
			while {alive player} do 
			{

				life_hAddict = life_hAddict + 1;
				if (life_hAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,0,-3,0,0,0,0] call sal_fnc_withdrawal;
					};
				if (life_hAddict > 9 || life_hAddict == 0) then
					{
						life_hAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Turbo":
		{
			while {alive player} do 
			{

				life_tboAddict = life_tboAddict + 1;
				if (life_tboAddict == (3 + (3 * life_chemReliant))) then
					{
						[0,0,0,0,0,-2,0] call sal_fnc_withdrawal;
					};
				if (life_tboAddict > 9 || life_tboAddict == 0) then
					{
						life_tboAddict = 0;
						break;
					};
				sleep 600;
			};
		};
	case "Steady":
		{
			while {alive player} do 
			{

				life_sAddict = life_sAddict + 1;
				if (life_sAddict == (3 + (3 * life_chemReliant))) then
					{
						[-1,0,0,0,0,-1,0] call sal_fnc_withdrawal;
					};
				if (life_sAddict > 9 || life_sAddict == 0) then
					{
						life_sAddict = 0;
						break;
					};
				sleep 600;
			};
		};
};