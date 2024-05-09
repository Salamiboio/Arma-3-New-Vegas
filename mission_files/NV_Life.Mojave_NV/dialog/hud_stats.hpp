#define ST_CENTER         0x02
/*
    Author: Daniel Stuart

    File: hud_stats.hpp
*/

class playerHUD {
    idd = -1;
    duration = 10e10;
    movingEnable = 0;
    fadein = 0;
    fadeout = 0;
    name = "playerHUD";
    onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
    objects[] = {};
    controls[] = {
        Life_RscBackground_HUD,
        Life_RscBackground_HUDSpecial,
        Life_RscProgress_HUDFood,
        Life_RscProgress_HUDHealth,
        Life_RscProgress_HUDWater,
        Life_RscProgress_HUDRads,
        Life_RscText_HUDFood,
        Life_RscText_HUDHealth,
        Life_RscText_HUDWater,
        Life_RscText_HUDRads,
        Life_RscStructuredText_HUDStrength,
        Life_RscStructuredText_HUDPerception,
        Life_RscStructuredText_HUDEndurance,
        Life_RscStructuredText_HUDCharisma,
        Life_RscStructuredText_HUDIntelligence,
        Life_RscStructuredText_HUDAgility,
        Life_RscStructuredText_HUDLuck,
        Life_RscText_HUDStrength,
        Life_RscText_HUDPerception,
        Life_RscText_HUDEndurance,
        Life_RscText_HUDCharisma,
        Life_RscText_HUDIntelligence,
        Life_RscText_HUDAgility,
        Life_RscText_HUDLuck
    };

    /* Background */
    class Life_RscBackground_HUD : Life_RscBackground {
        colorBackground[] = { 0,0,0,0.35 };
        x = 0.414819 * safezoneW + safezoneX;
        y = 0.966953 * safezoneH + safezoneY;
        w = 0.221719 * safezoneW;
        h = 0.033 * safezoneH;
    };
    class Life_RscBackground_HUDSpecial : Life_RscBackground {
        colorBackground[] = { 0,0,0,0.35 };
        x = 0.4175 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.221719 * safezoneW;
        h = 0.033 * safezoneH;
    };

    /* Progress Bars */
    class LIFE_RscProgress_HUDCommon : Life_RscProgress {
        colorFrame[] = { 0, 0, 0, 0.8 };
        y = 0.972223 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };

    class Life_RscProgress_HUDFood : LIFE_RscProgress_HUDCommon {
        idc = 2200;
        colorBar[] = { 0,0.50,0,0.65 };
        x = 0.418981 * safezoneW + safezoneX;
    };

    class Life_RscProgress_HUDHealth : LIFE_RscProgress_HUDCommon {
        idc = 2201;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.476852 * safezoneW + safezoneX;
    };

    class Life_RscProgress_HUDWater : LIFE_RscProgress_HUDCommon {
        idc = 2202;
        colorBar[] = { 0,0.25,0.65,0.65 };
        x = 0.534723 * safezoneW + safezoneX;
    };
    class Life_RscProgress_HUDRads : LIFE_RscProgress_HUDCommon {
        idc = 2203;
        colorBar[] = { 0.80,0.51,0,0.65 };
        x = 0.592594 * safezoneW + safezoneX;
    };

    /* Special */
    class Life_RscStructuredText_HUDStrength : LIFE_RscProgress_HUDCommon
    {
        idc = 2204;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.418981 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };
    class Life_RscStructuredText_HUDPerception : LIFE_RscProgress_HUDCommon
    {
        idc = 2205;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.476852 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };
    class Life_RscStructuredText_HUDEndurance : LIFE_RscProgress_HUDCommon
    {
        idc = 2206;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.534723 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };
    class Life_RscStructuredText_HUDCharisma : LIFE_RscProgress_HUDCommon
    {
        idc = 2207;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.592594 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };
    class Life_RscStructuredText_HUDIntelligence : LIFE_RscProgress_HUDCommon
    {
        idc = 2208;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.650465 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };
    class Life_RscStructuredText_HUDAgility : LIFE_RscProgress_HUDCommon
    {
        idc = 2209;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.708336 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };
    class Life_RscStructuredText_HUDLuck : LIFE_RscProgress_HUDCommon
    {
        idc = 2210;
        colorBar[] = { 0.85,0.05,0,0.65 };
        x = 0.766207 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };

    /* Texts */
    class Life_RscText_HUDCommon : Life_RscText {
        SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        style = ST_CENTER;
        y = 0.972223 * safezoneH + safezoneY;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };

    class Life_RscText_HUDFood : Life_RscText_HUDCommon {
        idc = 1200;
        text = "$STR_HUD_Food";
        x = 0.418981 * safezoneW + safezoneX;
    };

    class Life_RscText_HUDHealth : Life_RscText_HUDCommon {
        idc = 1201;
        text = "$STR_HUD_Health";
        x = 0.476852 * safezoneW + safezoneX;
    };

    class Life_RscText_HUDWater : Life_RscText_HUDCommon {
        idc = 1202;
        text = "$STR_HUD_Water";
        x = 0.534723 * safezoneW + safezoneX;
    };
    class Life_RscText_HUDRads : Life_RscText_HUDCommon {
        idc = 1203;
        text = "Rads";
        x = 0.592594 * safezoneW + safezoneX;
    };
    class Life_RscText_HUDStrength : Life_RscText_HUDCommon {
        idc = 1204;
        text = "Strength";
        x = 0.418981 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
    class Life_RscText_HUDPerception : Life_RscText_HUDCommon {
        idc = 1205;
        text = "Perception";
        x = 0.476852 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
    class Life_RscText_HUDEndurance : Life_RscText_HUDCommon {
        idc = 1204;
        text = "Endurance";
        x = 0.534723 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
    class Life_RscText_HUDCharisma : Life_RscText_HUDCommon {
        idc = 1204;
        text = "Charisma";
        x = 0.592594 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
    class Life_RscText_HUDIntelligence : Life_RscText_HUDCommon {
        idc = 1204;
        text = "Intelligence";
        x = 0.650465 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
    class Life_RscText_HUDAgility : Life_RscText_HUDCommon {
        idc = 1204;
        text = "Agility";
        x = 0.708336 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
    class Life_RscText_HUDLuck : Life_RscText_HUDCommon {
        idc = 1204;
        text = "Luck";
        x = 0.766207 * safezoneW + safezoneX;
        y = 0.94 * safezoneH + safezoneY;
    };
};
