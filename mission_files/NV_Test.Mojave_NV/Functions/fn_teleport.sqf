params ["_from", "_to"];

_from addAction
	[
		"Teleport",	// title
		{
			params ["", "", "", "_to"];
			player setpos (getpos _to)
		},
		_to,		// arguments
		1.5,		// priority
		true,		// showWindow
		false,		// hideOnUse
		"",			// shortcut
		"true",		// condition
		5,			// radius
		false,		// unconscious
		"",			// selection
		""			// memoryPoint
	];