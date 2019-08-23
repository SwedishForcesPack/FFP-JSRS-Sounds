class CfgPatches {
    class ffp_jsrs_weapons_rk {
        name = "ffp_jsrs_weapons_rk";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"ffp_rifles", "jsrs_soundmod_complete_edition"};
        addonRootClass = "ffp_rifles";
        author = "Swedish Forces Pack";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;

    class fin_rk_rifle_base : Rifle_Base_F
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\akm_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\akm_reload.ogg", 2, 1, 35};
        changeFiremodeSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\noises\akm_firemode.ogg", 1.25, 1, 25};
        bullet1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg", 2.0099, 1, 10};
        bullet2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg", 2.0099, 1, 10};
        bullet3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg", 2.0099, 1, 10};
        bullet4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg", 2.0099, 1, 10};
        bullet5[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg", 2.0099, 1, 10};
        bullet6[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg", 2.0099, 1, 10};
        bullet7[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg", 2.0099, 1, 10};
        bullet8[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg", 2.0099, 1, 10};
        bullet9[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg", 2.0099, 1, 10};
        bullet10[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg", 2.0099, 1, 10};
        bullet11[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg", 2.0099, 1, 10};
        bullet12[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg", 2.0099, 1, 10};
        soundbullet[] = {"bullet1", 0.08, "bullet2", 0.084, "bullet3", 0.084, "bullet4", 0.084, "bullet5", 0.093, "bullet6", 0.093, "bullet7", 0.074, "bullet8", 0.074, "bullet9", 0.084, "bullet10", 0.085, "bullet11", 0.083, "bullet12", 0.083};

        class Single: Mode_SemiAuto
        {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };

        class FullAuto: Mode_FullAuto
        {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
    
    class ffp_rk95_base : fin_rk_rifle_base 
    {
        class Single: Single
        {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound", "SilencedSound"};
            class StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
