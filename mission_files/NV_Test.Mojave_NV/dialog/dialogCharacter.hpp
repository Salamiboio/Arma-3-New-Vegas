////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Salami, v1.063, #Mahute)
////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
/// Styles
///////////////////////////////////////////////////////////////////////////

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
#define CT_CHECKBOX         77

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////
class RscText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] =
	{
		0,
		0,
		0,
		0.5
	};
	font = "RobotoCondensed";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
};
class RscStructuredText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#ffffff";
		colorLink = "#D09B43";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 1;
};
class RscPicture
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
};
class RscEdit
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorSelection[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		1
	};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "RobotoCondensed";
	shadow = 2;
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	canModify = 1;
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
};
class RscCombo
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 4;
	colorSelect[] =
	{
		0,
		0,
		0,
		1
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		1
	};
	colorScrollbar[] =
	{
		1,
		0,
		0,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorPicture[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] =
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundSelect",
		0.1,
		1
	};
	soundExpand[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundExpand",
		0.1,
		1
	};
	soundCollapse[] =
	{
		"\A3\ui_f\data\sound\RscCombo\soundCollapse",
		0.1,
		1
	};
	maxHistoryDelay = 1;
	class ComboScrollBar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
	};
	style = "0x10 + 0x200";
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelectBackground[] =
	{
		1,
		1,
		1,
		0.7
	};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] =
	{
		1,
		0,
		0,
		1
	};
};
class RscListBox
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 5;
	rowHeight = 0;
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorScrollbar[] =
	{
		1,
		0,
		0,
		0
	};
	colorSelect[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelect2[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelectBackground[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorSelectBackground2[] =
	{
		1,
		1,
		1,
		0.5
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0.3
	};
	soundSelect[] =
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.09,
		1
	};
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	colorPicture[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightSelected[] =
	{
		1,
		1,
		1,
		1
	};
	colorPictureRightDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorTextRight[] =
	{
		1,
		1,
		1,
		1
	};
	colorSelectRight[] =
	{
		0,
		0,
		0,
		1
	};
	colorSelect2Right[] =
	{
		0,
		0,
		0,
		1
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	class ListScrollBar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
		autoScrollEnabled = 1;
	};
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
	style = 16;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	colorShadow[] =
	{
		0,
		0,
		0,
		0.5
	};
	period = 1.2;
	maxHistoryDelay = 1;
};
class RscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] =
	{
		0,
		0,
		0,
		0
	};
	colorDisabled[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundDisabled[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundActive[] =
	{
		0,
		0,
		0,
		0
	};
	colorFocused[] =
	{
		0,
		0,
		0,
		0
	};
	colorShadow[] =
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] =
	{
		0,
		0,
		0,
		0
	};
	soundEnter[] =
	{
		"",
		0.09,
		1
	};
	soundPush[] =
	{
		"",
		0.09,
		1
	};
	soundClick[] =
	{
		"",
		1,
		1
	};
	soundEscape[] =
	{
		"",
		0.09,
		1
	};
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url = "";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class RscShortcutButton
{
	deletable = 0;
	fade = 0;
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	shortcuts[] =
	{
	};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocused[] =
	{
		1,
		1,
		1,
		1
	};
	color2[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		1
	};
	colorBackgroundFocused[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		1
	};
	colorBackground2[] =
	{
		1,
		1,
		1,
		1
	};
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 1;
	w = 0.183825;
	h = "((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	textSecondary = "";
	colorSecondary[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocusedSecondary[] =
	{
		1,
		1,
		1,
		1
	};
	color2Secondary[] =
	{
		0.95,
		0.95,
		0.95,
		1
	};
	colorDisabledSecondary[] =
	{
		1,
		1,
		1,
		0.25
	};
	sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "RobotoCondensed";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus = 1.2;
	periodOver = 0.8;
	period = 0.4;
	font = "RobotoCondensed";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text = "";
	url = "";
	action = "";
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
	};
};
class RscShortcutButtonMain
{
	idc = -1;
	style = 0;
	default = 0;
	w = 0.313726;
	h = 0.104575;
	color[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		w = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (3/4)";
		h = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	};
	class TextPos
	{
		left = "(((safezoneW / safezoneH) min 1.2) / 32) * 1.5";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 20)*2 - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)) / 2";
		right = 0.005;
		bottom = 0;
	};
	animTextureNormal = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	animTextureDisabled = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\disabled_ca.paa";
	animTextureOver = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\over_ca.paa";
	animTextureFocused = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\focus_ca.paa";
	animTexturePressed = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\down_ca.paa";
	animTextureDefault = "\A3\ui_f\data\GUI\RscCommon\RscShortcutButtonMain\normal_ca.paa";
	period = 0.5;
	font = "RobotoCondensed";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	text = "";
	action = "";
	class Attributes
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class AttributesImage
	{
		font = "RobotoCondensed";
		color = "#E5E5E5";
		align = "false";
	};
};
class RscFrame
{
	type = 0;
	idc = -1;
	deletable = 0;
	style = 64;
	shadow = 2;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	font = "RobotoCondensed";
	sizeEx = 0.02;
	text = "";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.3;
};
class RscSlider
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 3;
	style = 1024;
	color[] =
	{
		1,
		1,
		1,
		0.8
	};
	colorActive[] =
	{
		1,
		1,
		1,
		1
	};
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.025;
};
class IGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] =
	{
		0,
		0,
		0,
		0
	};
	font = "RobotoCondensed";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] =
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};
class RscCheckBox
{
	idc = -1;
	type = 77;
	deletable = 0;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] =
	{
		1,
		1,
		1,
		0.7
	};
	colorFocused[] =
	{
		1,
		1,
		1,
		1
	};
	colorHover[] =
	{
		1,
		1,
		1,
		1
	};
	colorPressed[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.2
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundFocused[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundHover[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundPressed[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundDisabled[] =
	{
		0,
		0,
		0,
		0
	};
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	soundEnter[] =
	{
		"",
		0.1,
		1
	};
	soundPush[] =
	{
		"",
		0.1,
		1
	};
	soundClick[] =
	{
		"",
		0.1,
		1
	};
	soundEscape[] =
	{
		"",
		0.1,
		1
	};
};
class RscTextCheckBox
{
	idc = -1;
	type = 7;
	style = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	colorText[] =
	{
		1,
		0,
		0,
		1
	};
	color[] =
	{
		0,
		0,
		0,
		0
	};
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorTextSelect[] =
	{
		0,
		0.8,
		0,
		1
	};
	colorSelectedBg[] =
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		1
	};
	colorSelect[] =
	{
		0,
		0,
		0,
		1
	};
	colorTextDisable[] =
	{
		0.4,
		0.4,
		0.4,
		1
	};
	colorDisable[] =
	{
		0.4,
		0.4,
		0.4,
		1
	};
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	font = "RobotoCondensed";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	rows = 1;
	columns = 1;
	strings[] =
	{
		"UNCHECKED"
	};
	checked_strings[] =
	{
		"CHECKED"
	};
};
class RscButtonMenu
{
	idc = -1;
	type = 16;
	style = "0x02 + 0xC0";
	default = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] =
	{
		0,
		0,
		0,
		0.8
	};
	colorBackgroundFocused[] =
	{
		1,
		1,
		1,
		1
	};
	colorBackground2[] =
	{
		0.75,
		0.75,
		0.75,
		1
	};
	color[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocused[] =
	{
		0,
		0,
		0,
		1
	};
	color2[] =
	{
		0,
		0,
		0,
		1
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	textSecondary = "";
	colorSecondary[] =
	{
		1,
		1,
		1,
		1
	};
	colorFocusedSecondary[] =
	{
		0,
		0,
		0,
		1
	};
	color2Secondary[] =
	{
		0,
		0,
		0,
		1
	};
	colorDisabledSecondary[] =
	{
		1,
		1,
		1,
		0.25
	};
	sizeExSecondary = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary = "PuristaLight";
	period = 1.2;
	periodFocus = 1.2;
	periodOver = 1.2;
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] =
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] =
	{
		0,
		0,
		0,
		0.65
	};
	class TextPos
	{
		left = "0.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right = 0.005;
		bottom = 0;
	};
	class Attributes
	{
		font = "PuristaLight";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class ShortcutPos
	{
		left = "5.25 * (((safezoneW / safezoneH) min 1.2) / 40)";
		top = 0;
		w = "1 * (((safezoneW / safezoneH) min 1.2) / 40)";
		h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.09,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.09,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.09,
		1
	};
};
class RscButtonMenuOK
{
	idc = 1;
	shortcuts[] =
	{
		"0x00050000 + 0",
		28,
		57,
		156
	};
	default = 1;
	text = "OK";
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButtonMenuOK\soundPush",
		0.09,
		1
	};
};
class RscButtonMenuCancel
{
	idc = 2;
	shortcuts[] =
	{
		"0x00050000 + 1"
	};
	text = "Cancel";
};
class RscControlsGroup
{
	deletable = 0;
	fade = 0;
	class VScrollbar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
		width = 0.021;
		autoScrollEnabled = 1;
	};
	class HScrollbar
	{
		color[] =
		{
			1,
			1,
			1,
			1
		};
		height = 0.028;
	};
	class Controls
	{
	};
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
};

class playerCreation {
	idd = 4099;
	duration = 10e10;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerCreation";
	onLoad = "";
	objects[] = {};
	controls[] = {
		Background1,
		BackgroundL,
		BackgroundR,
		STUP,
		STDOWN,
		PEUP,
		PEDOWN,
		ENUP,
		ENDOWN,
		CHUP,
		CHDOWN,
		INUP,
		INDOWN,
		AGUP,
		AGDOWN,
		LKUP,
		LKDOWN,
		STTEXT,
		PETEXT,
		ENTEXT,
		CHTEXT,
		INTEXT,
		AGTEXT,
		LKTEXT,
		STDESC,
		PEDESC,
		ENDESC,
		CHDESC,
		INDESC,
		AGDESC,
		LKDESC,
		CHARPOINTS,
		Done,
		FMTEXT,
		BRTEXT,
		SFTEXT,
		OHTEXT,
		FITEXT,
		KATEXT,
		HHTEXT,
		EBTEXT,
		HBTEXT,
		JITEXT,
		GNTEXT,
		CRTEXT,
		CRTEXT2,
		NPTEXT,
		SKTEXT,
		GITEXT,
		FMSEL,
		BRSEL,
		SFSEL,
		OHSEL,
		FISEL,
		KASEL,
		HHSEL,
		EBSEL,
		HBSEL,
		JISEL,
		GNSEL,
		CRSEL,
		CRSEL2,
		NPSEL,
		SKSEL,
		GISEL,
		TRAITS,
		FMTRAIT,
		BRTRAIT,
		SFTRAIT,
		OHTRAIT,
		FITRAIT,
		KATRAIT,
		HHTRAIT,
		EBTRAIT,
		HBTRAIT,
		JITRAIT,
		GNTRAIT,
		CRTRAIT,
		CRTRAIT2,
		NPTRAIT,
		SKTRAIT,
		GITRAIT,
		SGTEXT,
		BGTEXT,
		EWTEXT,
		UNTEXT,
		MWTEXT,
		THTEXT,
		FATEXT,
		DOTEXT,
		SNTEXT,
		LOTEXT,
		STLTEXT,
		TRTEXT,
		SCTEXT,
		RETEXT,
		SPTEXT,
		BATEXT,
		GATEXT,
		OUTEXT,
		SGNUM,
		BGNUM,
		EWNUM,
		UNNUM,
		MWNUM,
		THNUM,
		FANUM,
		DONUM,
		SNNUM,
		LONUM,
		STLNUM,
		TRNUM,
		SCNUM,
		RENUM,
		SPNUM,
		BANUM,
		GANUM,
		OUNUM,
		SGSEL,
		BGSEL,
		EWSEL,
		UNSEL,
		MWSEL,
		THSEL,
		FASEL,
		DOSEL,
		SNSEL,
		LOSEL,
		STLSEL,
		TRSEL,
		SCSEL,
		RESEL,
		SPSEL,
		BASEL,
		GASEL,
		OUSEL,
		TAGS,
		SGSKILL,
		BGSKILL,
		EWSKILL,
		UNSKILL,
		MWSKILL,
		THSKILL,
		FASKILL,
		DOSKILL,
		SNSKILL,
		LOSKILL,
		STLSKILL,
		TRSKILL,
		SCSKILL,
		RESKILL,
		SPSKILL,
		BASKILL,
		GASKILL,
		OUSKILL,
		HPTEXT,
		TITLE,
		DESC,
		PICTURE,
		APTEXT,
		CWTEXT,
		RRTEXT,
		CCTEXT,
		APNUM,
		CWNUM,
		RRNUM,
		CCNUM

	};

	class Background1 : RscPicture
	{
		idc = 1200;

		text = "background2.paa";
		x = 0.154531 * safezoneW + safezoneX;
		y = -0.00599999 * safezoneH + safezoneY;
		w = 0.696094 * safezoneW;
		h = 1.012 * safezoneH;

	};
	class BackgroundL : RscPicture
	{
		idc = 1201;

		text = "#(argb,8,8,3)color(0,0,0,1)";
		x = -0.0104688 * safezoneW + safezoneX;
		y = -0.00599999 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 1.023 * safezoneH;
	};
	class BackgroundR : RscPicture
	{
		idc = 1202;

		text = "#(argb,8,8,3)color(0,0,0,1)";
		x = 0.840312 * safezoneW + safezoneX;
		y = -0.00599999 * safezoneH + safezoneY;
		w = 0.165 * safezoneW;
		h = 1.012 * safezoneH;
	};
	class STUP : RscButton
	{
		idc = 1600;
		action = "[1000, 1100] call sal_fnc_specialUp; [1143, 55, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1158, 65, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [] call sal_fnc_determineHP;  [] call sal_fnc_determineCW; playSound 'pipboyClick';";
			x = 0.281198 * safezoneW + safezoneX;
		y = 0.291815 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class STDOWN : RscButton
	{
		idc = 1601;
		action = "[1000, 1100] call sal_fnc_specialDown; [1143, 55, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1158, 65, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [] call sal_fnc_determineHP; [] call sal_fnc_determineCW; playSound 'pipboyClick';";
			x = 0.28125 * safezoneW + safezoneX;
		y = 0.302778 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class PEUP : RscButton
	{
		idc = 1602;
		action = "[1001, 1101] call sal_fnc_specialUp; [1149, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1146, 15, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; [1145, 30, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; playSound 'pipboyClick';";
			x = 0.28073 * safezoneW + safezoneX;
		y = 0.325926 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class PEDOWN : RscButton
	{
		idc = 1603;
		action = "[1001, 1101] call sal_fnc_specialDown; [1149, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1146, 15, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; [1145, 30, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; playSound 'pipboyClick';";
			x = 0.28125 * safezoneW + safezoneX;
		y = 0.337963 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class ENUP : RscButton
	{
		idc = 1604;
		action = "[1002, 1102] call sal_fnc_specialUp; [1153, 5, 2, 0, 0, 1, 0, 1, 0, 0] call sal_fnc_determineSkill; [] call sal_fnc_determineHP; [] call sal_fnc_determineRR; playSound 'pipboyClick';";
		x = 0.280729 * safezoneW + safezoneX;
		y = 0.360185 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class ENDOWN : RscButton
	{
		idc = 1605;
		action = "[1002, 1102] call sal_fnc_specialDown; [1153, 5, 2, 0, 0, 1, 0, 1, 0, 0] call sal_fnc_determineSkill; [] call sal_fnc_determineHP; [] call sal_fnc_determineRR; playSound 'pipboyClick';";
			x = 0.28073 * safezoneW + safezoneX;
		y = 0.372222 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class CHUP : RscButton
	{
		idc = 1606;
		action = "[1003, 1103] call sal_fnc_specialUp; [1152, 20, 1, 0, 0, 0, 2, 0, 0, 0] call sal_fnc_determineSkill; [1155, 25, 1, 0, 0, 0, 2, 0, 0, 0] call sal_fnc_determineSkill; playSound 'pipboyClick';";
			x = 0.28125 * safezoneW + safezoneX;
		y = 0.394444 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class CHDOWN : RscButton
	{
		idc = 1607;
		action = "[1003, 1103] call sal_fnc_specialDown; [1152, 20, 1, 0, 0, 0, 2, 0, 0, 0] call sal_fnc_determineSkill; [1155, 25, 1, 0, 0, 0, 2, 0, 0, 0] call sal_fnc_determineSkill; playSound 'pipboyClick';";
			x = 0.28125 * safezoneW + safezoneX;
		y = 0.407407 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class INUP : RscButton
	{
		idc = 1608;
		action = "[1004, 1104] call sal_fnc_specialUp; [1153, 5, 2, 0, 0, 1, 0, 1, 0, 0] call sal_fnc_determineSkill; [1151, 20, 1, 0, 0, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; [1150, 25, 1, 0, 0, 0, 0, 2, 0, 0] call sal_fnc_determineSkill; [1148, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1146, 15, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; [1145, 30, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; playSound 'pipboyClick';";
			x = 0.280729 * safezoneW + safezoneX;
		y = 0.42963 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class INDOWN : RscButton
	{
		idc = 1609;
		action = "[1004, 1104] call sal_fnc_specialDown; [1153, 5, 2, 0, 0, 1, 0, 1, 0, 0] call sal_fnc_determineSkill; [1151, 20, 1, 0, 0, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; [1150, 25, 1, 0, 0, 0, 0, 2, 0, 0] call sal_fnc_determineSkill; [1148, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1148, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1146, 15, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; [1145, 30, 2, 0, 1, 0, 0, 1, 0, 0] call sal_fnc_determineSkill; playSound 'pipboyClick';";
			x = 0.280729 * safezoneW + safezoneX;
		y = 0.441667 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class AGUP : RscButton
	{
		idc = 1610;
		action = "[1005, 1105] call sal_fnc_specialUp; [1149, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1157, 20, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1148, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1147, 25, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1144, 40, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1143, 55, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1158, 65, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1142, 10, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1141, 10, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1140, 35, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [] call sal_fnc_determineAP; playSound 'pipboyClick';";
			x = 0.281249 * safezoneW + safezoneX;
		y = 0.463889 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class AGDOWN : RscButton
	{
		idc = 1611;
		action = "[1005, 1105] call sal_fnc_specialDown; [1149, 20, 2, 0, 1, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1157, 20, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1147, 25, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1144, 40, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1143, 55, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1158, 65, 2, 1, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1142, 10, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1141, 10, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [1140, 35, 1, 0, 0, 0, 0, 0, 1, 0] call sal_fnc_determineSkill; [] call sal_fnc_determineAP; playSound 'pipboyClick';";
			x = 0.280729 * safezoneW + safezoneX;
		y = 0.475926 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class LKUP : RscButton
	{
		idc = 1612;
		action = "[1006, 1106] call sal_fnc_specialUp; [1156, 20, 1, 0, 0, 0, 0, 0, 0, 3] call sal_fnc_determineSkill; [] call sal_fnc_determineCC; playSound 'pipboyClick';";
			x = 0.280729 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class LKDOWN : RscButton
	{
		idc = 1613;
		action = "[1006, 1106] call sal_fnc_specialDown; [1156, 20, 1, 0, 0, 0, 0, 0, 0, 3] call sal_fnc_determineSkill; [] call sal_fnc_determineCC; playSound 'pipboyClick';";
		x = 0.280728 * safezoneW + safezoneX;
		y = 0.511111 * safezoneH + safezoneY;
		w = 0.0103125 * safezoneW;
		h = 0.011 * safezoneH;
	};
	class STTEXT : RscStructuredText
	{
		idc = 1000;
		
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.289194 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;
		sizeEx = 1 * GUI_GRID_H;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class PETEXT : RscStructuredText
	{
		idc = 1001;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.324394 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class ENTEXT : RscStructuredText
	{
		idc = 1002;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.358668 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class CHTEXT : RscStructuredText
	{
		idc = 1003;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.39352 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class INTEXT : RscStructuredText
	{
		idc = 1004;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.429068 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class AGTEXT : RscStructuredText
	{
		idc = 1005;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.464268 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class LKTEXT : RscStructuredText
	{
		idc = 1006;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.213828 * safezoneW + safezoneX;
		y = 0.498194 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class STDESC : RscStructuredText
	{
		idc = 1100;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242032 * safezoneW + safezoneX;
		y = 0.291926 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };
	};
	class PEDESC : RscStructuredText
	{
		idc = 1101;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242708 * safezoneW + safezoneX;
		y = 0.326852 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class ENDESC : RscStructuredText
	{
		idc = 1102;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242032 * safezoneW + safezoneX;
		y = 0.361778 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class CHDESC : RscStructuredText
	{
		idc = 1103;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242032 * safezoneW + safezoneX;
		y = 0.395778 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class INDESC : RscStructuredText
	{
		idc = 1104;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242032 * safezoneW + safezoneX;
		y = 0.430704 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class AGDESC : RscStructuredText
	{
		idc = 1105;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242032 * safezoneW + safezoneX;
		y = 0.46563 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class LKDESC : RscStructuredText
	{
		idc = 1106;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t color='#38d408' align='left' 'shadow='0'>Avrg</t>"; //--- ToDo: Localize;
		x = 0.242032 * safezoneW + safezoneX;
		y = 0.500556 * safezoneH + safezoneY;
		w = 0.0360936 * safezoneW;
		h = 0.0255926 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class CHARPOINTS : RscStructuredText
	{
		idc = 1007;
		sizeEx = 1 * GUI_GRID_H;
		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 5</t>"; //--- ToDo: Localize;
		x = 0.2625 * safezoneW + safezoneX;
		y = 0.548148 * safezoneH + safezoneY;
		w = 0.0320831 * safezoneW;
		h = 0.0311482 * safezoneH;

		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class Done : RscButton
	{
		idc = 1614;
		action = "[] call sal_fnc_specialDone; playSound 'pipboyClick'; closedialog 0;"
		x = 0.5 * safezoneW + safezoneX;
		y = 0.730956 * safezoneH + safezoneY;
		w = 0.0124123 * safezoneW;
		h = 0.0168573 * safezoneH;
	};
	class FMTEXT : RscStructuredText
	{
		idc = 1107;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Fast Metabolism</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.617715 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class BRTEXT : RscStructuredText
	{
		idc = 1108;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Bruiser</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.630841 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SFTEXT : RscStructuredText
	{
		idc = 1109;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Small Frame</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.644972 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class OHTEXT : RscStructuredText
	{
		idc = 1110;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>One Hander</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.65888 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class FITEXT : RscStructuredText
	{
		idc = 1111;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Finesse</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.673091 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class KATEXT : RscStructuredText
	{
		idc = 1112;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Kamikaze</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.687222 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class HHTEXT : RscStructuredText
	{
		idc = 1113;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Heavy Handed</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.700778 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class EBTEXT : RscStructuredText
	{
		idc = 1114;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Early Bird</t>"; //--- ToDo: Localize;
		x = 0.203848 * safezoneW + safezoneX;
		y = 0.714909 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class HBTEXT : RscStructuredText
	{
		idc = 1115;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Hot Blooded</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.61774 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class JITEXT : RscStructuredText
	{
		idc = 1116;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Jinxed</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.630945 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class GNTEXT : RscStructuredText
	{
		idc = 1117;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Good Natured</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.645029 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class CRTEXT : RscStructuredText
	{
		idc = 1118;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Chem Reliant</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.658894 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class CRTEXT2 : RscStructuredText
	{
		idc = 1119;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Chem Resistant</t>"; //--- ToDo: Localize;
		x = 0.332265 * safezoneW + safezoneX;
		y = 0.673199 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class NPTEXT : RscStructuredText
	{
		idc = 1120;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Night Person</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.687284 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SKTEXT : RscStructuredText
	{
		idc = 1121;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Skilled</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.700708 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class GITEXT : RscStructuredText
	{
		idc = 1122;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Gifted</t>"; //--- ToDo: Localize;
		x = 0.332789 * safezoneW + safezoneX;
		y = 0.715013 * safezoneH + safezoneY;
		w = 0.0515765 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class FMSEL : RscButton
	{
		idc = 1615;
		action = "playSound 'pipboyClick';[] call sal_fnc_fMetabolism";
		x = 0.1892 * safezoneW + safezoneX;
		y = 0.623022 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class BRSEL : RscButton
	{
		idc = 1616;
		action = "playSound 'pipboyClick'; [] call sal_fnc_bruiserSelected;";
		x = 0.189743 * safezoneW + safezoneX;
		y = 0.63742 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class SFSEL : RscButton
	{
		idc = 1617;
		action = "playSound 'pipboyClick';[] call sal_fnc_smallFrame";
		x = 0.189219 * safezoneW + safezoneX;
		y = 0.6513 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class OHSEL : RscButton
	{
		idc = 1618;
		action = "playSound 'pipboyClick';[1110, 1012] call sal_fnc_selectTrait";
		x = 0.189218 * safezoneW + safezoneX;
		y = 0.665181 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class FISEL : RscButton
	{
		idc = 1619;
		action = "playSound 'pipboyClick';[] call sal_fnc_finesse";
		x = 0.189218 * safezoneW + safezoneX;
		y = 0.678136 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class KASEL : RscButton
	{
		idc = 1620;
		action = "playSound 'pipboyClick';[] call sal_fnc_kamikaze";
		x = 0.189743 * safezoneW + safezoneX;
		y = 0.691092 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class HHSEL : RscButton
	{
		idc = 1621;
		action = "playSound 'pipboyClick';[1113, 1015] call sal_fnc_selectTrait";
		x = 0.189742 * safezoneW + safezoneX;
		y = 0.705898 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class EBSEL : RscButton
	{
		idc = 1622;
		action = "playSound 'pipboyClick';[1114, 1016] call sal_fnc_selectTrait";
		x = 0.189743 * safezoneW + safezoneX;
		y = 0.719779 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class HBSEL : RscButton
	{
		idc = 1623;
		action = "playSound 'pipboyClick';[1115, 1017] call sal_fnc_selectTrait";
		x = 0.388539 * safezoneW + safezoneX;
		y = 0.624464 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class JISEL : RscButton
	{
		idc = 1624;
		action = "playSound 'pipboyClick';[1116, 1018] call sal_fnc_selectTrait";
		x = 0.389063 * safezoneW + safezoneX;
		y = 0.637419 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class GNSEL : RscButton
	{
		idc = 1625;
		action = "playSound 'pipboyClick';[] call sal_fnc_goodNatured";
		x = 0.388538 * safezoneW + safezoneX;
		y = 0.6513 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class CRSEL : RscButton
	{
		idc = 1626;
		action = "playSound 'pipboyClick';[1118, 1020] call sal_fnc_selectTrait";
		x = 0.389063 * safezoneW + safezoneX;
		y = 0.665181 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class CRSEL2 : RscButton
	{
		idc = 1627;
		action = "playSound 'pipboyClick';[1119, 1021] call sal_fnc_selectTrait";
		x = 0.389063 * safezoneW + safezoneX;
		y = 0.679062 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class NPSEL : RscButton
	{
		idc = 1628;
		action = "playSound 'pipboyClick';[1120, 1022] call sal_fnc_selectTrait";
		x = 0.389062 * safezoneW + safezoneX;
		y = 0.692942 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class SKSEL : RscButton
	{
		idc = 1629;
		action = "playSound 'pipboyClick';[] call sal_fnc_skilledSelected";
		x = 0.389063 * safezoneW + safezoneX;
		y = 0.705898 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class GISEL : RscButton
	{
		idc = 1630;
		action = "playSound 'pipboyClick';[] call sal_fnc_giftedSelected";
		x = 0.389063 * safezoneW + safezoneX;
		y = 0.719779 * safezoneH + safezoneY;
		w = 0.0103153 * safezoneW;
		h = 0.0110037 * safezoneH;
	};
	class TRAITS : RscText
	{
		idc = 1008;
		text = "2"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.00483148 * safezoneH + safezoneY;
		w = 0.0412612 * safezoneW;
		h = 0.0550187 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class FMTRAIT : RscText
	{
		idc = 1009;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.367955 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class BRTRAIT : RscText
	{
		idc = 1010;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.389963 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class SFTRAIT : RscText
	{
		idc = 1011;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.41197 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class OHTRAIT : RscText
	{
		idc = 1012;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.433978 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class FITRAIT : RscText
	{
		idc = 1013;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.455985 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class KATRAIT : RscText
	{
		idc = 1014;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.477992 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class HHTRAIT : RscText
	{
		idc = 1015;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class EBTRAIT : RscText
	{
		idc = 1016;
		text = "0"; //--- ToDo: Localize;
		x = 0.0024873 * safezoneW + safezoneX;
		y = 0.534702 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class HBTRAIT : RscText
	{
		idc = 1017;
		text = "0"; //--- ToDo: Localize;
		x = 0.0135024 * safezoneW + safezoneX;
		y = 0.57912 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class JITRAIT : RscText
	{
		idc = 1018;
		text = "0"; //--- ToDo: Localize;
		x = 0.0140269 * safezoneW + safezoneX;
		y = 0.61521 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class GNTRAIT : RscText
	{
		idc = 1019;
		text = "0"; //--- ToDo: Localize;
		x = 0.0145514 * safezoneW + safezoneX;
		y = 0.64945 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class CRTRAIT : RscText
	{
		idc = 1020;
		text = "0"; //--- ToDo: Localize;
		x = 0.0580871 * safezoneW + safezoneX;
		y = 0.660554 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class CRTRAIT2 : RscText
	{
		idc = 1021;
		text = "0"; //--- ToDo: Localize;
		x = 0.0612342 * safezoneW + safezoneX;
		y = 0.614285 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class NPTRAIT : RscText
	{
		idc = 1022;
		text = "0"; //--- ToDo: Localize;
		x = 0.0617587 * safezoneW + safezoneX;
		y = 0.55506 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class SKTRAIT : RscText
	{
		idc = 1023;
		text = "0"; //--- ToDo: Localize;
		x = 0.0691021 * safezoneW + safezoneX;
		y = 0.501388 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class GITRAIT : RscText
	{
		idc = 1024;
		text = "0"; //--- ToDo: Localize;
		x = 0.078019 * safezoneW + safezoneX;
		y = 0.454193 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class BGTEXT : RscStructuredText
	{
		idc = 1123;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Big Guns</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.286527 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SGTEXT : RscStructuredText
	{
		idc = 1124;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Small Guns</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.275523 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class EWTEXT : RscStructuredText
	{
		idc = 1125;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Energy Weapons</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.298456 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class UNTEXT : RscStructuredText
	{
		idc = 1126;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Unarmed</t>"; //--- ToDo: Localize;
		x = 0.438109 * safezoneW + safezoneX;
		y = 0.310384 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class MWTEXT : RscStructuredText
	{
		idc = 1127;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Melee Weapons</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.322664 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class THTEXT : RscStructuredText
	{
		idc = 1128;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Throwing</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.334018 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class FATEXT : RscStructuredText
	{
		idc = 1129;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>First Aid</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.345948 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class DOTEXT : RscStructuredText
	{
		idc = 1130;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Doctor</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.357876 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SNTEXT : RscStructuredText
	{
		idc = 1131;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Sneak</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.369231 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class LOTEXT : RscStructuredText
	{
		idc = 1132;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Lockpick</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.382086 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class STLTEXT : RscStructuredText
	{
		idc = 1133;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Steal</t>"; //--- ToDo: Localize;
		x = 0.438109 * safezoneW + safezoneX;
		y = 0.392739 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class TRTEXT : RscStructuredText
	{
		idc = 1134;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Traps</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.404092 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SCTEXT : RscStructuredText
	{
		idc = 1135;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Science</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.415097 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class RETEXT : RscStructuredText
	{
		idc = 1136;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Repair</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.427376 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class BATEXT : RscStructuredText
	{
		idc = 1137;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Barter</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.449383 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class GATEXT : RscStructuredText
	{
		idc = 1138;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Gambling</t>"; //--- ToDo: Localize;
		x = 0.438109 * safezoneW + safezoneX;
		y = 0.460387 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class OUTEXT : RscStructuredText
	{
		idc = 1139;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Outdoorsman</t>"; //--- ToDo: Localize;
		x = 0.438108 * safezoneW + safezoneX;
		y = 0.471391 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SGNUM : RscStructuredText
	{
		idc = 1140;

		text = "<t size='0.8' color='#38d408' align='left 'shadow='0'>40%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.275523 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class BGNUM : RscStructuredText
	{
		idc = 1141;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>15%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.286527 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class EWNUM : RscStructuredText
	{
		idc = 1142;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>15%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.298456 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class MWNUM : RscStructuredText
	{
		idc = 1143;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>60%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.322664 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class THNUM : RscStructuredText
	{
		idc = 1144;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>45%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.334018 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class FANUM : RscStructuredText
	{
		idc = 1145;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>35%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.345948 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class DONUM : RscStructuredText
	{
		idc = 1146;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>20%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.357876 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SNNUM : RscStructuredText
	{
		idc = 1147;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>30%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.369231 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class LONUM : RscStructuredText
	{
		idc = 1148;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>25%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.382086 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class TRNUM : RscStructuredText
	{
		idc = 1149;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>25%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.404092 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SCNUM : RscStructuredText
	{
		idc = 1150;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>35%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.415097 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class RENUM : RscStructuredText
	{
		idc = 1151;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>25%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.427376 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class BANUM : RscStructuredText
	{
		idc = 1152;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>30%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.449383 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class OUNUM : RscStructuredText
	{
		idc = 1153;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>10%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.471391 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SPTEXT : RscStructuredText
	{
		idc = 1154;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>Speech</t>"; //--- ToDo: Localize;
		x = 0.438109 * safezoneW + safezoneX;
		y = 0.43838 * safezoneH + safezoneY;
		w = 0.0825223 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SPNUM : RscStructuredText
	{
		idc = 1155;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>35%</t>"; //--- ToDo: Localize;
		x = 0.58768 * safezoneW + safezoneX;
		y = 0.43838 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class GANUM : RscStructuredText
	{
		idc = 1156;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>35%</t>"; //--- ToDo: Localize;
		x = 0.587714 * safezoneW + safezoneX;
		y = 0.460387 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class STLNUM : RscStructuredText
	{
		idc = 1157;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>25%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.392739 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class UNNUM : RscStructuredText
	{
		idc = 1158;

		text = "<t size='0.8' color='#38d408' align='left' 'shadow='0'>70%</t>"; //--- ToDo: Localize;
		x = 0.587716 * safezoneW + safezoneX;
		y = 0.310384 * safezoneH + safezoneY;
		w = 0.0257882 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };

	};
	class SGSEL : RscButton
	{
		idc = 1631;
		action = "playSound 'pipboyClick';[1124, 1025, 1140] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.280585 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class BGSEL : RscButton
	{
		idc = 1632;
		action = "playSound 'pipboyClick';[1123, 1026, 1141] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.292249 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class EWSEL : RscButton
	{
		idc = 1633;
		action = "playSound 'pipboyClick';[1125, 1027, 1142] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.303473 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class UNSEL : RscButton
	{
		idc = 1634;
		action = "playSound 'pipboyClick';[1126, 1028, 1158] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.315357 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class MWSEL : RscButton
	{
		idc = 1635;
		action = "playSound 'pipboyClick';[1127, 1029, 1143] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.326361 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class THSEL : RscButton
	{
		idc = 1636;
		action = "playSound 'pipboyClick';[1128, 1030, 1144] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.337585 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class FASEL : RscButton
	{
		idc = 1637;
		action = "playSound 'pipboyClick';[1129, 1031, 1145] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.349689 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class DOSEL : RscButton
	{
		idc = 1638;
		action = "playSound 'pipboyClick';[1130, 1032, 1146] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.361793 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class SNSEL : RscButton
	{
		idc = 1639;
		action = "playSound 'pipboyClick';[1131, 1033, 1147] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.372797 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class LOSEL : RscButton
	{
		idc = 1640;
		action = "playSound 'pipboyClick';[1132, 1034, 1148] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.384901 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class STLSEL : RscButton
	{
		idc = 1641;
		action = "playSound 'pipboyClick';[1133, 1035, 1157] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.395905 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class TRSEL : RscButton
	{
		idc = 1642;
		action = "playSound 'pipboyClick';[1134, 1036, 1149] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.406908 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class SCSEL : RscButton
	{
		idc = 1643;
		action = "playSound 'pipboyClick';[1135, 1037, 1150] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.419012 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class RESEL : RscButton
	{
		idc = 1644;
		action = "playSound 'pipboyClick';[1136, 1038, 1151] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.430896 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class SPSEL : RscButton
	{
		idc = 1645;
		action = "playSound 'pipboyClick';[1154, 1039, 1155] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.44212 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class BASEL : RscButton
	{
		idc = 1646;
		action = "playSound 'pipboyClick';[1137, 1040, 1152] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.454224 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class GASEL : RscButton
	{
		idc = 1647;
		action = "playSound 'pipboyClick';[1138, 1041, 1156] call sal_fnc_selectSkill;";
		x = 0.424698 * safezoneW + safezoneX;
		y = 0.466108 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class OUSEL : RscButton
	{
		idc = 1648;
		action = "playSound 'pipboyClick';[1139, 1042, 1153] call sal_fnc_selectSkill;";
		x = 0.424802 * safezoneW + safezoneX;
		y = 0.477332 * safezoneH + safezoneY;
		w = 0.00979078 * safezoneW;
		h = 0.00827801 * safezoneH;
	};
	class TAGS : RscStructuredText
	{
		idc = 1159;

		text = "<t size='1.3' color='#38d408' align='left'  shadow='0'>0 3</t>"; //--- ToDo: Localize;
		x = 0.548998 * safezoneW + safezoneX;
		y = 0.490446 * safezoneH + safezoneY;
		w = 0.023229 * safezoneW;
		h = 0.0265186 * safezoneH;
		colorBackground[] = { 0,0,0,0 };
		colorActive[] = { 0,0,0,0 };
		sizeEx = 1 * GUI_GRID_H;
	};
	class SGSKILL : RscText
	{
		idc = 1025;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.367955 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class BGSKILL : RscText
	{
		idc = 1026;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.389963 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class EWSKILL : RscText
	{
		idc = 1027;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.41197 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class UNSKILL : RscText
	{
		idc = 1028;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.433978 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class MWSKILL : RscText
	{
		idc = 1029;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.455985 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class THSKILL : RscText
	{
		idc = 1030;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.477992 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class FASKILL : RscText
	{
		idc = 1031;
		text = "0"; //--- ToDo: Localize;
		x = -0.000291655 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class DOSKILL : RscText
	{
		idc = 1032;
		text = "0"; //--- ToDo: Localize;
		x = 0.0024873 * safezoneW + safezoneX;
		y = 0.534702 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class SNSKILL : RscText
	{
		idc = 1033;
		text = "0"; //--- ToDo: Localize;
		x = 0.0135024 * safezoneW + safezoneX;
		y = 0.57912 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class LOSKILL : RscText
	{
		idc = 1034;
		text = "0"; //--- ToDo: Localize;
		x = 0.0140269 * safezoneW + safezoneX;
		y = 0.61521 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class STLSKILL : RscText
	{
		idc = 1035;
		text = "0"; //--- ToDo: Localize;
		x = 0.0145514 * safezoneW + safezoneX;
		y = 0.64945 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class TRSKILL : RscText
	{
		idc = 1036;
		text = "0"; //--- ToDo: Localize;
		x = 0.0580871 * safezoneW + safezoneX;
		y = 0.660554 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class SCSKILL : RscText
	{
		idc = 1037;
		text = "0"; //--- ToDo: Localize;
		x = 0.0612342 * safezoneW + safezoneX;
		y = 0.614285 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class RESKILL : RscText
	{
		idc = 1038;
		text = "0"; //--- ToDo: Localize;
		x = 0.0617587 * safezoneW + safezoneX;
		y = 0.55506 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class SPSKILL : RscText
	{
		idc = 1039;
		text = "0"; //--- ToDo: Localize;
		x = 0.0691021 * safezoneW + safezoneX;
		y = 0.501388 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class BASKILL : RscText
	{
		idc = 1040;
		text = "0"; //--- ToDo: Localize;
		x = 0.078019 * safezoneW + safezoneX;
		y = 0.454193 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class GASKILL : RscText
	{
		idc = 1041;
		text = "0"; //--- ToDo: Localize;
		x = 0.078019 * safezoneW + safezoneX;
		y = 0.454193 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
		colorText[] = { 0,0,0,0 };
	};
	class OUSKILL : RscText
	{
		idc = 1042;
		text = "0"; //--- ToDo: Localize;
		x = 0.078019 * safezoneW + safezoneX;
		y = 0.454193 * safezoneH + safezoneY;
		w = 0.0154729 * safezoneW;
		h = 0.0220075 * safezoneH;
			colorText[] = { 0,0,0,0 };
		};
	class HPTEXT: RscStructuredText
	{
		idc = 1168;

		text = "<t size='1' color='#38d408' align='left' 'shadow='0'>Health Points    100/100</t>"; //--- ToDo: Localize;
		x = 0.308855 * safezoneW + safezoneX;
		y = 0.29104 * safezoneH + safezoneY;
		w = 0.0929895 * safezoneW;
		h = 0.0264834 * safezoneH;
		colorBackground[] = {0,0,0,0};
		colorActive[] = {0,0,0,0};
	};
	class TITLE: RscText
	{
		idc = 1035;
		text = "Strength"; //--- ToDo: Localize;
		x = 0.422509 * safezoneW + safezoneX;
		y = 0.532994 * safezoneH + safezoneY;
		w = 0.108488 * safezoneW;
		h = 0.0329937 * safezoneH;
		colorText[] = {0,0,0,1};
	};
	class DESC: RscStructuredText
	{
		idc = 1176;
		text = "<t size='1' color='#000000' align='left' 'shadow='0'>Raw physical strength. A high Strength is good for physical characters. Modifies: Hit Points, Melee Damage, and Carry Weight.</t>"; //--- ToDo: Localize;
		x = 0.422509 * safezoneW + safezoneX;
		y = 0.565987 * safezoneH + safezoneY;
		w = 0.129152 * safezoneW;
		h = 0.142973 * safezoneH;
		colorBackground[] = {0,0,0,0};
		colorActive[] = {0,0,0,0};
		sizeEx = 1 * GUI_GRID_H;
	};
	class PICTURE: RscPicture
	{
		idc = 1203;
		text = "#(argb,8,8,3)color(1,1,1,1)";
		x = 0.551661 * safezoneW + safezoneX;
		y = 0.543991 * safezoneH + safezoneY;
		w = 0.0723252 * safezoneW;
		h = 0.164969 * safezoneH;
	};
	class APTEXT: RscStructuredText
	{
		idc = 1169;

		text = "<t size='0.9' color='#38d408' align='left' 'shadow='0'>Action Points</t>"; //--- ToDo: Localize;
		x = 0.308855 * safezoneW + safezoneX;
		y = 0.434013 * safezoneH + safezoneY;
		w = 0.0826573 * safezoneW;
		h = 0.0219958 * safezoneH;
		colorBackground[] = {0,0,0,0};
		colorActive[] = {0,0,0,0};
		sizeEx = 1 * GUI_GRID_H;
	};
	class CWTEXT: RscStructuredText
	{
		idc = 1170;

		text = "<t size='0.9' color='#38d408' align='left' 'shadow='0'>Carry Weight</t>"; //--- ToDo: Localize;
		x = 0.308855 * safezoneW + safezoneX;
		y = 0.456008 * safezoneH + safezoneY;
		w = 0.0826573 * safezoneW;
		h = 0.0219958 * safezoneH;
		colorBackground[] = {0,0,0,0};
		colorActive[] = {0,0,0,0};
		sizeEx = 1 * GUI_GRID_H;
	};
	class RRTEXT: RscStructuredText
	{
		idc = 1171;

		text = "<t size='0.9' color='#38d408' align='left' 'shadow='0'>Radiation Res.</t>"; //--- ToDo: Localize;
		x = 0.308855 * safezoneW + safezoneX;
		y = 0.478004 * safezoneH + safezoneY;
		w = 0.0826573 * safezoneW;
		h = 0.0219958 * safezoneH;
		colorBackground[] = {0,0,0,0};
		colorActive[] = {0,0,0,0};
		sizeEx = 1 * GUI_GRID_H;
	};
	class CCTEXT: RscStructuredText
	{
		idc = 1172;

		text = "<t size='0.9' color='#38d408' align='left' 'shadow='0'>Crtical Chance</t>"; //--- ToDo: Localize;
		x = 0.308855 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0826573 * safezoneW;
		h = 0.0219958 * safezoneH;
		colorBackground[] = {0,0,0,0};
		colorActive[] = {0,0,0,0};
		sizeEx = 1 * GUI_GRID_H;
	};
	class APNUM: RscStructuredText
	{
		idc = 1173;

		text = "<t size='1' color='#38d408' align='left 'shadow='0'>0</t>"; //--- ToDo: Localize;
		x = 0.370848 * safezoneW + safezoneX;
		y = 0.434013 * safezoneH + safezoneY;
		w = 0.0258304 * safezoneW;
		h = 0.0219958 * safezoneH;
	};
	class CWNUM: RscStructuredText
	{
		idc = 1174;

		text = "<t size='1' color='#38d408' align='left 'shadow='0'>50</t>"; //--- ToDo: Localize;
		x = 0.370848 * safezoneW + safezoneX;
		y = 0.456008 * safezoneH + safezoneY;
		w = 0.0258304 * safezoneW;
		h = 0.0219958 * safezoneH;
	};
	class RRNUM: RscStructuredText
	{
		idc = 1175;

		text = "<t size='1' color='#38d408' align='left 'shadow='0'>10%</t>"; //--- ToDo: Localize;
		x = 0.370848 * safezoneW + safezoneX;
		y = 0.478004 * safezoneH + safezoneY;
		w = 0.0258304 * safezoneW;
		h = 0.0219958 * safezoneH;
	};
	class CCNUM: RscStructuredText
	{
		idc = 1177;

		text = "<t size='1' color='#38d408' align='left 'shadow='0'>5%</t>"; //--- ToDo: Localize;
		x = 0.370848 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.0258304 * safezoneW;
		h = 0.0219958 * safezoneH;
	};
};