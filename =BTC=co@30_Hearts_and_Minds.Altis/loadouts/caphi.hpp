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
player forceAddUniform "UK3CB_BAF_U_Smock_MTP";
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
player addVest "UK3CB_BAF_V_PLCE_Webbing_Plate_MTP";
for "_i" from 1 to 3 do {player addItemToVest "BWA3_DM51A1";};
for "_i" from 1 to 10 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";};
for "_i" from 1 to 6 do {player addItemToVest "1Rnd_HE_Grenade_shell";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C";
player addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 3 do {player addItemToBackpack "rhsusf_m112_mag";};
for "_i" from 1 to 4 do {player addItemToBackpack "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";};
player addHeadgear "H_Watchcap_khk";
player addGoggles "milgp_f_face_shield_RGR";

comment "Add weapons";
player addWeapon "rhs_weap_m4a1_blockII_M203_d";
player addPrimaryWeaponItem "UK3CB_BAF_LLM_Flashlight_Tan";
player addPrimaryWeaponItem "RKSL_optic_LDS_C";
player addWeapon "rhs_weap_m72a7";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_5";
player linkItem "BWA3_ItemNaviPad";

comment "Set identity";
player setSpeaker "ace_novoice";
