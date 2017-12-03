class CfgPatches {
    class ffp_jsrs_weapons_pkm {
        name = "ffp_jsrs_weapons_pkm";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ffp_kk_pkm", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "ffp_kk_pkm";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Long_Base_F;
    class ffp_kk_pkm: Rifle_Long_Base_F
    {
        class manual: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_pkm_shot_soundset","jsrs_pkm_shell_soundset","jsrs_7x62mm_reflector_3"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_pkm_shot_silenced_soundset","jsrs_pkm_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
            };
        };
    };
};
