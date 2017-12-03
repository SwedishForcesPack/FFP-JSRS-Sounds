class CfgPatches {
    class ffp_jsrs_weapons_rk95 {
        name = "ffp_jsrs_weapons_rk95";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ffp_rk95", "JSRS_SOUNDMOD_Weapons"};
        addonRootClass = "ffp_rk95";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;
    
    class ffp_rk95_base : Rifle_Base_F 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_ak_m_shot_soundset","jsrs_ak_m_shell_soundset","jsrs_7x62mm_reflector_2"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_ak_m_shot_silenced_soundset","jsrs_ak_m_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_ak_m_shot_soundset","jsrs_ak_m_shell_soundset","jsrs_7x62mm_reflector_2"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_ak_m_shot_silenced_soundset","jsrs_ak_m_shell_soundset","jsrs_7x62mm_SD_reflector_1"};
            };
        };
    };
};
