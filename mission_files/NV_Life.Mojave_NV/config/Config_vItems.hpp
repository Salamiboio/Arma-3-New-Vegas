/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class fallout_food {
        name = "STR_Shops_Food";
        side = "";
        conditions = "";
        items[] = { "stimpack", "ant_egg", "ant_meat", "barrel_cactus_fruit", "banana_yucca_fruit", "bighorner_meat", "bighorner_steak", "black_blood_sausage", "blamco_mac_cheese", "bloatfly_meat", "bloatfly_slider", "blood_sausage", "brahmin_meat", "brahmin_steak", "brahmin_wellington", "broc_flower", "bubblegum", "buffalo_gourd_seed", "caravan_lunch", "cave_fungus", "cazador_egg", "coyote_meat", "coyote_steak", "cram", "crispy_squirrel_bits", "crunchy_mutfruit", "dandy_boy_apples", "daturana", "desert_salad", "dog_meat", "dog_steak", "fancy_lads_snack_cakes", "fire_ant_egg", "fire_ant_meat", "fresh_apple", "fresh_carrot", "fresh_pear", "fresh_potato", "gecko_kebab", "gecko_meat", "gecko_steak", "giant_rat_meat", "grilled_mantis", "gum_drops", "honey_mesquite_pod", "human_flesh", "human_remains", "iguana_bits", "iguana_on_a_stick", "imitation_strange_meat_pie", "instamash", "junk_food", "lakelurk_egg", "lakelurk_meat", "maize", "mole_rat_meat", "mole_rat_stew", "mole_rat_wonder_meat", "mre", "mushroom_cloud", "mutant_cave_fungus", "mutfruit", "nevada_agave_fruit", "nightstalker_tail", "noodles", "pinto_bean_pod", "pinyon_nuts", "pork_n_beans", "potato_crisps", "preserved_meat", "pre_war_steak", "prickly_pear_fruit", "radroach_meat", "rat_meat", "rubys_casserole", "sacred_datura_root", "salient_green", "salisbury_steak", "spore_carrier_sap", "spore_plant_pods", "squirrel_on_a_stick", "squirrel_stew", "strange_meat", "strange_meat_pie", "sugar_bombs", "thick_red_paste", "thin_red_paste", "trail_mix", "wasteland_omelet", "white_horsenettle", "xander_root", "yao_guai_meat", "yumyum_deviled_eggs" };
    };

    class fallout_misc {
        name = "STR_Shops_Misc";
        side = "";
        conditions = "";
        items[] = { "5_ncr", "20_ncr", "100_ncr", "10_ball", "13_ball", "2_ball", "5_ball", "8_ball", "abraxo_cleaner", "acoustic_guitar", "ashtray", "automatic_surgical_unit_quest", "bag_of_bottle_caps_grecks_quest", "bag_of_bottle_caps_lady_jane_quest", "bag_of_bottle_caps_santiago_quest", "bark_scorpion_poison_gland", "barnabas_bear", "baseball_glove", "baseball", "basketball", "bent_tin_can_quest", "big_spoon", "bobby_pin", "bonesaw_quest", "bottle_cap", "box_of_detergent", "brahmin_skull", "broken_sentry_bot_toy", "brotherhood_of_steel_holotag", "butter_knife_common", "butter_knife_uncommon", "camera", "camp_forlorn_hope_supply_shipment_quest", "caravan_deck", "carton_of_cigarettes", "case_box_308", "case_box_357_magnum", "case_box_44_magnum", "case_box_45_70_govt", "case_box_50_mg", "case_box_10mm", "case_box_127mm", "case_box_556mm", "case_box_5mm", "case_box_9mm", "case_308", "case_357_magnum", "case_44_magnum", "case_45_70_govt", "case_50_mg", "case_10mm", "case_127mm", "case_556mm", "case_5mm", "case_9mm", "cazador_poison_gland", "centaur_blood", "ceramic_dinner_plate", "charlie_station_supply_manifest", "cherry_bomb", "chessboard", "chewed_stealth_boy_quest", "cigarette", "clipboard", "coffee_mug", "coffee_pot_quest", "conductor", "container_of_chlorine_quest", "cook_cooks_head_quest", "cook_cooks_mangled_head_quest", "counterfeit_bottle_cap", "counterfeit_passport_quest", "coyote_hide", "crutch", "cuddles_toy_car", "cue_ball", "cup", "cutting_board", "damaged_garden_gnome", "deathclaw_egg_quest", "deathclaw_hand", "deployable_ballast_quest", "differential_pressure_controller_quest", "dinky_the_t_rex_souvenir", "dinner_plate", "dino_toy", "disassembled_weapons_shipment_quest", "distinctive_cigarette_butt_quest", "dog_bowl", "dog_hide", "doggie_treat", "drained_electron_charge_pack", "drained_flamer_fuel_tank", "drained_microfusion_cell", "drained_small_energy_cell", "drinking_glass", "driver_nephis_head_quest", "driver_nephis_mangled_head_quest", "drug_chemicals_quest", "duct_tape", "earnings_clipboard", "egg_timer", "empty_hydra_syringe_quest", "empty_jet_inhaler", "empty_nuka_cola_bottle", "empty_soda_bottle", "empty_sunset_sarsaparilla_bottle", "empty_sunset_sarsaparilla_bottle_no_float", "empty_syringe", "empty_whiskey_bottle", "engraved_cigarette_lighter_quest", "erasmus_logbook", "ericsens_log", "evil_gnome", "explosive_charge_quest", "finance_clipboard", "finger", "fire_gecko_egg_quest", "fire_gecko_hide", "firehose_nozzle_quest", "fission_battery", "flour", "food_additive_quest", "food_sanitizer", "forceps", "fork", "gbrm2kx_memory_chip_quest", "gecko_egg", "gecko_hide", "glass_pitcher", "golden_gecko_egg", "golden_gecko_hide", "golf_ball", "great_khan_supply_cache_quest", "green_plate", "hammer", "harmonica", "hepa_20_cartridge_filter_quest", "highly_suspicious_package_quest", "hot_plate", "howitzer_firing_mechanism_quest", "hull_box_12_ga", "hull_box_20_ga", "hull_12_gauge", "hull_20_gauge", "infected_brahmin_meat", "intact_garden_gnome", "iron_quest", "irradiated_ncr_dogtag_quest", "isotope_239_igniting_agent_quest", "boomer_outfit_for_janet_quest", "jar_pistol_powder", "jar_rifle_powder", "keyring", "large_burned_book", "large_destroyed_book", "large_ruined_book", "large_scorched_book", "large_whiskey_bottle", "lawn_mower_blade", "lead", "leaf_blower", "leather_belt", "legion_aureus", "legion_denarius", "legion_denarius_mangled", "legion_ear_quest", "legion_patrol_notes_quest", "legion_raid_plans_quest", "legion_slave_ledger_quest", "lineholms_log", "lottery_ticket", "lunchbox", "lupas_brain_quest", "mantis_egg_quest", "mantis_egg", "mantis_foreleg", "mark_of_caesar_quest", "marked_cards_quest", "medical_brace", "medical_clipboard", "metal_cooking_pan_quest", "metal_cooking_pot_quest", "metal_spoon", "microphone_and_stand", "mildly_suspicious_package_quest", "milk_bottle", "mister_cuddles_quest", "motorcycle_gas_tank", "motorcycle_handbrake", "mutilated_arm", "mutilated_leg", "mutilated_organs", "mutilated_skull", "mutilated_torso", "ncr_10mm_pistol_quest", "ncr_9mm_submachine_gun_quest", "ncr_bug_quest", "ncr_computer_parts_quest", "ncr_dogtag_quest", "ncr_frag_grenade_quest", "ncr_grenade_rifle_quest", "ncr_radio_parts_quest", "new_vegas_passport", "nightstalker_blood", "nightstalker_egg", "nuka_cola_truck", "old_legion_patrol_notes_quest", "old_legion_raid_plans_quest", "ophthalmascope", "override_chip_quest", "pack_of_cigarettes", "paint_gun", "paperweight", "pencil", "pile_of_cazador_eggs_quest", "pile_of_deathclaw_eggs_quest", "pile_of_fire_gecko_eggs_quest", "pile_of_giant_mantis_eggs_quest", "pile_of_night_stalker_eggs_quest", "pile_of_radscorpion_eggs_quest", "pilot_light", "ping_pong_ball", "platinum_chip_quest", "plunger", "pool_ball", "pot_quest", "powder_pistol", "powder_rifle", "pressure_cooker", "pretty_pretty_horsies_a_history_of_the_mongol_empire_quest", "pre_war_book", "pre_war_money", "primer_box_50_mg", "primer_box_large_pistol", "primer_box_large_rifle", "primer_box_shotshell", "primer_box_small_pistol", "primer_box_small_rifle", "primer_50_mg", "primer_large_pistol", "primer_large_rifle", "primer_shotshell", "primer_small_pistol", "primer_small_rifle", "radiation_suit_package_quest", "radioactive_supply_cache_quest", "radscorpion_egg", "radscorpion_poison_gland_quest", "rake", "ralphs_sexbot_holodisk_quest", "recipes___brahmin_wellington", "recipes___cook_cooks_fiend_stew", "recipes___rubys_spicy_casserole", "red_plate", "redundant_failsafe_detonator_quest", "remote_signal_transmitter_quest", "reverse_pulse_cleaner_quest", "reys_brain_quest", "rocket_souvenir_quest", "scalpel", "schematics___billboard", "schematics___mantis_scythe", "schematics___powder_charge", "scissors", "scrap_electronics", "scrap_metal_quest", "sensor_module", "sentry_bot_toy", "sergeant_teddy_quest", "sheet_music_book", "shot_glass", "small_burned_book", "small_destroyed_book", "small_ruined_book", "small_scorched_book", "snow_globe___goodsprings_quest", "snow_globe___hoover_dam_quest", "snow_globe___mormon_fort_quest", "snow_globe___mt_charleston_quest", "snow_globe___nellis_afb_quest", "snow_globe___test_site_quest", "snow_globe___the_strip_quest", "solar_array_parts_quest", "sonic_emitter_quest", "spare_medical_supplies_quest", "spatula", "spork", "steam_gauge_assembly_quest", "stress_and_the_modern_refugee_a_primer_quest", "sunset_sarsaparilla_bottle", "sunset_sarsaparilla_deputy_badge", "sunset_sarsaparilla_star_bottle_cap_quest", "surgical_tools_quest", "surgical_tubing", "suspicious_package_quest", "tanned_fire_gecko_hide", "tanned_gecko_hide", "tanned_golden_gecko_hide", "ted_gundersons_blood_quest", "teddy_bear", "teddy_bear_quest", "thermite_quest", "thrust_control_modules_quest", "thrust_control_modules", "tin_can_quest", "tin_plate", "tiny_tiny_babies_all_you_need_to_know_about_pediatric_medicine_quest", "toaster", "tommy_torinis_business_card_quest", "toy_car", "triangle", "turpentine", "tweezers", "vacuum_cleaner", "van_graff_package_quest", "vault_13_canteen", "vertibird_bomb_quest", "violets_head_quest", "violets_mangled_head_quest", "violettas_brain_quest", "whet_stone", "white_plate", "wonderglue", "wood_chipper", "wrench", "yeast" };
    };

    class fallout_chems {
        name = "STR_Shops_Chems";
        side = "";
        conditions = "";
        items[] = { "ant_queen_pheromones", "antivenom", "ant_nectar", "auto_inject_stimpak", "auto_inject_super_stimpak", "blood_shield", "buffout", "cateye", "coyote_tobacco_chew", "datura_antivenom", "datura_hide", "dixons_jet", "doctors_bag", "fiery_purgative", "fire_ant_nectar", "fixer", "ghost_sight", "healing_poultice", "healing_powder", "hydra", "jet", "med_x", "medical_supplies", "mentats", "party_time_mentats", "psycho", "rad_x", "radaway", "rebound", "rocket", "rushing_water", "slasher", "steady", "stimpak", "super_stimpak", "turbo", "ultrajet", "weapon_binding_ritual" };
    };
    class fallout_drinks {
        name = "STR_Shops_Drinks";
        side = "";
        conditions = "";
        items[] = { "absinthe", "atomic_cocktail", "battle_brew", "beer", "bitter_drink", "black_coffee", "blood_pack", "dirty_water", "dixons_whiskey", "ice_cold_nuka_cola", "irradiated_beer", "irradiated_scotch", "irradiated_sunset_sarsaparilla", "irradiated_water", "irradiated_whiskey", "jake_juice", "large_wasteland_tequila", "moonshine", "nightstalker_squeezins", "nuka_cola", "nuka_cola_quantum", "nuka_cola_quartz", "nuka_cola_victory", "purified_water", "rum_and_nuka", "scotch", "sierra_madre_martini", "sunset_sarsaparilla", "vodka", "wasteland_tequila", "whiskey", "wine" };
    };
    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };

    class adac {
        name = "STR_Shops_Adac";
        side = "adac";
        conditions = "";
        items[] = { "donuts", "coffee", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled, other values = added value)
*        drinkable = Item Drinkable (-1 = Disabled, other values = added value)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items
    class etabli {
        variable = "etabli";
        displayName = "STR_Item_etabli";
        weight = 5;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "";
    };
    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 2;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class stimpack {
        variable = "stimpack";
        displayName = "STR_Item_stimpack";
        weight = 3;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_stimpack.paa";
    };
    class healingpowder {
        variable = "healingpowder";
        displayName = "STR_Item_healingpowder";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_healingpowder.paa";
    };
    class brahminshit {
        variable = "brahminshit";
        displayName = "STR_Item_Brahmin_Shit";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = 1;
        drinkable = -1;
        icon = "icons\ico_shit.paa";
        processedItem = "jet";
    };

    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 3500;
        sellPrice = 2560;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 2800;
        sellPrice = 2350;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        drinkable = 50;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        drinkable = -1;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        drinkable = -1;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        drinkable = -1;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        drinkable = -1;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        drinkable = -1;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        drinkable = -1;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        drinkable = -1;
        icon = "icons\ico_muttonLeg.paa";
    };

    class ant_egg {
        variable = "ant_egg";
        displayName = "STR_Item_ant_egg";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ant_egg.paa";
    };

    class ant_meat {
        variable = "ant_meat";
        displayName = "STR_Item_ant_meat";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ant_meat.paa";
    };

    class barrel_cactus_fruit {
        variable = "barrel_cactus_fruit";
        displayName = "STR_Item_barrel_cactus_fruit";
        weight = 0.2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_barrel_cactus_fruit.paa";
    };

    class banana_yucca_fruit {
        variable = "banana_yucca_fruit";
        displayName = "STR_Item_banana_yucca_fruit";
        weight = 0.5;
        buyPrice = 6;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_banana_yucca_fruit.paa";
    };

    class bighorner_meat {
        variable = "bighorner_meat";
        displayName = "STR_Item_bighorner_meat";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bighorner_meat.paa";
    };

    class bighorner_steak {
        variable = "bighorner_steak";
        displayName = "STR_Item_bighorner_steak";
        weight = 0.8;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bighorner_steak.paa";
    };

    class black_blood_sausage {
        variable = "black_blood_sausage";
        displayName = "STR_Item_black_blood_sausage";
        weight = 0.5;
        buyPrice = 350;
        sellPrice = 117;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_black_blood_sausage.paa";
    };

    class blamco_mac_cheese {
        variable = "blamco_mac_cheese";
        displayName = "STR_Item_blamco_mac_cheese";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blamco_mac_cheese.paa";
    };

    class bloatfly_meat {
        variable = "bloatfly_meat";
        displayName = "STR_Item_bloatfly_meat";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bloatfly_meat.paa";
    };

    class bloatfly_slider {
        variable = "bloatfly_slider";
        displayName = "STR_Item_bloatfly_slider";
        weight = 0.5;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bloatfly_slider.paa";
    };

    class blood_sausage {
        variable = "blood_sausage";
        displayName = "STR_Item_blood_sausage";
        weight = 0.25;
        buyPrice = 175;
        sellPrice = 59;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blood_sausage.paa";
    };

    class brahmin_meat {
        variable = "brahmin_meat";
        displayName = "STR_Item_brahmin_meat";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_brahmin_meat.paa";
    };

    class brahmin_steak {
        variable = "brahmin_steak";
        displayName = "STR_Item_brahmin_steak";
        weight = 0.8;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_brahmin_steak.paa";
    };

    class brahmin_wellington {
        variable = "brahmin_wellington";
        displayName = "STR_Item_brahmin_wellington";
        weight = 0.8;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_brahmin_wellington.paa";
    };

    class broc_flower {
        variable = "broc_flower";
        displayName = "STR_Item_broc_flower";
        weight = 0.01;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_broc_flower.paa";
    };

    class bubblegum {
        variable = "bubblegum";
        displayName = "STR_Item_bubblegum";
        weight = 1.0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bubblegum.paa";
    };

    class buffalo_gourd_seed {
        variable = "buffalo_gourd_seed";
        displayName = "STR_Item_buffalo_gourd_seed";
        weight = 0.02;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_buffalo_gourd_seed.paa";
    };

    class caravan_lunch {
        variable = "caravan_lunch";
        displayName = "STR_Item_caravan_lunch";
        weight = 2.5;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_caravan_lunch.paa";
    };

    class cave_fungus {
        variable = "cave_fungus";
        displayName = "STR_Item_cave_fungus";
        weight = 1.0;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cave_fungus.paa";
    };

    class cazador_egg {
        variable = "cazador_egg";
        displayName = "STR_Item_cazador_egg";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cazador_egg.paa";
    };

    class cook_cooks_fiend_stew {
        variable = "cook_cooks_fiend_stew";
        displayName = "STR_Item_cook_cooks_fiend_stew";
        weight = 1.0;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cook_cooks_fiend_stew.paa";
    };

    class coyote_meat {
        variable = "coyote_meat";
        displayName = "STR_Item_coyote_meat";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_coyote_meat.paa";
    };

    class coyote_steak {
        variable = "coyote_steak";
        displayName = "STR_Item_coyote_steak";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_coyote_steak.paa";
    };

    class cram {
        variable = "cram";
        displayName = "STR_Item_cram";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cram.paa";
    };

    class crispy_squirrel_bits {
        variable = "crispy_squirrel_bits";
        displayName = "STR_Item_crispy_squirrel_bits";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_crispy_squirrel_bits.paa";
    };

    class crunchy_mutfruit {
        variable = "crunchy_mutfruit";
        displayName = "STR_Item_crunchy_mutfruit";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_crunchy_mutfruit.paa";
    };

    class dandy_boy_apples {
        variable = "dandy_boy_apples";
        displayName = "STR_Item_dandy_boy_apples";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_dandy_boy_apples.paa";
    };

    class daturana {
        variable = "daturana";
        displayName = "STR_Item_daturana";
        weight = 0.02;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_daturana.paa";
    };

    class desert_salad {
        variable = "desert_salad";
        displayName = "STR_Item_desert_salad";
        weight = 0.2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_desert_salad.paa";
    };

    class dog_meat {
        variable = "dog_meat";
        displayName = "STR_Item_dog_meat";
        weight = 1.0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_dog_meat.paa";
    };

    class dog_steak {
        variable = "dog_steak";
        displayName = "STR_Item_dog_steak";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_dog_steak.paa";
    };

    class fancy_lads_snack_cakes {
        variable = "fancy_lads_snack_cakes";
        displayName = "STR_Item_fancy_lads_snack_cakes";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fancy_lads_snack_cakes.paa";
    };

    class fire_ant_egg {
        variable = "fire_ant_egg";
        displayName = "STR_Item_fire_ant_egg";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fire_ant_egg.paa";
    };

    class fire_ant_fricasse {
        variable = "fire_ant_fricasse";
        displayName = "STR_Item_fire_ant_fricasse";
        weight = 1.0;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fire_ant_fricass e.paa";
    };

    class fire_ant_meat {
        variable = "fire_ant_meat";
        displayName = "STR_Item_fire_ant_meat";
        weight = 1.0;
        buyPrice = 6;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fire_ant_meat.paa";
    };

    class fresh_apple {
        variable = "fresh_apple";
        displayName = "STR_Item_fresh_apple";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fresh_apple.paa";
    };

    class fresh_carrot {
        variable = "fresh_carrot";
        displayName = "STR_Item_fresh_carrot";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fresh_carrot.paa";
    };

    class fresh_pear {
        variable = "fresh_pear";
        displayName = "STR_Item_fresh_pear";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fresh_pear.paa";
    };

    class fresh_potato {
        variable = "fresh_potato";
        displayName = "STR_Item_fresh_potato";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fresh_potato.paa";
    };

    class gecko_kebab {
        variable = "gecko_kebab";
        displayName = "STR_Item_gecko_kebab";
        weight = 0.25;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_gecko_kebab.paa";
    };

    class gecko_meat {
        variable = "gecko_meat";
        displayName = "STR_Item_gecko_meat";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_gecko_meat.paa";
    };

    class gecko_steak {
        variable = "gecko_steak";
        displayName = "STR_Item_gecko_steak";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_gecko_steak.paa";
    };

    class giant_rat_meat {
        variable = "giant_rat_meat";
        displayName = "STR_Item_giant_rat_meat";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_giant_rat_meat.paa";
    };

    class grilled_mantis {
        variable = "grilled_mantis";
        displayName = "STR_Item_grilled_mantis";
        weight = 1.0;
        buyPrice = 8;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_grilled_mantis.paa";
    };

    class gum_drops {
        variable = "gum_drops";
        displayName = "STR_Item_gum_drops";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_gum_drops.paa";
    };

    class honey_mesquite_pod {
        variable = "honey_mesquite_pod";
        displayName = "STR_Item_honey_mesquite_pod";
        weight = 0.1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_honey_mesquite_pod.paa";
    };

    class human_flesh {
        variable = "human_flesh";
        displayName = "STR_Item_human_flesh";
        weight = 1.0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_human_flesh.paa";
    };

    class human_remains {
        variable = "human_remains";
        displayName = "STR_Item_human_remains";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_human_remains.paa";
    };

    class iguana_bits {
        variable = "iguana_bits";
        displayName = "STR_Item_iguana_bits";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_iguana_bits.paa";
    };

    class iguana_on_a_stick {
        variable = "iguana_on_a_stick";
        displayName = "STR_Item_iguana_on_a_stick";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_iguana_on_a_stick.paa";
    };

    class imitation_strange_meat_pie {
        variable = "imitation_strange_meat_pie";
        displayName = "STR_Item_imitation_strange_meat_pie";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_imitation_strange_meat_pie.paa";
    };

    class instamash {
        variable = "instamash";
        displayName = "STR_Item_instamash";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_instamash.paa";
    };


    class junk_food {
        variable = "junk_food";
        displayName = "STR_Item_junk_food";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk_food.paa";
    };

    class lakelurk_egg {
        variable = "lakelurk_egg";
        displayName = "STR_Item_lakelurk_egg";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lakelurk_egg.paa";
    };

    class lakelurk_meat {
        variable = "lakelurk_meat";
        displayName = "STR_Item_lakelurk_meat";
        weight = 1.0;
        buyPrice = 12;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_lakelurk_meat.paa";
    };

    class maize {
        variable = "maize";
        displayName = "STR_Item_maize";
        weight = 0.25;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_maize.paa";
    };

    class mole_rat_meat {
        variable = "mole_rat_meat";
        displayName = "STR_Item_mole_rat_meat";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mole_rat_meat.paa";
    };

    class mole_rat_stew {
        variable = "mole_rat_stew";
        displayName = "STR_Item_mole_rat_stew";
        weight = 1.0;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mole_rat_stew.paa";
    };

    class mole_rat_wonder_meat {
        variable = "mole_rat_wonder_meat";
        displayName = "STR_Item_mole_rat_wonder_meat";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mole_rat_wonder_meat.paa";
    };

    class mre {
        variable = "mre";
        displayName = "STR_Item_mre";
        weight = 0.2;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mre.paa";
    };

    class mushroom_cloud {
        variable = "mushroom_cloud";
        displayName = "STR_Item_mushroom_cloud";
        weight = 1.0;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mushroom_cloud.paa";
    };

    class mutant_cave_fungus {
        variable = "mutant_cave_fungus";
        displayName = "STR_Item_mutant_cave_fungus";
        weight = 1.0;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mutant_cave_fungus.paa";
    };

    class mutfruit {
        variable = "mutfruit";
        displayName = "STR_Item_mutfruit";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mutfruit.paa";
    };

    class nevada_agave_fruit {
        variable = "nevada_agave_fruit";
        displayName = "STR_Item_nevada_agave_fruit";
        weight = 0.2;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nevada_agave_fruit.paa";
    };

    class nightstalker_tail {
        variable = "nightstalker_tail";
        displayName = "STR_Item_nightstalker_tail";
        weight = 1.0;
        buyPrice = 18;
        sellPrice = 6;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nightstalker_tail.paa";
    };

    class noodles {
        variable = "noodles";
        displayName = "STR_Item_noodles";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_noodles.paa";
    };

    class pinto_bean_pod {
        variable = "pinto_bean_pod";
        displayName = "STR_Item_pinto_bean_pod";
        weight = 0.05;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pinto_bean_pod.paa";
    };

    class pinyon_nuts {
        variable = "pinyon_nuts";
        displayName = "STR_Item_pinyon_nuts";
        weight = 0.03;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pinyon_nuts.paa";
    };

    class pork_n_beans {
        variable = "pork_n_beans";
        displayName = "STR_Item_pork_n_beans";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pork_n_beans.paa";
    };

    class potato_crisps {
        variable = "potato_crisps";
        displayName = "STR_Item_potato_crisps";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_potato_crisps.paa";
    };

    class preserved_meat {
        variable = "preserved_meat";
        displayName = "STR_Item_preserved_meat";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_preserved_meat.paa";
    };

    class pre_war_steak {
        variable = "pre_war_steak";
        displayName = "STR_Item_pre_war_steak";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_pre_war_steak.paa";
    };

    class prickly_pear_fruit {
        variable = "prickly_pear_fruit";
        displayName = "STR_Item_prickly_pear_fruit";
        weight = 0.07;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_prickly_pear_fruit.paa";
    };

    class radroach_meat {
        variable = "radroach_meat";
        displayName = "STR_Item_radroach_meat";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_radroach_meat.paa";
    };

    class rat_meat {
        variable = "rat_meat";
        displayName = "STR_Item_rat_meat";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rat_meat.paa";
    };

    class rubys_casserole {
        variable = "rubys_casserole";
        displayName = "STR_Item_rubys_casserole";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rubys_casserole.paa";
    };

    class sacred_datura_root {
        variable = "sacred_datura_root";
        displayName = "STR_Item_sacred_datura_root";
        weight = 0.02;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_sacred_datura_root.paa";
    };

    class salient_green {
        variable = "salient_green";
        displayName = "STR_Item_salient_green";
        weight = 0.25;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_salient_green.paa";
    };

    class salisbury_steak {
        variable = "salisbury_steak";
        displayName = "STR_Item_salisbury_steak";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_salisbury_steak.paa";
    };

    class spore_carrier_sap {
        variable = "spore_carrier_sap";
        displayName = "STR_Item_spore_carrier_sap";
        weight = 0.02;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_spore_carrier_sap.paa";
    };

    class spore_plant_pods {
        variable = "spore_plant_pods";
        displayName = "STR_Item_spore_plant_pods";
        weight = 1.0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_spore_plant_pods.paa";
    };

    class squirrel_on_a_stick {
        variable = "squirrel_on_a_stick";
        displayName = "STR_Item_squirrel_on_a_stick";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_squirrel_on_a_stick.paa";
    };

    class squirrel_stew {
        variable = "squirrel_stew";
        displayName = "STR_Item_squirrel_stew";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_squirrel_stew.paa";
    };

    class strange_meat {
        variable = "strange_meat";
        displayName = "STR_Item_strange_meat";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_strange_meat.paa";
    };

    class strange_meat_pie {
        variable = "strange_meat_pie";
        displayName = "STR_Item_strange_meat_pie";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_strange_meat_pie.paa";
    };

    class sugar_bombs {
        variable = "sugar_bombs";
        displayName = "STR_Item_sugar_bombs";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_sugar_bombs.paa";
    };

    class thick_red_paste {
        variable = "thick_red_paste";
        displayName = "STR_Item_thick_red_paste";
        weight = 0.6;
        buyPrice = 250;
        sellPrice = 84;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_thick_red_paste.paa";
    };

    class thin_red_paste {
        variable = "thin_red_paste";
        displayName = "STR_Item_thin_red_paste";
        weight = 0.1;
        buyPrice = 125;
        sellPrice = 42;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_thin_red_paste.paa";
    };

    class trail_mix {
        variable = "trail_mix";
        displayName = "STR_Item_trail_mix";
        weight = 3.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_trail_mix.paa";
    };

    class wasteland_omelet {
        variable = "wasteland_omelet";
        displayName = "STR_Item_wasteland_omelet";
        weight = 1.0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wasteland_omelet.paa";
    };

    class white_horsenettle {
        variable = "white_horsenettle";
        displayName = "STR_Item_white_horsenettle";
        weight = 0.02;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_white_horsenettle.paa";
    };

    class xander_root {
        variable = "xander_root";
        displayName = "STR_Item_xander_root";
        weight = 0.02;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_xander_root.paa";
    };

    class yao_guai_meat {
        variable = "yao_guai_meat";
        displayName = "STR_Item_yao_guai_meat";
        weight = 1.0;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_yao_guai_meat.paa";
    };

    class yumyum_deviled_eggs {
        variable = "yumyum_deviled_eggs";
        displayName = "STR_Item_yumyum_deviled_eggs";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_yumyum_deviled_eggs.paa";
    };

    class 5_ncr{
        variable = "5_ncr";
        displayName = "STR_Item_5_ncr";
        weight = 0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 20_ncr{
        variable = "20_ncr";
        displayName = "STR_Item_20_ncr";
        weight = 0;
        buyPrice = 8;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 100_ncr{
        variable = "100_ncr";
        displayName = "STR_Item_100_ncr";
        weight = 0;
        buyPrice = 40;
        sellPrice = 14;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 10_ball{
        variable = "10_ball";
        displayName = "STR_Item_10_ball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 13_ball{
        variable = "13_ball";
        displayName = "STR_Item_13_ball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 2_ball{
        variable = "2_ball";
        displayName = "STR_Item_2_ball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 5_ball{
        variable = "5_ball";
        displayName = "STR_Item_5_ball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class 8_ball{
        variable = "8_ball";
        displayName = "STR_Item_8_ball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class abraxo_cleaner {
        variable = "abraxo_cleaner";
        displayName = "STR_Item_abraxo_cleaner";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class acoustic_guitar {
        variable = "acoustic_guitar";
        displayName = "STR_Item_acoustic_guitar";
        weight = 3;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ashtray {
        variable = "ashtray";
        displayName = "STR_Item_ashtray";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class automatic_surgical_unit_quest {
        variable = "automatic_surgical_unit_quest";
        displayName = "STR_Item_automatic_surgical_unit_quest";
        weight = 0;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bag_of_bottle_caps_grecks_quest {
        variable = "bag_of_bottle_caps_grecks_quest";
        displayName = "STR_Item_bag_of_bottle_caps_grecks_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bag_of_bottle_caps_lady_jane_quest {
        variable = "bag_of_bottle_caps_lady_jane_quest";
        displayName = "STR_Item_bag_of_bottle_caps_lady_jane_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bag_of_bottle_caps_santiago_quest {
        variable = "bag_of_bottle_caps_santiago_quest";
        displayName = "STR_Item_bag_of_bottle_caps_santiago_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bark_scorpion_poison_gland {
        variable = "bark_scorpion_poison_gland";
        displayName = "STR_Item_bark_scorpion_poison_gland";
        weight = 1;
        buyPrice = 35;
        sellPrice = 12;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class barnabas_bear {
        variable = "barnabas_bear";
        displayName = "STR_Item_barnabas_bear";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class baseball_glove {
        variable = "baseball_glove";
        displayName = "STR_Item_baseball_glove";
        weight = 1;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class baseball {
        variable = "baseball";
        displayName = "STR_Item_baseball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class basketball {
        variable = "basketball";
        displayName = "STR_Item_basketball";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bent_tin_can_quest {
        variable = "bent_tin_can_quest";
        displayName = "STR_Item_bent_tin_can_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class big_spoon {
        variable = "big_spoon";
        displayName = "STR_Item_big_spoon";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bobby_pin {
        variable = "bobby_pin";
        displayName = "STR_Item_bobby_pin";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bonesaw_quest {
        variable = "bonesaw_quest";
        displayName = "STR_Item_bonesaw_quest";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class bottle_cap {
        variable = "bottle_cap";
        displayName = "STR_Item_bottle_cap";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class box_of_detergent {
        variable = "box_of_detergent";
        displayName = "STR_Item_box_of_detergent";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class brahmin_skull {
        variable = "brahmin_skull";
        displayName = "STR_Item_brahmin_skull";
        weight = 2;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class broken_sentry_bot_toy {
        variable = "broken_sentry_bot_toy";
        displayName = "STR_Item_broken_sentry_bot_toy";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class brotherhood_of_steel_holotag {
        variable = "brotherhood_of_steel_holotag";
        displayName = "STR_Item_brotherhood_of_steel_holotag";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class butter_knife_common {
        variable = "butter_knife_common";
        displayName = "STR_Item_butter_knife_common";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class butter_knife_uncommon {
        variable = "butter_knife_uncommon";
        displayName = "STR_Item_butter_knife_uncommon";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class camera {
        variable = "camera";
        displayName = "STR_Item_camera";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class camp_forlorn_hope_supply_shipment_quest {
        variable = "camp_forlorn_hope_supply_shipment_quest";
        displayName = "STR_Item_camp_forlorn_hope_supply_shipment_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class caravan_deck {
        variable = "caravan_deck";
        displayName = "STR_Item_caravan_deck";
        weight = 1;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class carton_of_cigarettes {
        variable = "carton_of_cigarettes";
        displayName = "STR_Item_carton_of_cigarettes";
        weight = 2;
        buyPrice = 40;
        sellPrice = 14;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_308 {
        variable = "case_box_308";
        displayName = "STR_Item_case_box_308";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_357_magnum {
        variable = "case_box_357_magnum";
        displayName = "STR_Item_case_box_357_magnum";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_44_magnum {
        variable = "case_box_44_magnum";
        displayName = "STR_Item_case_box_44_magnum";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_45_70_govt {
        variable = "case_box_45_70_govt";
        displayName = "STR_Item_case_box_45_70_govt";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_50_mg {
        variable = "case_box_50_mg";
        displayName = "STR_Item_case_box_50_mg";
        weight = 1;
        buyPrice = 14;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_10mm {
        variable = "case_box_10mm";
        displayName = "STR_Item_case_box_10mm";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_127mm {
        variable = "case_box_127mm";
        displayName = "STR_Item_case_box_127mm";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_556mm {
        variable = "case_box_556mm";
        displayName = "STR_Item_case_box_556mm";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_5mm {
        variable = "case_box_5mm";
        displayName = "STR_Item_case_box_5mm";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_box_9mm {
        variable = "case_box_9mm";
        displayName = "STR_Item_case_box_9mm";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_308 {
        variable = "case_308";
        displayName = "STR_Item_case_308";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_357_magnum {
        variable = "case_357_magnum";
        displayName = "STR_Item_case_357_magnum";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_44_magnum {
        variable = "case_44_magnum";
        displayName = "STR_Item_case_44_magnum";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_45_70_govt {
        variable = "case_45_70_govt";
        displayName = "STR_Item_case_45_70_govt";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_50_mg {
        variable = "case_50_mg";
        displayName = "STR_Item_case_50_mg";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_10mm {
        variable = "case_10mm";
        displayName = "STR_Item_case_10mm";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_127mm {
        variable = "case_127mm";
        displayName = "STR_Item_case_127mm";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_556mm {
        variable = "case_556mm";
        displayName = "STR_Item_case_556mm";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_5mm {
        variable = "case_5mm";
        displayName = "STR_Item_case_5mm";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class case_9mm {
        variable = "case_9mm";
        displayName = "STR_Item_case_9mm";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cazador_poison_gland {
        variable = "cazador_poison_gland";
        displayName = "STR_Item_cazador_poison_gland";
        weight = 1;
        buyPrice = 85;
        sellPrice = 29;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class centaur_blood {
        variable = "centaur_blood";
        displayName = "STR_Item_centaur_blood";
        weight = 0;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ceramic_dinner_plate {
        variable = "ceramic_dinner_plate";
        displayName = "STR_Item_ceramic_dinner_plate";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class charlie_station_supply_manifest {
        variable = "charlie_station_supply_manifest";
        displayName = "STR_Item_charlie_station_supply_manifest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cherry_bomb {
        variable = "cherry_bomb";
        displayName = "STR_Item_cherry_bomb";
        weight = 0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class chessboard {
        variable = "chessboard";
        displayName = "STR_Item_chessboard";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class chewed_stealth_boy_quest {
        variable = "chewed_stealth_boy_quest";
        displayName = "STR_Item_chewed_stealth_boy_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cigarette {
        variable = "cigarette";
        displayName = "STR_Item_cigarette";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class clipboard {
        variable = "clipboard";
        displayName = "STR_Item_clipboard";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class coffee_mug {
        variable = "coffee_mug";
        displayName = "STR_Item_coffee_mug";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class coffee_pot_quest {
        variable = "coffee_pot_quest";
        displayName = "STR_Item_coffee_pot_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class conductor {
        variable = "conductor";
        displayName = "STR_Item_conductor";
        weight = 5;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class container_of_chlorine_quest {
        variable = "container_of_chlorine_quest";
        displayName = "STR_Item_container_of_chlorine_quest";
        weight = 0;
        buyPrice = 45;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cook_cooks_head_quest {
        variable = "cook_cooks_head_quest";
        displayName = "STR_Item_cook_cooks_head_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cook_cooks_mangled_head_quest {
        variable = "cook_cooks_mangled_head_quest";
        displayName = "STR_Item_cook_cooks_mangled_head_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class counterfeit_bottle_cap {
        variable = "counterfeit_bottle_cap";
        displayName = "STR_Item_counterfeit_bottle_cap";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class counterfeit_passport_quest {
        variable = "counterfeit_passport_quest";
        displayName = "STR_Item_counterfeit_passport_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class coyote_hide {
        variable = "coyote_hide";
        displayName = "STR_Item_coyote_hide";
        weight = 0;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class crutch {
        variable = "crutch";
        displayName = "STR_Item_crutch";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cuddles_toy_car {
        variable = "cuddles_toy_car";
        displayName = "STR_Item_cuddles_toy_car";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cue_ball {
        variable = "cue_ball";
        displayName = "STR_Item_cue_ball";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cup {
        variable = "cup";
        displayName = "STR_Item_cup";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class cutting_board {
        variable = "cutting_board";
        displayName = "STR_Item_cutting_board";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class damaged_garden_gnome {
        variable = "damaged_garden_gnome";
        displayName = "STR_Item_damaged_garden_gnome";
        weight = 4;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class deathclaw_egg_quest {
        variable = "deathclaw_egg_quest";
        displayName = "STR_Item_deathclaw_egg_quest";
        weight = 7;
        buyPrice = 400;
        sellPrice = 134;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class deathclaw_hand {
        variable = "deathclaw_hand";
        displayName = "STR_Item_deathclaw_hand";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class deployable_ballast_quest {
        variable = "deployable_ballast_quest";
        displayName = "STR_Item_deployable_ballast_quest";
        weight = 5;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class differential_pressure_controller_quest {
        variable = "differential_pressure_controller_quest";
        displayName = "STR_Item_differential_pressure_controller_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class dinky_the_t_rex_souvenir {
        variable = "dinky_the_t_rex_souvenir";
        displayName = "STR_Item_dinky_the_t_rex_souvenir";
        weight = 0.1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class dinner_plate {
        variable = "dinner_plate";
        displayName = "STR_Item_dinner_plate";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class dino_toy {
        variable = "dino_toy";
        displayName = "STR_Item_dino_toy";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class disassembled_weapons_shipment_quest {
        variable = "disassembled_weapons_shipment_quest";
        displayName = "STR_Item_disassembled_weapons_shipment_quest";
        weight = 0;
        buyPrice = 4996;
        sellPrice = 1666;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class distinctive_cigarette_butt_quest {
        variable = "distinctive_cigarette_butt_quest";
        displayName = "STR_Item_distinctive_cigarette_butt_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class dog_bowl {
        variable = "dog_bowl";
        displayName = "STR_Item_dog_bowl";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class dog_hide {
        variable = "dog_hide";
        displayName = "STR_Item_dog_hide";
        weight = 0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class doggie_treat {
        variable = "doggie_treat";
        displayName = "STR_Item_doggie_treat";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class drained_electron_charge_pack {
        variable = "drained_electron_charge_pack";
        displayName = "STR_Item_drained_electron_charge_pack";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class drained_flamer_fuel_tank {
        variable = "drained_flamer_fuel_tank";
        displayName = "STR_Item_drained_flamer_fuel_tank";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class drained_microfusion_cell {
        variable = "drained_microfusion_cell";
        displayName = "STR_Item_drained_microfusion_cell";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class drained_small_energy_cell {
        variable = "drained_small_energy_cell";
        displayName = "STR_Item_drained_small_energy_cell";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class drinking_glass {
        variable = "drinking_glass";
        displayName = "STR_Item_drinking_glass";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class driver_nephis_head_quest {
        variable = "driver_nephis_head_quest";
        displayName = "STR_Item_driver_nephis_head_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class driver_nephis_mangled_head_quest {
        variable = "driver_nephis_mangled_head_quest";
        displayName = "STR_Item_driver_nephis_mangled_head_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class drug_chemicals_quest {
        variable = "drug_chemicals_quest";
        displayName = "STR_Item_drug_chemicals_quest";
        weight = 0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class duct_tape {
        variable = "duct_tape";
        displayName = "STR_Item_duct_tape";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class earnings_clipboard {
        variable = "earnings_clipboard";
        displayName = "STR_Item_earnings_clipboard";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class egg_timer {
        variable = "egg_timer";
        displayName = "STR_Item_egg_timer";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_hydra_syringe_quest {
        variable = "empty_hydra_syringe_quest";
        displayName = "STR_Item_empty_hydra_syringe_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_jet_inhaler {
        variable = "empty_jet_inhaler";
        displayName = "STR_Item_empty_jet_inhaler";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_nuka_cola_bottle {
        variable = "empty_nuka_cola_bottle";
        displayName = "STR_Item_empty_nuka_cola_bottle";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_soda_bottle {
        variable = "empty_soda_bottle";
        displayName = "STR_Item_empty_soda_bottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_sunset_sarsaparilla_bottle {
        variable = "empty_sunset_sarsaparilla_bottle";
        displayName = "STR_Item_empty_sunset_sarsaparilla_bottle";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_sunset_sarsaparilla_bottle_no_float {
        variable = "empty_sunset_sarsaparilla_bottle_no_float";
        displayName = "STR_Item_empty_sunset_sarsaparilla_bottle_no_float";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_syringe {
        variable = "empty_syringe";
        displayName = "STR_Item_empty_syringe";
        weight = 0.005;
        buyPrice = 8;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class empty_whiskey_bottle {
        variable = "empty_whiskey_bottle";
        displayName = "STR_Item_empty_whiskey_bottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class engraved_cigarette_lighter_quest {
        variable = "engraved_cigarette_lighter_quest";
        displayName = "STR_Item_engraved_cigarette_lighter_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class erasmus_logbook {
        variable = "erasmus_logbook";
        displayName = "STR_Item_erasmus_logbook";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ericsens_log {
        variable = "ericsens_log";
        displayName = "STR_Item_ericsens_log";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class evil_gnome {
        variable = "evil_gnome";
        displayName = "STR_Item_evil_gnome";
        weight = 5;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class explosive_charge_quest {
        variable = "explosive_charge_quest";
        displayName = "STR_Item_explosive_charge_quest";
        weight = 5;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class finance_clipboard {
        variable = "finance_clipboard";
        displayName = "STR_Item_finance_clipboard";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class finger {
        variable = "finger";
        displayName = "STR_Item_finger";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class fire_gecko_egg_quest {
        variable = "fire_gecko_egg_quest";
        displayName = "STR_Item_fire_gecko_egg_quest";
        weight = 3;
        buyPrice = 65;
        sellPrice = 22;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class fire_gecko_hide {
        variable = "fire_gecko_hide";
        displayName = "STR_Item_fire_gecko_hide";
        weight = 1;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class firehose_nozzle_quest {
        variable = "firehose_nozzle_quest";
        displayName = "STR_Item_firehose_nozzle_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class fission_battery {
        variable = "fission_battery";
        displayName = "STR_Item_fission_battery";
        weight = 6;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class flour {
        variable = "flour";
        displayName = "STR_Item_flour";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class food_additive_quest {
        variable = "food_additive_quest";
        displayName = "STR_Item_food_additive_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class food_sanitizer {
        variable = "food_sanitizer";
        displayName = "STR_Item_food_sanitizer";
        weight = 7;
        buyPrice = 150;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class forceps {
        variable = "forceps";
        displayName = "STR_Item_forceps";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class fork {
        variable = "fork";
        displayName = "STR_Item_fork";
        weight = 0.5;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class gbrm2kx_memory_chip_quest {
        variable = "gbrm2kx_memory_chip_quest";
        displayName = "STR_Item_gbrm2kx_memory_chip_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class gecko_egg {
        variable = "gecko_egg";
        displayName = "STR_Item_gecko_egg";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class gecko_hide {
        variable = "gecko_hide";
        displayName = "STR_Item_gecko_hide";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class glass_pitcher {
        variable = "glass_pitcher";
        displayName = "STR_Item_glass_pitcher";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class golden_gecko_egg {
        variable = "golden_gecko_egg";
        displayName = "STR_Item_golden_gecko_egg";
        weight = 1;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class golden_gecko_hide {
        variable = "golden_gecko_hide";
        displayName = "STR_Item_golden_gecko_hide";
        weight = 1;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class golf_ball {
        variable = "golf_ball";
        displayName = "STR_Item_golf_ball";
        weight = 0.1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class great_khan_supply_cache_quest {
        variable = "great_khan_supply_cache_quest";
        displayName = "STR_Item_great_khan_supply_cache_quest";
        weight = 10;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class green_plate {
        variable = "green_plate";
        displayName = "STR_Item_green_plate";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hammer {
        variable = "hammer";
        displayName = "STR_Item_hammer";
        weight = 2;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class harmonica {
        variable = "harmonica";
        displayName = "STR_Item_harmonica";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hepa_20_cartridge_filter_quest {
        variable = "hepa_20_cartridge_filter_quest";
        displayName = "STR_Item_hepa_20_cartridge_filter_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class highly_suspicious_package_quest {
        variable = "highly_suspicious_package_quest";
        displayName = "STR_Item_highly_suspicious_package_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hot_plate {
        variable = "hot_plate";
        displayName = "STR_Item_hot_plate";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class howitzer_firing_mechanism_quest {
        variable = "howitzer_firing_mechanism_quest";
        displayName = "STR_Item_howitzer_firing_mechanism_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hull_box_12_ga {
        variable = "hull_box_12_ga";
        displayName = "STR_Item_hull_box_12_ga";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hull_box_20_ga {
        variable = "hull_box_20_ga";
        displayName = "STR_Item_hull_box_20_ga";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hull_12_gauge {
        variable = "hull_12_gauge";
        displayName = "STR_Item_hull_12_gauge";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class hull_20_gauge {
        variable = "hull_20_gauge";
        displayName = "STR_Item_hull_20_gauge";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class infected_brahmin_meat {
        variable = "infected_brahmin_meat";
        displayName = "STR_Item_infected_brahmin_meat";
        weight = 5;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class intact_garden_gnome {
        variable = "intact_garden_gnome";
        displayName = "STR_Item_intact_garden_gnome";
        weight = 5;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class iron_quest {
        variable = "iron_quest";
        displayName = "STR_Item_iron_quest";
        weight = 5;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class irradiated_ncr_dogtag_quest {
        variable = "irradiated_ncr_dogtag_quest";
        displayName = "STR_Item_irradiated_ncr_dogtag_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class isotope_239_igniting_agent_quest {
        variable = "isotope_239_igniting_agent_quest";
        displayName = "STR_Item_isotope_239_igniting_agent_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class boomer_outfit_for_janet_quest {
        variable = "boomer_outfit_for_janet_quest";
        displayName = "STR_Item_boomer_outfit_for_janet_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class jar_pistol_powder {
        variable = "jar_pistol_powder";
        displayName = "STR_Item_jar_pistol_powder";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class jar_rifle_powder {
        variable = "jar_rifle_powder";
        displayName = "STR_Item_jar_rifle_powder";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class keyring {
        variable = "keyring";
        displayName = "STR_Item_keyring";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class large_burned_book {
        variable = "large_burned_book";
        displayName = "STR_Item_large_burned_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class large_destroyed_book {
        variable = "large_destroyed_book";
        displayName = "STR_Item_large_destroyed_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class large_ruined_book {
        variable = "large_ruined_book";
        displayName = "STR_Item_large_ruined_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class large_scorched_book {
        variable = "large_scorched_book";
        displayName = "STR_Item_large_scorched_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class large_whiskey_bottle {
        variable = "large_whiskey_bottle";
        displayName = "STR_Item_large_whiskey_bottle";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class lawn_mower_blade {
        variable = "lawn_mower_blade";
        displayName = "STR_Item_lawn_mower_blade";
        weight = 2;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class lead {
        variable = "lead";
        displayName = "STR_Item_lead";
        weight = 0.001 *;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class leaf_blower {
        variable = "leaf_blower";
        displayName = "STR_Item_leaf_blower";
        weight = 2;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class leather_belt {
        variable = "leather_belt";
        displayName = "STR_Item_leather_belt";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_aureus {
        variable = "legion_aureus";
        displayName = "STR_Item_legion_aureus";
        weight = 0.02;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_denarius {
        variable = "legion_denarius";
        displayName = "STR_Item_legion_denarius";
        weight = 0.01;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_denarius_mangled {
        variable = "legion_denarius_mangled";
        displayName = "STR_Item_legion_denarius_mangled";
        weight = 0.01;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_ear_quest {
        variable = "legion_ear_quest";
        displayName = "STR_Item_legion_ear_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_patrol_notes_quest {
        variable = "legion_patrol_notes_quest";
        displayName = "STR_Item_legion_patrol_notes_quest";
        weight = 0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_raid_plans_quest {
        variable = "legion_raid_plans_quest";
        displayName = "STR_Item_legion_raid_plans_quest";
        weight = 0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class legion_slave_ledger_quest {
        variable = "legion_slave_ledger_quest";
        displayName = "STR_Item_legion_slave_ledger_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class lineholms_log {
        variable = "lineholms_log";
        displayName = "STR_Item_lineholms_log";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class lottery_ticket {
        variable = "lottery_ticket";
        displayName = "STR_Item_lottery_ticket";
        weight = 0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class lunchbox {
        variable = "lunchbox";
        displayName = "STR_Item_lunchbox";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class lupas_brain_quest {
        variable = "lupas_brain_quest";
        displayName = "STR_Item_lupas_brain_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mantis_egg_quest {
        variable = "mantis_egg_quest";
        displayName = "STR_Item_mantis_egg_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mantis_egg {
        variable = "mantis_egg";
        displayName = "STR_Item_mantis_egg";
        weight = 1;
        buyPrice = 12;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mantis_foreleg {
        variable = "mantis_foreleg";
        displayName = "STR_Item_mantis_foreleg";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mark_of_caesar_quest {
        variable = "mark_of_caesar_quest";
        displayName = "STR_Item_mark_of_caesar_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class marked_cards_quest {
        variable = "marked_cards_quest";
        displayName = "STR_Item_marked_cards_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class medical_brace {
        variable = "medical_brace";
        displayName = "STR_Item_medical_brace";
        weight = 2;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class medical_clipboard {
        variable = "medical_clipboard";
        displayName = "STR_Item_medical_clipboard";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class metal_cooking_pan_quest {
        variable = "metal_cooking_pan_quest";
        displayName = "STR_Item_metal_cooking_pan_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class metal_cooking_pot_quest {
        variable = "metal_cooking_pot_quest";
        displayName = "STR_Item_metal_cooking_pot_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class metal_spoon {
        variable = "metal_spoon";
        displayName = "STR_Item_metal_spoon";
        weight = 0.5;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class microphone_and_stand {
        variable = "microphone_and_stand";
        displayName = "STR_Item_microphone_and_stand";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mildly_suspicious_package_quest {
        variable = "mildly_suspicious_package_quest";
        displayName = "STR_Item_mildly_suspicious_package_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class milk_bottle {
        variable = "milk_bottle";
        displayName = "STR_Item_milk_bottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mister_cuddles_quest {
        variable = "mister_cuddles_quest";
        displayName = "STR_Item_mister_cuddles_quest";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class motorcycle_gas_tank {
        variable = "motorcycle_gas_tank";
        displayName = "STR_Item_motorcycle_gas_tank";
        weight = 5;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class motorcycle_handbrake {
        variable = "motorcycle_handbrake";
        displayName = "STR_Item_motorcycle_handbrake";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mutilated_arm {
        variable = "mutilated_arm";
        displayName = "STR_Item_mutilated_arm";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mutilated_leg {
        variable = "mutilated_leg";
        displayName = "STR_Item_mutilated_leg";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mutilated_organs {
        variable = "mutilated_organs";
        displayName = "STR_Item_mutilated_organs";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mutilated_skull {
        variable = "mutilated_skull";
        displayName = "STR_Item_mutilated_skull";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class mutilated_torso {
        variable = "mutilated_torso";
        displayName = "STR_Item_mutilated_torso";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_10mm_pistol_quest {
        variable = "ncr_10mm_pistol_quest";
        displayName = "STR_Item_ncr_10mm_pistol_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_9mm_submachine_gun_quest {
        variable = "ncr_9mm_submachine_gun_quest";
        displayName = "STR_Item_ncr_9mm_submachine_gun_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_bug_quest {
        variable = "ncr_bug_quest";
        displayName = "STR_Item_ncr_bug_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_computer_parts_quest {
        variable = "ncr_computer_parts_quest";
        displayName = "STR_Item_ncr_computer_parts_quest";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_dogtag_quest {
        variable = "ncr_dogtag_quest";
        displayName = "STR_Item_ncr_dogtag_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_frag_grenade_quest {
        variable = "ncr_frag_grenade_quest";
        displayName = "STR_Item_ncr_frag_grenade_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_grenade_rifle_quest {
        variable = "ncr_grenade_rifle_quest";
        displayName = "STR_Item_ncr_grenade_rifle_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ncr_radio_parts_quest {
        variable = "ncr_radio_parts_quest";
        displayName = "STR_Item_ncr_radio_parts_quest";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class new_vegas_passport {
        variable = "new_vegas_passport";
        displayName = "STR_Item_new_vegas_passport";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class nightstalker_blood {
        variable = "nightstalker_blood";
        displayName = "STR_Item_nightstalker_blood";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class nightstalker_egg {
        variable = "nightstalker_egg";
        displayName = "STR_Item_nightstalker_egg";
        weight = 2;
        buyPrice = 45;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class nuka_cola_truck {
        variable = "nuka_cola_truck";
        displayName = "STR_Item_nuka_cola_truck";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class old_legion_patrol_notes_quest {
        variable = "old_legion_patrol_notes_quest";
        displayName = "STR_Item_old_legion_patrol_notes_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class old_legion_raid_plans_quest {
        variable = "old_legion_raid_plans_quest";
        displayName = "STR_Item_old_legion_raid_plans_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ophthalmascope {
        variable = "ophthalmascope";
        displayName = "STR_Item_ophthalmascope";
        weight = 1;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class override_chip_quest {
        variable = "override_chip_quest";
        displayName = "STR_Item_override_chip_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pack_of_cigarettes {
        variable = "pack_of_cigarettes";
        displayName = "STR_Item_pack_of_cigarettes";
        weight = 0.5;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class paint_gun {
        variable = "paint_gun";
        displayName = "STR_Item_paint_gun";
        weight = 5;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class paperweight {
        variable = "paperweight";
        displayName = "STR_Item_paperweight";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pencil {
        variable = "pencil";
        displayName = "STR_Item_pencil";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pile_of_cazador_eggs_quest {
        variable = "pile_of_cazador_eggs_quest";
        displayName = "STR_Item_pile_of_cazador_eggs_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pile_of_deathclaw_eggs_quest {
        variable = "pile_of_deathclaw_eggs_quest";
        displayName = "STR_Item_pile_of_deathclaw_eggs_quest";
        weight = 10;
        buyPrice = 2500;
        sellPrice = 834;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pile_of_fire_gecko_eggs_quest {
        variable = "pile_of_fire_gecko_eggs_quest";
        displayName = "STR_Item_pile_of_fire_gecko_eggs_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pile_of_giant_mantis_eggs_quest {
        variable = "pile_of_giant_mantis_eggs_quest";
        displayName = "STR_Item_pile_of_giant_mantis_eggs_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pile_of_night_stalker_eggs_quest {
        variable = "pile_of_night_stalker_eggs_quest";
        displayName = "STR_Item_pile_of_night_stalker_eggs_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pile_of_radscorpion_eggs_quest {
        variable = "pile_of_radscorpion_eggs_quest";
        displayName = "STR_Item_pile_of_radscorpion_eggs_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pilot_light {
        variable = "pilot_light";
        displayName = "STR_Item_pilot_light";
        weight = 1;
        buyPrice = 14;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ping_pong_ball {
        variable = "ping_pong_ball";
        displayName = "STR_Item_ping_pong_ball";
        weight = 0.1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class platinum_chip_quest {
        variable = "platinum_chip_quest";
        displayName = "STR_Item_platinum_chip_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class plunger {
        variable = "plunger";
        displayName = "STR_Item_plunger";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pool_ball {
        variable = "pool_ball";
        displayName = "STR_Item_pool_ball";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pot_quest {
        variable = "pot_quest";
        displayName = "STR_Item_pot_quest";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class powder_pistol {
        variable = "powder_pistol";
        displayName = "STR_Item_powder_pistol";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class powder_rifle {
        variable = "powder_rifle";
        displayName = "STR_Item_powder_rifle";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pressure_cooker {
        variable = "pressure_cooker";
        displayName = "STR_Item_pressure_cooker";
        weight = 5;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pretty_pretty_horsies_a_history_of_the_mongol_empire_quest {
        variable = "pretty_pretty_horsies_a_history_of_the_mongol_empire_quest";
        displayName = "STR_Item_pretty_pretty_horsies_a_history_of_the_mongol_empire_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pre_war_book {
        variable = "pre_war_book";
        displayName = "STR_Item_pre_war_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class pre_war_money {
        variable = "pre_war_money";
        displayName = "STR_Item_pre_war_money";
        weight = 0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_box_50_mg {
        variable = "primer_box_50_mg";
        displayName = "STR_Item_primer_box_50_mg";
        weight = 1;
        buyPrice = 12;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_box_large_pistol {
        variable = "primer_box_large_pistol";
        displayName = "STR_Item_primer_box_large_pistol";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_box_large_rifle {
        variable = "primer_box_large_rifle";
        displayName = "STR_Item_primer_box_large_rifle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_box_shotshell {
        variable = "primer_box_shotshell";
        displayName = "STR_Item_primer_box_shotshell";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_box_small_pistol {
        variable = "primer_box_small_pistol";
        displayName = "STR_Item_primer_box_small_pistol";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_box_small_rifle {
        variable = "primer_box_small_rifle";
        displayName = "STR_Item_primer_box_small_rifle";
        weight = 1;
        buyPrice = 7;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_50_mg {
        variable = "primer_50_mg";
        displayName = "STR_Item_primer_50_mg";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_large_pistol {
        variable = "primer_large_pistol";
        displayName = "STR_Item_primer_large_pistol";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_large_rifle {
        variable = "primer_large_rifle";
        displayName = "STR_Item_primer_large_rifle";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_shotshell {
        variable = "primer_shotshell";
        displayName = "STR_Item_primer_shotshell";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_small_pistol {
        variable = "primer_small_pistol";
        displayName = "STR_Item_primer_small_pistol";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class primer_small_rifle {
        variable = "primer_small_rifle";
        displayName = "STR_Item_primer_small_rifle";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class radiation_suit_package_quest {
        variable = "radiation_suit_package_quest";
        displayName = "STR_Item_radiation_suit_package_quest";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class radioactive_supply_cache_quest {
        variable = "radioactive_supply_cache_quest";
        displayName = "STR_Item_radioactive_supply_cache_quest";
        weight = 10;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class radscorpion_egg {
        variable = "radscorpion_egg";
        displayName = "STR_Item_radscorpion_egg";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class radscorpion_poison_gland_quest {
        variable = "radscorpion_poison_gland_quest";
        displayName = "STR_Item_radscorpion_poison_gland_quest";
        weight = 1;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class rake {
        variable = "rake";
        displayName = "STR_Item_rake";
        weight = 2;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ralphs_sexbot_holodisk_quest {
        variable = "ralphs_sexbot_holodisk_quest";
        displayName = "STR_Item_ralphs_sexbot_holodisk_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class recipes___brahmin_wellington {
        variable = "recipes___brahmin_wellington";
        displayName = "STR_Item_recipes___brahmin_wellington";
        weight = 0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class recipes___cook_cooks_fiend_stew {
        variable = "recipes___cook_cooks_fiend_stew";
        displayName = "STR_Item_recipes___cook_cooks_fiend_stew";
        weight = 0;
        buyPrice = 400;
        sellPrice = 134;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class recipes___rubys_spicy_casserole {
        variable = "recipes___rubys_spicy_casserole";
        displayName = "STR_Item_recipes___rubys_spicy_casserole";
        weight = 0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class red_plate {
        variable = "red_plate";
        displayName = "STR_Item_red_plate";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class redundant_failsafe_detonator_quest {
        variable = "redundant_failsafe_detonator_quest";
        displayName = "STR_Item_redundant_failsafe_detonator_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class remote_signal_transmitter_quest {
        variable = "remote_signal_transmitter_quest";
        displayName = "STR_Item_remote_signal_transmitter_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class reverse_pulse_cleaner_quest {
        variable = "reverse_pulse_cleaner_quest";
        displayName = "STR_Item_reverse_pulse_cleaner_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class reys_brain_quest {
        variable = "reys_brain_quest";
        displayName = "STR_Item_reys_brain_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class rocket_souvenir_quest {
        variable = "rocket_souvenir_quest";
        displayName = "STR_Item_rocket_souvenir_quest";
        weight = 0;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class scalpel {
        variable = "scalpel";
        displayName = "STR_Item_scalpel";
        weight = 1;
        buyPrice = 8;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class schematics___billboard {
        variable = "schematics___billboard";
        displayName = "STR_Item_schematics___billboard";
        weight = 0;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class schematics___mantis_scythe {
        variable = "schematics___mantis_scythe";
        displayName = "STR_Item_schematics___mantis_scythe";
        weight = 0;
        buyPrice = 800;
        sellPrice = 267;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class schematics___powder_charge {
        variable = "schematics___powder_charge";
        displayName = "STR_Item_schematics___powder_charge";
        weight = 0;
        buyPrice = 300;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class scissors {
        variable = "scissors";
        displayName = "STR_Item_scissors";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class scrap_electronics {
        variable = "scrap_electronics";
        displayName = "STR_Item_scrap_electronics";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class scrap_metal_quest {
        variable = "scrap_metal_quest";
        displayName = "STR_Item_scrap_metal_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sensor_module {
        variable = "sensor_module";
        displayName = "STR_Item_sensor_module";
        weight = 2;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sentry_bot_toy {
        variable = "sentry_bot_toy";
        displayName = "STR_Item_sentry_bot_toy";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sergeant_teddy_quest {
        variable = "sergeant_teddy_quest";
        displayName = "STR_Item_sergeant_teddy_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sheet_music_book {
        variable = "sheet_music_book";
        displayName = "STR_Item_sheet_music_book";
        weight = 1;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class shot_glass {
        variable = "shot_glass";
        displayName = "STR_Item_shot_glass";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class small_burned_book {
        variable = "small_burned_book";
        displayName = "STR_Item_small_burned_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class small_destroyed_book {
        variable = "small_destroyed_book";
        displayName = "STR_Item_small_destroyed_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class small_ruined_book {
        variable = "small_ruined_book";
        displayName = "STR_Item_small_ruined_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class small_scorched_book {
        variable = "small_scorched_book";
        displayName = "STR_Item_small_scorched_book";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___goodsprings_quest {
        variable = "snow_globe___goodsprings_quest";
        displayName = "STR_Item_snow_globe___goodsprings_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___hoover_dam_quest {
        variable = "snow_globe___hoover_dam_quest";
        displayName = "STR_Item_snow_globe___hoover_dam_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___mormon_fort_quest {
        variable = "snow_globe___mormon_fort_quest";
        displayName = "STR_Item_snow_globe___mormon_fort_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___mt_charleston_quest {
        variable = "snow_globe___mt_charleston_quest";
        displayName = "STR_Item_snow_globe___mt_charleston_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___nellis_afb_quest {
        variable = "snow_globe___nellis_afb_quest";
        displayName = "STR_Item_snow_globe___nellis_afb_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___test_site_quest {
        variable = "snow_globe___test_site_quest";
        displayName = "STR_Item_snow_globe___test_site_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class snow_globe___the_strip_quest {
        variable = "snow_globe___the_strip_quest";
        displayName = "STR_Item_snow_globe___the_strip_quest";
        weight = 0;
        buyPrice = 2000;
        sellPrice = 667;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class solar_array_parts_quest {
        variable = "solar_array_parts_quest";
        displayName = "STR_Item_solar_array_parts_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sonic_emitter_quest {
        variable = "sonic_emitter_quest";
        displayName = "STR_Item_sonic_emitter_quest";
        weight = 5;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class spare_medical_supplies_quest {
        variable = "spare_medical_supplies_quest";
        displayName = "STR_Item_spare_medical_supplies_quest";
        weight = 0;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class spatula {
        variable = "spatula";
        displayName = "STR_Item_spatula";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class spork {
        variable = "spork";
        displayName = "STR_Item_spork";
        weight = 0.5;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class steam_gauge_assembly_quest {
        variable = "steam_gauge_assembly_quest";
        displayName = "STR_Item_steam_gauge_assembly_quest";
        weight = 10;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class stress_and_the_modern_refugee_a_primer_quest {
        variable = "stress_and_the_modern_refugee_a_primer_quest";
        displayName = "STR_Item_stress_and_the_modern_refugee_a_primer_quest";
        weight = 1;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sunset_sarsaparilla_bottle {
        variable = "sunset_sarsaparilla_bottle";
        displayName = "STR_Item_sunset_sarsaparilla_bottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sunset_sarsaparilla_deputy_badge {
        variable = "sunset_sarsaparilla_deputy_badge";
        displayName = "STR_Item_sunset_sarsaparilla_deputy_badge";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class sunset_sarsaparilla_star_bottle_cap_quest {
        variable = "sunset_sarsaparilla_star_bottle_cap_quest";
        displayName = "STR_Item_sunset_sarsaparilla_star_bottle_cap_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class surgical_tools_quest {
        variable = "surgical_tools_quest";
        displayName = "STR_Item_surgical_tools_quest";
        weight = 1;
        buyPrice = 1000;
        sellPrice = 334;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class surgical_tubing {
        variable = "surgical_tubing";
        displayName = "STR_Item_surgical_tubing";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class suspicious_package_quest {
        variable = "suspicious_package_quest";
        displayName = "STR_Item_suspicious_package_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tanned_fire_gecko_hide {
        variable = "tanned_fire_gecko_hide";
        displayName = "STR_Item_tanned_fire_gecko_hide";
        weight = 1;
        buyPrice = 125;
        sellPrice = 42;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tanned_gecko_hide {
        variable = "tanned_gecko_hide";
        displayName = "STR_Item_tanned_gecko_hide";
        weight = 1;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tanned_golden_gecko_hide {
        variable = "tanned_golden_gecko_hide";
        displayName = "STR_Item_tanned_golden_gecko_hide";
        weight = 1;
        buyPrice = 250;
        sellPrice = 84;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class ted_gundersons_blood_quest {
        variable = "ted_gundersons_blood_quest";
        displayName = "STR_Item_ted_gundersons_blood_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class teddy_bear {
        variable = "teddy_bear";
        displayName = "STR_Item_teddy_bear";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class teddy_bear_quest {
        variable = "teddy_bear_quest";
        displayName = "STR_Item_teddy_bear_quest";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class thermite_quest {
        variable = "thermite_quest";
        displayName = "STR_Item_thermite_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class thrust_control_modules_quest {
        variable = "thrust_control_modules_quest";
        displayName = "STR_Item_thrust_control_modules_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class thrust_control_modules {
        variable = "thrust_control_modules";
        displayName = "STR_Item_thrust_control_modules";
        weight = 1;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tin_can_quest {
        variable = "tin_can_quest";
        displayName = "STR_Item_tin_can_quest";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tin_plate {
        variable = "tin_plate";
        displayName = "STR_Item_tin_plate";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tiny_tiny_babies_all_you_need_to_know_about_pediatric_medicine_quest {
        variable = "tiny_tiny_babies_all_you_need_to_know_about_pediatric_medicine_quest";
        displayName = "STR_Item_tiny_tiny_babies_all_you_need_to_know_about_pediatric_medicine_quest";
        weight = 1;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class toaster {
        variable = "toaster";
        displayName = "STR_Item_toaster";
        weight = 3;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tommy_torinis_business_card_quest {
        variable = "tommy_torinis_business_card_quest";
        displayName = "STR_Item_tommy_torinis_business_card_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class toy_car {
        variable = "toy_car";
        displayName = "STR_Item_toy_car";
        weight = 1;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class triangle {
        variable = "triangle";
        displayName = "STR_Item_triangle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class turpentine {
        variable = "turpentine";
        displayName = "STR_Item_turpentine";
        weight = 2;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class tweezers {
        variable = "tweezers";
        displayName = "STR_Item_tweezers";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class vacuum_cleaner {
        variable = "vacuum_cleaner";
        displayName = "STR_Item_vacuum_cleaner";
        weight = 10;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class van_graff_package_quest {
        variable = "van_graff_package_quest";
        displayName = "STR_Item_van_graff_package_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class vault_13_canteen {
        variable = "vault_13_canteen";
        displayName = "STR_Item_vault_13_canteen";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class vertibird_bomb_quest {
        variable = "vertibird_bomb_quest";
        displayName = "STR_Item_vertibird_bomb_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class violets_head_quest {
        variable = "violets_head_quest";
        displayName = "STR_Item_violets_head_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class violets_mangled_head_quest {
        variable = "violets_mangled_head_quest";
        displayName = "STR_Item_violets_mangled_head_quest";
        weight = 0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class violettas_brain_quest {
        variable = "violettas_brain_quest";
        displayName = "STR_Item_violettas_brain_quest";
        weight = 0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class whet_stone {
        variable = "whet_stone";
        displayName = "STR_Item_whet_stone";
        weight = 1;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class white_plate {
        variable = "white_plate";
        displayName = "STR_Item_white_plate";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class wonderglue {
        variable = "wonderglue";
        displayName = "STR_Item_wonderglue";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class wood_chipper {
        variable = "wood_chipper";
        displayName = "STR_Item_wood_chipper";
        weight = 50;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class wrench {
        variable = "wrench";
        displayName = "STR_Item_wrench";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class yeast {
        variable = "yeast";
        displayName = "STR_Item_yeast";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_junk.paa";
    };

    class absinthe {
        variable = "absinthe";
        displayName = "STR_Item_absinthe";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_absinthe.paa";
    };

    class atomic_cocktail {
        variable = "atomic_cocktail";
        displayName = "STR_Item_atomic_cocktail";
        weight = 1.0;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_atomic_cocktail.paa";
    };

    class battle_brew {
        variable = "battle_brew";
        displayName = "STR_Item_battle_brew";
        weight = 1.0;
        buyPrice = 150;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_battle_brew.paa";
    };

    class beer {
        variable = "beer";
        displayName = "STR_Item_beer";
        weight = 1.0;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_beer.paa";
    };

    class bitter_drink {
        variable = "bitter_drink";
        displayName = "STR_Item_bitter_drink";
        weight = 0.0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_bitter_drink.paa";
    };

    class black_coffee {
        variable = "black_coffee";
        displayName = "STR_Item_black_coffee";
        weight = 0.02;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_black_coffee.paa";
    };

    class blood_pack {
        variable = "blood_pack";
        displayName = "STR_Item_blood_pack";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blood_pack.paa";
    };

    class dirty_water {
        variable = "dirty_water";
        displayName = "STR_Item_dirty_water";
        weight = 1.0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_dirty_water.paa";
    };

    class dixons_whiskey {
        variable = "dixons_whiskey";
        displayName = "STR_Item_dixons_whiskey";
        weight = 1.0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_dixons_whiskey.paa";
    };

    class ice_cold_nuka_cola {
        variable = "ice_cold_nuka_cola";
        displayName = "STR_Item_ice_cold_nuka_cola";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ice_cold_nuka_cola.paa";
    };

    class irradiated_beer {
        variable = "irradiated_beer";
        displayName = "STR_Item_irradiated_beer";
        weight = 1.0;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_irradiated_beer.paa";
    };

    class irradiated_scotch {
        variable = "irradiated_scotch";
        displayName = "STR_Item_irradiated_scotch";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_irradiated_scotch.paa";
    };

    class irradiated_sunset_sarsaparilla {
        variable = "irradiated_sunset_sarsaparilla";
        displayName = "STR_Item_irradiated_sunset_sarsaparilla";
        weight = 1.0;
        buyPrice = 4;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_irradiated_sunset_sarsaparilla.paa";
    };

    class irradiated_water {
        variable = "irradiated_water";
        displayName = "STR_Item_irradiated_water";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_irradiated_water.paa";
    };

    class irradiated_whiskey {
        variable = "irradiated_whiskey";
        displayName = "STR_Item_irradiated_whiskey";
        weight = 1.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_irradiated_whiskey.paa";
    };

    class jake_juice {
        variable = "jake_juice";
        displayName = "STR_Item_jake_juice";
        weight = 1.0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_jake_juice.paa";
    };

    class large_wasteland_tequila {
        variable = "large_wasteland_tequila";
        displayName = "STR_Item_large_wasteland_tequila";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_large_wasteland_tequila.paa";
    };

    class moonshine {
        variable = "moonshine";
        displayName = "STR_Item_moonshine";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_moonshine.paa";
    };

    class nightstalker_squeezins {
        variable = "nightstalker_squeezins";
        displayName = "STR_Item_nightstalker_squeezins";
        weight = 0.5;
        buyPrice = 100;
        sellPrice = 34;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nightstalker_squeezins.paa";
    };

    class nuka_cola {
        variable = "nuka_cola";
        displayName = "STR_Item_nuka_cola";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nuka_cola.paa";
    };

    class nuka_cola_quantum {
        variable = "nuka_cola_quantum";
        displayName = "STR_Item_nuka_cola_quantum";
        weight = 1.0;
        buyPrice = 30;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nuka_cola_quantum.paa";
    };

    class nuka_cola_quartz {
        variable = "nuka_cola_quartz";
        displayName = "STR_Item_nuka_cola_quartz";
        weight = 1.0;
        buyPrice = 40;
        sellPrice = 14;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nuka_cola_quartz.paa";
    };

    class nuka_cola_victory {
        variable = "nuka_cola_victory";
        displayName = "STR_Item_nuka_cola_victory";
        weight = 1.0;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_nuka_cola_victory.paa";
    };

    class purified_water {
        variable = "purified_water";
        displayName = "STR_Item_purified_water";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_purified_water.paa";
    };

    class rum_and_nuka {
        variable = "rum_and_nuka";
        displayName = "STR_Item_rum_and_nuka";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rum_and_nuka.paa";
    };

    class scotch {
        variable = "scotch";
        displayName = "STR_Item_scotch";
        weight = 1.0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_scotch.paa";
    };

    class sierra_madre_martini {
        variable = "sierra_madre_martini";
        displayName = "STR_Item_sierra_madre_martini";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_sierra_madre_martini.paa";
    };

    class sunset_sarsaparilla {
        variable = "sunset_sarsaparilla";
        displayName = "STR_Item_sunset_sarsaparilla";
        weight = 1.0;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_sunset_sarsaparilla.paa";
    };

    class vodka {
        variable = "vodka";
        displayName = "STR_Item_vodka";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_vodka.paa";
    };

    class wasteland_tequila {
        variable = "wasteland_tequila";
        displayName = "STR_Item_wasteland_tequila";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wasteland_tequila.paa";
    };

    class whiskey {
        variable = "whiskey";
        displayName = "STR_Item_whiskey";
        weight = 1.0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_whiskey.paa";
    };

    class wine {
        variable = "wine";
        displayName = "STR_Item_wine";
        weight = 1.0;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_wine.paa";
    };

    class ant_queen_pheromones {
        variable = "ant_queen_pheromones";
        displayName = "STR_Item_ant_queen_pheromones";
        weight = 1.0;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ant_queen_pheromones.paa";
    };

    class antivenom {
        variable = "antivenom";
        displayName = "STR_Item_antivenom";
        weight = 0.0;
        buyPrice = 25;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_antivenom.paa";
    };

    class ant_nectar {
        variable = "ant_nectar";
        displayName = "STR_Item_ant_nectar";
        weight = 0.25;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ant_nectar.paa";
    };

    class auto_inject_stimpak {
        variable = "auto_inject_stimpak";
        displayName = "STR_Item_auto_inject_stimpak";
        weight = 0.2;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_auto_inject_stimpak.paa";
    };

    class auto_inject_super_stimpak {
        variable = "auto_inject_super_stimpak";
        displayName = "STR_Item_auto_inject_super_stimpak";
        weight = 0.2;
        buyPrice = 150;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_auto_inject_super_stimpak.paa";
    };

    class blood_shield {
        variable = "blood_shield";
        displayName = "STR_Item_blood_shield";
        weight = 0.5;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_blood_shield.paa";
    };

    class buffout {
        variable = "buffout";
        displayName = "STR_Item_buffout";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_buffout.paa";
    };

    class cateye {
        variable = "cateye";
        displayName = "STR_Item_cateye";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_cateye.paa";
    };

    class coyote_tobacco_chew {
        variable = "coyote_tobacco_chew";
        displayName = "STR_Item_coyote_tobacco_chew";
        weight = 0.01;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_coyote_tobacco_chew.paa";
    };

    class datura_antivenom {
        variable = "datura_antivenom";
        displayName = "STR_Item_datura_antivenom";
        weight = 0.5;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_datura_antivenom.paa";
    };

    class datura_hide {
        variable = "datura_hide";
        displayName = "STR_Item_datura_hide";
        weight = 0.5;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_datura_hide.paa";
    };

    class dixons_jet {
        variable = "dixons_jet";
        displayName = "STR_Item_dixons_jet";
        weight = 0.0;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_dixons_jet.paa";
    };

    class doctors_bag {
        variable = "doctors_bag";
        displayName = "STR_Item_doctors_bag";
        weight = 1.0;
        buyPrice = 55;
        sellPrice = 19;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_doctors_bag.paa";
    };

    class fiery_purgative {
        variable = "fiery_purgative";
        displayName = "STR_Item_fiery_purgative";
        weight = 0.2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fiery_purgative.paa";
    };

    class fire_ant_nectar {
        variable = "fire_ant_nectar";
        displayName = "STR_Item_fire_ant_nectar";
        weight = 1.0;
        buyPrice = 35;
        sellPrice = 12;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fire_ant_nectar.paa";
    };

    class fixer {
        variable = "fixer";
        displayName = "STR_Item_fixer";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_fixer.paa";
    };

    class ghost_sight {
        variable = "ghost_sight";
        displayName = "STR_Item_ghost_sight";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ghost_sight.paa";
    };

    class healing_poultice {
        variable = "healing_poultice";
        displayName = "STR_Item_healing_poultice";
        weight = 0.03;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_healing_poultice.paa";
    };

    class healing_powder {
        variable = "healing_powder";
        displayName = "STR_Item_healing_powder";
        weight = 0.03;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_healing_powder.paa";
    };

    class hydra {
        variable = "hydra";
        displayName = "STR_Item_hydra";
        weight = 0.0;
        buyPrice = 55;
        sellPrice = 19;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_hydra.paa";
    };

    class jet {
        variable = "jet";
        displayName = "STR_Item_jet";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_jet.paa";
    };

    class med_x {
        variable = "med_x";
        displayName = "STR_Item_med_x";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_med_x.paa";
    };

    class medical_supplies {
        variable = "medical_supplies";
        displayName = "STR_Item_medical_supplies";
        weight = 10.0;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_medical_supplies.paa";
    };

    class mentats {
        variable = "mentats";
        displayName = "STR_Item_mentats";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_mentats.paa";
    };

    class party_time_mentats {
        variable = "party_time_mentats";
        displayName = "STR_Item_party_time_mentats";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_party_time_mentats.paa";
    };

    class psycho {
        variable = "psycho";
        displayName = "STR_Item_psycho";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_psycho.paa";
    };

    class rad_x {
        variable = "rad_x";
        displayName = "STR_Item_rad_x";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rad_x.paa";
    };

    class radaway {
        variable = "radaway";
        displayName = "STR_Item_radaway";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_radaway.paa";
    };

    class rebound {
        variable = "rebound";
        displayName = "STR_Item_rebound";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rebound.paa";
    };

    class rocket {
        variable = "rocket";
        displayName = "STR_Item_rocket";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rocket.paa";
    };

    class rushing_water {
        variable = "rushing_water";
        displayName = "STR_Item_rushing_water";
        weight = 1.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_rushing_water.paa";
    };

    class slasher {
        variable = "slasher";
        displayName = "STR_Item_slasher";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_slasher.paa";
    };

    class steady {
        variable = "steady";
        displayName = "STR_Item_steady";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_steady.paa";
    };

    class stimpak {
        variable = "stimpak";
        displayName = "STR_Item_stimpak";
        weight = 0.0;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_stimpak.paa";
    };

    class super_stimpak {
        variable = "super_stimpak";
        displayName = "STR_Item_super_stimpak";
        weight = 0.0;
        buyPrice = 150;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_super_stimpak.paa";
    };

    class turbo {
        variable = "turbo";
        displayName = "STR_Item_turbo";
        weight = 0.0;
        buyPrice = 20;
        sellPrice = 7;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_turbo.paa";
    };

    class ultrajet {
        variable = "ultrajet";
        displayName = "STR_Item_ultrajet";
        weight = 0.0;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_ultrajet.paa";
    };

    class weapon_binding_ritual {
        variable = "weapon_binding_ritual";
        displayName = "STR_Item_weapon_binding_ritual";
        weight = 0.5;
        buyPrice = 50;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        drinkable = -1;
        icon = "icons\ico_weapon_binding_ritual.paa";
    };
};

