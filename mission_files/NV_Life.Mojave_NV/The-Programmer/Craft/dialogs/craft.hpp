/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class Maxence_Craft {
   idd = 6940;
   name = "Maxence_Craft";
   movingenable = 0;
   enablesimulation = 1;
   onload = "";
   class controlsBackground
   {
       class Fond : life_RscPicture
       {
           x = 0.254166666666667 * safezoneW + safezoneX;
           y = 0.0960914454277286 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.85 * safezoneH;
           idc = 6949;
           text = "";
       };
   };
   class controls
   {
       class listCategories : Life_RscCombo
       {
           idc = 6954;
           x = 0.320520333333333 * safezoneW + safezoneX;
           y = 0.333 * safezoneH + safezoneY;
           w = 0.178438000000001 * safezoneW;
           h = 0.0231054330285099 * safezoneH;
           onlbselchanged = "_this call max_craft_fnc_workBenchShowCrafts;";
           colortext[] = {0,0,0,1};
           colorselectbackground[] = {0.95, 0.95, 0.95, 0.5};
           colorBackground[] = {0.4,0.4,0.4,0.6};
       };
       class craftsListSelect : Life_RscListBox
       {
           idc = 6955;
           text = "";
           sizeex = 0.035;
           onlbselchanged = "";
           x = 0.320520333333333 * safezoneW + safezoneX;
           y = 0.357181280258203 * safezoneH + safezoneY;
           w = 0.178438000000001 * safezoneW;
           h = 0.178625012760479 * safezoneH;
       };
       class craftsListFull : Life_RscListBox
       {
           idc = 6941;
           text = "";
           sizeex = 0.035;
           onlbselchanged = "";
           x = 0.320520333333333 * safezoneW + safezoneX;
           y = 0.33 * safezoneH + safezoneY;
           w = 0.178438000000001 * safezoneW;
           h = 0.205806293018682 * safezoneH;
       };
       class itemsRequirements_menu : Life_RscControlsGroup
       {
           idc = -1;
           x = 0.5109375 * safezoneW + safezoneX;
           y = 0.333 * safezoneH + safezoneY;
           w = 0.179166666666667 * safezoneW;
           h = 0.314950835791543 * safezoneH;
           class Controls
            {
                 class itemsRequirements : Life_RscStructuredText
                 {
                     idc = 6942;
                     text = "";
                     x = 0;
                     y = 0;
                     w = 0.179166666666667 * safezoneW;
                     h = 0.8 * safezoneH;
                     colorbackground[] = {0,0,0,0.7};
                 };
            };
       };
       class ProgressBar : Life_RscProgress
       {
           idc = 6943;
           x = 0.5109375 * safezoneW + safezoneX;
           y = 0.658 * safezoneH + safezoneY;
           w = 0.179166666666667 * safezoneW;
           h = 0.04031465093412 * safezoneH;
           colorframe[] = {1,1,1,1};
           colorbar[] = {0.07,0.48,0.68,0.7};
       };
       class ProgressText : Life_RscText
       {
           idc = 6944;
           text = "";
           x = 0.5109375 * safezoneW + safezoneX;
           y = 0.658 * safezoneH + safezoneY;
           w = 0.179166666666667 * safezoneW;
           h = 0.04031465093412 * safezoneH;
           colortext[] = {1,1,1,1};
       };
       class myItemList : Life_RscListBox
       {
           idc = 6945;
           text = "";
           sizeex = 0.035;
           x = 0.320520333333333 * safezoneW + safezoneX;
           y = 0.585 * safezoneH + safezoneY;
           w = 0.0878130000000003 * safezoneW;
           h = 0.113795476892822 * safezoneH;
       };
       class craftItemList : Life_RscListBox
       {
           idc = 6946;
           text = "";
           sizeex = 0.035;
           x = 0.412187 * safezoneW + safezoneX;
           y = 0.585 * safezoneH + safezoneY;
           w = 0.0872921666666667 * safezoneW;
           h = 0.113795476892822 * safezoneH;
       };
       class storeEdit : Life_RscEdit
       {
           idc = 6947;
           text = "1";
           sizeex = 0.030;
           x = 0.3668745 * safezoneW + safezoneX;
           y = 0.705 * safezoneH + safezoneY;
           w = 0.0388546666666667 * safezoneW;
           h = 0.0135496558505403 * safezoneH;
       };
       class retreiveEdit : Life_RscEdit
       {
           idc = 6948;
           text = "1";
           sizeex = 0.030;
           x = 0.457291666666666 * safezoneW + safezoneX;
           y = 0.7053 * safezoneH + safezoneY;
           w = 0.0390625 * safezoneW;
           h = 0.0135496558505403 * safezoneH;
       };
       class retreiveButton : Life_RscButtonInvisibleCraft
       {
           idc = 6950;
           text = "";
           onbuttonclick = "";
           x = 0.340832833333333 * safezoneW + safezoneX;
           y = 0.723 * safezoneH + safezoneY;
           w = 0.047188 * safezoneW;
           h = 0.0217000983284169 * safezoneH;
       };
       class storeButton : Life_RscButtonInvisibleCraft
       {
           idc = 6951;
           text = "";
           onbuttonclick = "";
           x = 0.434062 * safezoneW + safezoneX;
           y = 0.723 * safezoneH + safezoneY;
           w = 0.0466671666666667 * safezoneW;
           h = 0.0217000983284169 * safezoneH;
       };
       class craft : Life_RscButtonInvisibleCraft
       {
           idc = 6952;
           text = "";
           onbuttonclick = "";
           x = 0.603332833333333 * safezoneW + safezoneX;
           y = 0.705 * safezoneH + safezoneY;
           w = 0.0883338333333333 * safezoneW;
           h = 0.0344827925270398 * safezoneH;
       };
       class cancel : Life_RscButtonInvisibleCraft
       {
           idc = 6953;
           text = "";
           onbuttonclick = "";
           x = 0.5109375 * safezoneW + safezoneX;
           y = 0.705 * safezoneH + safezoneY;
           w = 0.0854166666666667 * safezoneW;
           h = 0.0344827925270398 * safezoneH;
       };
   };
};