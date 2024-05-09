#include "..\..\script_macros.hpp"

/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/

disableSerialization;

if ((lbCurSel 2005) isEqualTo -1) exitWith {
    hint localize "STR_ISTR_SelectItemFirst";
};

private _item = CONTROL_DATA(2005);
#include "..\..\The-Programmer\Craft\scripts\useItemSelect.sqf"
private _edible = M_CONFIG(getNumber, "VirtualItems", _item, "edible");
private _drinkable = M_CONFIG(getNumber, "VirtualItems", _item, "drinkable");

if (_edible > -1 || _drinkable > -1) exitWith {
    if ([false, _item, 1] call life_fnc_handleInv) then {
        if (_edible > -1) then {
            private _sum = life_hunger + _edible;
            life_hunger = (_sum max 5) min 100; // never below 5 or above 100
        };

        if (_drinkable > -1) then {
            private _sum = life_thirst + _drinkable;

            life_thirst = (_sum max 5) min 100; // never below 5 or above 100

            if (LIFE_SETTINGS(getNumber, "enable_fatigue") isEqualTo 1) then {
                player setFatigue 0;
            };
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber, "enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText [localize "STR_ISTR_RedGullEffect", "PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    [] call life_fnc_p_updateMenu;
    [] call life_fnc_hudUpdate;
};

switch (_item) do {
    case "boltcutter": {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case "blastingcharge": {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case "defusekit": {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case "storagesmall": {
        [false] call life_fnc_storageBox;
    };

    case "storagebig": {
        [true] call life_fnc_storageBox;
    };

    case "spikeStrip": {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case "fuelFull": {
        if !(isNull objectParent player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case "fuelEmpty": {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case "lockpick": {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };

    case "stimpack": {
            if ([false, _item, 1] call life_fnc_handleInv) then {
                [+5, 6, "stimpack", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] spawn sal_fnc_useitem;
                closeDialog 0;
        };
    };

    case "ant_egg": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "ant_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "barrel_cactus_fruit": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +5, +15, 0, 0, 0, -1, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "banana_yucca_fruit": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 7, "Chewy1", +10, +15, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "bighorner_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 15, "Chewy1", +50, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "bighorner_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 10, "Chewy1", +75, 0, 2, 1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "black_blood_sausage": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+10 , 20, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "blamco_mac_cheese": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +20, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "bloatfly_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "bloatfly_slider": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+3 , 15, "Chewy1", +75, +30, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "blood_sausage": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+5 , 20, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "brahmin_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 15, "Chewy1", +50, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "brahmin_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 15, "Chewy1", +50, 0, 2, 1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "brahmin_wellington": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+5 , 10, "Chewy1", +100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "broc_flower": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 4, "Chewy1", +5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "bubblegum": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 0, "Chewy1", 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "buffalo_gourd_seed": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 2, "Chewy1", +10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "caravan_lunch": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+3 , 15, "Chewy1", +200, +15, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "cave_fungus": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 4, "Chewy1", +15, 0, -10, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "cazador_egg": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 4, "Chewy1", +15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "cook_cooks_fiend_stew": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 60, "Chewy1", +80, 0, 0, 1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "coyote_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 8, "Chewy1", +35, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "coyote_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 12, "Chewy1", +35, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "cram": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +50, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "crispy_squirrel_bits": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "crunchy_mutfruit": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "dandy_boy_apples": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "daturana": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, -2, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "desert_salad": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+7 , 15, "Chewy1", +80, +40, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "dog_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 8, "Chewy1", +35, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "dog_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 10, "Chewy1", +35, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fancy_lads_snack_cakes": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fire_ant_egg": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fire_ant_fricass e": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 60, "Chewy1", +80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fire_ant_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fresh_apple": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 7, "Chewy1", +15, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fresh_carrot": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 7, "Chewy1", +15, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fresh_pear": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 7, "Chewy1", +15, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fresh_potato": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 7, "Chewy1", +15, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "gecko_kebab": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 40, "Chewy1", +80, +50, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "gecko_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +50, 0, 3, -1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "gecko_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 15, "Chewy1", +75, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "giant_rat_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +35, 0, 2, -1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "grilled_mantis": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 30, "Chewy1", +75, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "gum_drops": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 0, "Chewy1", 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "honey_mesquite_pod": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 4, "Chewy1", +10, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "human_flesh": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +60, 0, 10, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "human_remains": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "Chewy1", +45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "iguana_bits": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "iguana_on_a_stick": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 12, "Chewy1", +75, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "imitation_strange_meat_pie": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "instamash": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "junk_food": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "lakelurk_egg": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "lakelurk_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 10, "Chewy1", +45, 0, 1, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "maize": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 9, "Chewy1", +40, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mole_rat_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, -1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mole_rat_stew": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 30, "Chewy1", +30, 0, 0, 1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mole_rat_wonder_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 10, "Chewy1", +40, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mre": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 15, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mushroom_cloud": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+3 , 20, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mutant_cave_fungus": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "Chewy1", +20, 0, 2, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mutfruit": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +20, +10, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nevada_agave_fruit": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 8, "Chewy1", +15, +10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nightstalker_tail": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "noodles": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "pinto_bean_pod": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 3, "Chewy1", +5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "pinyon_nuts": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "pork_n_beans": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +40, -20, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "potato_crisps": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +10, -10, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "preserved_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 15, "Chewy1", +50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "pre_war_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 10, "Chewy1", +50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "prickly_pear_fruit": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 10, "Chewy1", +10, +15, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "radroach_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 10, -1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rat_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +25, 0, 3, -1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rubys_casserole": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 30, "Chewy1", +100, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "sacred_datura_root": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "Chewy1", 0, 0, 0, 0, -2, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "salient_green": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 7, "Chewy1", +25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "salisbury_steak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +15, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "spore_carrier_sap": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 4, "Chewy1", +5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "spore_plant_pods": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+4 , 6, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "squirrel_on_a_stick": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +75, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "squirrel_stew": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +50, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "strange_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +35, 0, 3, -1, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "strange_meat_pie": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +35, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "sugar_bombs": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 7, "Chewy1", +30, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "thick_red_paste": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+4 , 30, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "thin_red_paste": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 30, "Chewy1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "trail_mix": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+5 , 15, "Chewy1", +150, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "wasteland_omelet": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+4 , 60, "Chewy1", +150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "white_horsenettle": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +5, 0, 0, 0, 0, -1, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "xander_root": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 4, "Chewy1", +5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "yao_guai_meat": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "Chewy1", +100, 0, 10, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "yumyum_deviled_eggs": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 5, "Chewy1", +10, 0, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };
    case "absinthe": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -20, 0, 0, +1, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "atomic_cocktail": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -30, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "battle_brew": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, +1, 0, 0, 0, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "beer": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -20, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "bitter_drink": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 18, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "black_coffee": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+5 , 0, "drink1", 0, -5, 0, 0, 0, 0, 0, +2, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "blood_pack": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+1 , 0, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "dirty_water": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "drink1", 0, +50, 6, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "dixons_whiskey": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, 0, -2, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "ice_cold_nuka_cola": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+4 , 20, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "irradiated_beer": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -20, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "irradiated_scotch": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "irradiated_sunset_sarsaparilla": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 25, "drink1", 0, -5, 9, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "irradiated_water": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "drink1", 0, +50, 16, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "irradiated_whiskey": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "jake_juice": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "large_wasteland_tequila": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +3, 0, 0, +1, -3, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "moonshine": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +2, 0, 0, +2, -2, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nightstalker_squeezins": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nuka_cola": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 25, "drink1", 0, -10, 3, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nuka_cola_quantum": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -10, 8, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nuka_cola_quartz": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+3 , 20, "drink1", 0, -10, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "nuka_cola_victory": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -10, 0, 0, -1, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "purified_water": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 5, "drink1", 0, +50, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rum_and_nuka": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -15, 0, +1, 0, 0, 0, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "scotch": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "sierra_madre_martini": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, +75 , "drink1", 0, 0, 0, +2, 0, +4, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "sunset_sarsaparilla": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+2 , 25, "drink1", 0, -5, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "vodka": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "wasteland_tequila": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -15, 0, +2, 0, 0, +1, -2, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "whiskey": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -25, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "wine": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, -15, 0, +1, 0, 0, +1, -1, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };
         case "ant_queen_pheromones": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "chewy1", 0, 0, 0, 0, -3, 0, +3, -3, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "antivenom": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "ant_nectar": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "chewy1", 0, 0, 0, +2, 0, 0, -2, -2, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "auto_inject_stimpak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+40, 0, "stimpack", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "auto_inject_super_stimpak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+100, 0, "stimpack", 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "blood_shield": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+4 , 6, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "buffout": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "radx", 0, 0, 0, +2, 0, +3, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "cateye": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "radx", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "coyote_tobacco_chew": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "chewy1", 0, 0, 0, 0, +1, 0, 0, 0, +1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "datura_antivenom": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "datura_hide": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "dixons_jet": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "jet", 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "doctors_bag": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "nil", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fiery_purgative": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "nil", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fire_ant_nectar": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "chewy1", 0, 0, 0, 0, 0, 0, 0, -3, +4, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "fixer": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "mentats", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "ghost_sight": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "healing_poultice": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 18, "nil", 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "healing_powder": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "nil", 0, 0, 0, 0, -2, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "hydra": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, 0, 0, -3, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "jet": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "jet", 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 120] spawn sal_fnc_useitem;
            [["focus_trip"] , 2, true] spawn asn_fnc_usedrug;
             closedialog 0;
         };
     };

    case "med_x": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "stimpack", 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "medical_supplies": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "nil", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "mentats": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "mentats", 0, 0, 0, 0, +2, 0, +1, +2, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "party_time_mentats": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "mentats", 0, 0, 0, 0, +2, 0, +5, +2, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "psycho": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "psycho", 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rad_x": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "radx", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "radaway": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "radaway", 0, 0, -50, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rebound": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "stimpack", 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rocket": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "jet", 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "rushing_water": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "slasher": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "stimpack", 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "steady": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "drink1", 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "stimpak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+5 , 6, "stimpak", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "super_stimpak": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+20 , 3, "stimpak", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "turbo": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "jet", 0, 0, 0, 0, 0, 0, 0, 0, -2, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "ultrajet": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, "jet", 0, 0, 0, -2, -1, 0, 0, 0, -2, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };

    case "weapon_binding_ritual": {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [+0, 0, nil, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120] spawn sal_fnc_useitem;
             closedialog 0;
         };
     };



    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
