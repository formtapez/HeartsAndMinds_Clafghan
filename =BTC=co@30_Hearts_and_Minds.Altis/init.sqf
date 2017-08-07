enableSaving [false,false];
//Server
call compile preprocessFile "core\fnc\compile.sqf";

if (hasInterface) then {btc_intro_done = [] spawn btc_fnc_intro;};

call compile preprocessFile "core\def\mission.sqf";
call compile preprocessFile "define_mod.sqf";

if (isServer) then {
	call compile preprocessFile "core\init_server.sqf";
};

call compile preprocessFile "core\init_common.sqf";

if (!isDedicated && hasInterface) then {
	call compile preprocessFile "core\init_player.sqf";
};

if (!isDedicated && !hasInterface) then {
	call compile preprocessFile "core\init_headless.sqf";
};

/*--------- Standard ---------*/

TF_give_microdagr_to_soldier = false; // Verhindert das automatische zuteilen von Microdagren
tf_no_auto_long_range_radio = true; // Verhindert das automatische zuteilen von Rucksack-Funkgeraeten
