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
player addVest "UK3CB_BAF_V_Osprey_MG_B";
for "_i" from 1 to 4 do {player addItemToVest "BWA3_DM51A1";};
for "_i" from 1 to 4 do {player addItemToVest "rhsusf_100Rnd_762x51_m62_tracer";};
player addItemToVest "UK3CB_BAF_9_17Rnd";
player addBackpack "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
player addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 3 do {player addItemToBackpack "rhsusf_100Rnd_762x51_m62_tracer";};
for "_i" from 1 to 2 do {player addItemToBackpack "UK3CB_BAF_9_17Rnd";};
player addHeadgear "UK3CB_BAF_H_Mk7_Camo_ESS_A";
player addGoggles "UK3CB_BAF_G_Tactical_Grey";

comment "Add weapons";
player addWeapon "rhs_weap_m240B";
player addPrimaryWeaponItem "BWA3_acc_LLM01_irlaser";
player addPrimaryWeaponItem "rhsusf_acc_ACOG_MDO";
player addWeapon "UK3CB_BAF_L131A1";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_5";
player linkItem "BWA3_ItemNaviPad";
player linkItem "UK3CB_BAF_HMNVS";

comment "Set identity";
player setSpeaker "ace_novoice";
