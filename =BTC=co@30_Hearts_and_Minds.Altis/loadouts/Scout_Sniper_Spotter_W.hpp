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
player forceAddUniform "rhs_uniform_FROG01_wd";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_epinephrine";};
player addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_EarPlugs";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
player addItemToUniform "ACE_tourniquet";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_Chemlight_HiOrange";};
player addVest "milgp_v_marciras_grenadier_belt_cb";
player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";
for "_i" from 1 to 12 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange";};
for "_i" from 1 to 11 do {player addItemToVest "rhs_mag_M433_HEDP";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "rhs_mag_m67";
player addBackpack "rhsusf_assault_eagleaiii_coy";
player addItemToBackpack "NVGoggles_OPFOR";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "ACE_HuntIR_monitor";
player addItemToBackpack "rhsusf_acc_nt4_black";
for "_i" from 1 to 5 do {player addItemToBackpack "rhs_mag_m67";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_HuntIR_M203";};
player addHeadgear "rhs_booniehat2_marpatwd";
player addGoggles "milgp_f_face_shield_tactical_shemagh_RGR";

comment "Add weapons";
player addWeapon "rhs_weap_m4a1_m203";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_ACOG_RMR";
player addWeapon "rhsusf_weap_m9";
player addWeapon "ACE_Vector";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_59";
player linkItem "BWA3_ItemNaviPad";

comment "Set identity";
player setFace "WhiteHead_22_sa";
player setSpeaker "ace_novoice";
