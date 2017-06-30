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
for "_i" from 1 to 12 do {player addItemToVest "rhs_mag_M433_HEDP";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "rhs_mag_m67";
player addBackpack "rhsusf_assault_eagleaiii_coy";
player addHeadgear "milgp_h_opscore_04_goggles_CB_hexagon";
player addGoggles "rhs_googles_black";

comment "Add weapons";
player addWeapon "rhs_weap_m16a4_carryhandle_M203";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_ACOG_RMR";
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
