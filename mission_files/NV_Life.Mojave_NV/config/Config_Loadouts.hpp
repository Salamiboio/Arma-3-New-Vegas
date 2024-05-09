/*
    class PLAYERSIDE { // PLAYERSIDE can be: WEST (for cops), CIV (for civ/reb), GUER (for medics), EAST (for opfor)
        // NOTES:
        //     empty array means that nothing will be add on players
        //     if you put more than a uniform on the CIV's class, they will be selected randonly,
        //         otherwise, for the other teams, player will get the uniform related to his level

        itemType[] = { // itemType can be: uniform, headgear, vest, backpack, weapon, items or linkedItems
            { "classname", "conditions" }
        };
    };
*/
class Loadouts {
    // COP
    class WEST {
        uniform[] = {
            {"armor_ncr_trooper_01_uniform", "call life_copLevel >= 0"}
        };
        headgear[] = {
            {"armor_ncr_trooper_helm", "call life_copLevel >= 0"}
        };
        vest[] = {};
        backpack[] = {};
        weapon[] = {
            {"AM_serviceRifle", "call life_copLevel >= 0"}
        };
        mags[] = {
            {"20Rnd_556x45_Mag", 7, "call life_copLevel >= 0"}
        };
        items[] = {
            {"AM_stimpak", 1, "call life_copLevel >= 0"}
        };
        linkedItems[] = {
            {"ItemMap", "call life_copLevel >= 0"},
            {"ItemCompass", "call life_copLevel >= 0"},
            {"ItemWatch", "call life_copLevel >= 0"}
        };
    };

    // CIV
    class CIV {
        uniform[] = {
            {"wastelandsettler02_uniform", "!life_is_arrested"},
            {"wastelandsettler03_uniform", "!life_is_arrested"},
            {"wasteland_doctor_02_uniform", "!life_is_arrested"},
            {"wastelandmerchant01_uniform", "!life_is_arrested"},
            {"lucassimms_ncr_uniform", "!life_is_arrested"},
            {"republican_01_uniform", "!life_is_arrested"},
            {"AM_Uniform_CowboyOutfit_S", "!life_is_arrested"},
            {"republican_02_uniform", "!life_is_arrested" },
            {"wasteland_doctor_01_uniform", "!life_is_arrested" }
        };
        headgear[] = {};
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {
            {"heroin_processed", 1, "!life_is_arrested"}
        };
        linkedItems[] = {
            {"ItemMap", ""},
            {"ItemCompass", ""},
            {"ItemWatch", ""}
        };
    };

    // MED
    class GUER {
        uniform[] = {
            {"armor_NCR_doctor_3_uniform", "call life_medicLevel >= 1"},
            {"NCR_doctor_uniform", "call life_medicLevel >= 1"}
        };
        headgear[] = {};
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {
            {"AM_stimpak", 3, "call life_medicLevel >= 1"}
        };
        linkedItems[] = {
            {"ItemMap", "call life_medicLevel >= 1"},
            {"ItemCompass", "call life_medicLevel >= 1"},
            {"ItemWatch", "call life_medicLevel >= 1"}
        };
    };

    //ADAC
    class EAST {
        uniform[] = {
            {"legionveteran_uniform", "call life_adacLevel >= 1"}
        };
        headgear[] = {
            {"legionwollfhead_noAcc", "call life_adacLevel >= 1"}
        };
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {
            {"AM_stimpak", 1, "call life_adacLevel >= 1"}
        };
        linkedItems[] = {
            {"ItemMap", "call life_adacLevel >= 1"},
            {"ItemCompass", "call life_adacLevel >= 1"},
            {"ItemWatch", "call life_adacLevel >= 1"}
        };
    };
};
