comment "Exported from Arsenal by 1stBEAST";

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "UK3CB_BAF_U_CombatUniform_MTP_RM";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "rhs_m72a7_mag";
player addVest "UK3CB_BAF_V_Osprey_SL_D";
for "_i" from 1 to 6 do {player addItemToVest "BWA3_DM51A1";};
for "_i" from 1 to 10 do {player addItemToVest "UK3CB_BAF_556_30Rnd_T";};
for "_i" from 1 to 8 do {player addItemToVest "UK3CB_BAF_1Rnd_HE_Grenade_Shell";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_HuntIR_M203";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_SL_L_A";
player addItemToBackpack "ACE_HuntIR_monitor";
player addItemToBackpack "UK3CB_BAF_9_17Rnd";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_HuntIR_M203";};
for "_i" from 1 to 2 do {player addItemToBackpack "UGL_FlareGreen_F";};
for "_i" from 1 to 2 do {player addItemToBackpack "UGL_FlareRed_F";};
for "_i" from 1 to 2 do {player addItemToBackpack "UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_Chemlight_HiOrange";};
for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShellBlue";};
for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShellGreen";};
for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShellRed";};
for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShellOrange";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhsusf_m112_mag";};
player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_A";
player addGoggles "UK3CB_BAF_G_Tactical_Grey";

comment "Add weapons";
player addWeapon "UK3CB_BAF_L85A2_UGL";
player addPrimaryWeaponItem "UK3CB_BAF_SFFH";
player addPrimaryWeaponItem "BWA3_acc_LLM01_irlaser";
player addPrimaryWeaponItem "RKSL_optic_LDS";
player addWeapon "UK3CB_BAF_L131A1";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_5";
player linkItem "BWA3_ItemNaviPad";
player linkItem "UK3CB_BAF_HMNVS";

comment "Set identity";
player setSpeaker "ace_novoice";
