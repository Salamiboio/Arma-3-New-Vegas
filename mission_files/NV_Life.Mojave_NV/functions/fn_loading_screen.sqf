params ["_from", "_to", "_name"];

_from addAction
	[format
		["Enter %1",_name],	// title
		{
			params ["", "", "", "_to"];
			player setPosASL (getPosASL debug);
			_vx = safezoneX + (safezoneW * 0);
			_vy = safezoneY + (safezoneH * 0);
			_vw = safezoneW * 1;
			_vh = safezoneH * 1;
			["load.ogv",[_vx,_vy,_vw,_vh]] spawn BIS_fnc_playVideo;
			sleep 5;
			player setPosASL (getPosASL _to);
		},
		_to,		// arguments
		1.5,		// priority
		true,		// showWindow
		false,		// hideOnUse
		"",			// shortcut
		"",		// condition
		5,			// radius
		false,		// unconscious
		"",			// selection
		""			// memoryPoint
	];