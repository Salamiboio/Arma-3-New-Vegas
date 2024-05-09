/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define true 1
#define false 0

class Max_Settings_Craft {
    default_lang = "en"; // fr / en / de / es

    textures_base_path = "The-Programmer\Craft\textures";

    all_workbench_classnames[] = {"Land_Workbench_01_F", "Land_reloadingbench"};

    item_place_workbench = "etabli";
    3d_object_placed_workbench = "Land_Workbench_01_F,";
    place_only_in_house = true;

    save_workbench_positions = true; // Save the position and re-place the workbench after the reboot of the server
    show_only_one_category = false; // If true all the craft will be displayed, if false the player have to choose the category to show

    class crafts {
        class vItem { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VITEMS";

            class Jet {
                itemsRequired[] = {
                    {"brahminshit",2}
                };
                moneyRequired = 0;

                itemGive = "jet"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = ""; // Put "" for nothing
                picture_path = "icons\ico_jet.paa"; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Making Jet";
                timeToCraft = 20; // In seconds
                automatic_crafting = true; // If true, the craft will repeat again if there is still enought items in the workbench

                scriptCalledOnCraft = ""; // (OPTIONAL) Name of the function to call when crafting. You can use "max_craft_fnc_craftEffectSmoke", "max_craft_fnc_craftEffectPolice" or create your own function in your mission
            };
        };

        class weapon { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_WEAPONS";

        };

        class magazine { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_MAGAZINES";

        };

        class uniform { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_UNIFORM";

        };

        class vest { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VEST";

        };

        class backpack { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_BACKPACK";

        };

        class vehicle { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VEHICLES";

        };
    };
};
