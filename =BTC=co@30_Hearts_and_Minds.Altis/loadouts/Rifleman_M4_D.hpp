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
player forceAddUniform "rhs_uniform_FROG01_d";
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
player addVest "milgp_v_marciras_assaulter_belt_cb";
for "_i" from 1 to 10 do {player addItemToVest "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange";};
for "_i" from 1 to 3 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_Chemlight_HiWhite";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_Chemlight_HiOrange";};
for "_i" from 1 to 5 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 5 do {player addItemToVest "SmokeShell";};
player addBackpack "rhsusf_assault_eagleaiii_coy";
player addHeadgear "milgp_h_opscore_04_goggles_CB_hexagon";
player addGoggles "rhs_googles_black";

comment "Add weapons";
player addWeapon "rhs_weap_m4a1_pmag";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15_bk";
player addPrimaryWeaponItem "rhsusf_acc_ACOG_RMR";
player addPrimaryWeaponItem "rhsusf_acc_grip3";
player addWeapon "rhsusf_weap_m9";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_59";
player linkItem "BWA3_ItemNaviPad";
player linkItem "rhsusf_Rhino";

comment "Set identity";
player setSpeaker "ace_novoice";

