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
player addVest "milgp_v_marciras_marksman_belt_cb";
for "_i" from 1 to 9 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_Chemlight_HiWhite";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_Chemlight_HiOrange";};
for "_i" from 1 to 5 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 5 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 12 do {player addItemToVest "rhsusf_10Rnd_762x51_m62_Mag";};
player addBackpack "rhsusf_assault_eagleaiii_coy";
player addItemToBackpack "rhsusf_acc_premier_anpvs27";
player addItemToBackpack "NVGoggles_OPFOR";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_wirecutter";
player addItemToBackpack "ACE_MapTools";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_Tripod";
player addItemToBackpack "ACE_SpottingScope";
player addItemToBackpack "ACE_ATragMX";
player addHeadgear "rhs_booniehat2_marpatd";
player addGoggles "milgp_f_face_shield_tactical_shemagh_RGR";

comment "Add weapons";
player addWeapon "rhs_weap_m40a5";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_LEUPOLDMK4_2";
player addPrimaryWeaponItem "rhsusf_acc_harris_swivel";
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

