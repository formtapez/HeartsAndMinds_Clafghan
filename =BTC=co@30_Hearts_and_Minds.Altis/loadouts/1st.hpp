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
player forceAddUniform "UK3CB_BAF_U_Smock_MTP_DPMW";
for "_i" from 1 to 7 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 7 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_epinephrine";};
player addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 8 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 7 do {player addItemToUniform "ACE_quikclot";};
player addItemToUniform "ACE_Flashlight_XL50";
player addVest "UK3CB_BAF_V_PLCE_Webbing_Plate_MTP";
for "_i" from 1 to 3 do {player addItemToVest "rhs_200rnd_556x45_T_SAW";};
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red";};
player addBackpack "UK3CB_BAF_B_Bergen_MTP_SL_H_A";
player addItemToBackpack "ACE_NVG_Wide";
player addItemToBackpack "ACE_CableTie";
player addItemToBackpack "ACE_personalAidKit";
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 4 do {player addItemToBackpack "BWA3_DM51A1";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhsusf_m112_mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "rhs_200rnd_556x45_T_SAW";};
player addHeadgear "milgp_h_cap_03_goggles_RGR";
player addGoggles "milgp_f_face_shield_tactical_khk";

comment "Add weapons";
player addWeapon "rhs_weap_m249_pip_S_vfg";
player addPrimaryWeaponItem "rhsusf_acc_SF3P556";
player addPrimaryWeaponItem "BWA3_acc_LLM01_irlaser";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addPrimaryWeaponItem "rhsusf_acc_grip1";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_5";
player linkItem "BWA3_ItemNaviPad";

comment "Set identity";
player setFace "asczHead_mctavish_A3";
player setSpeaker "ace_novoice";
