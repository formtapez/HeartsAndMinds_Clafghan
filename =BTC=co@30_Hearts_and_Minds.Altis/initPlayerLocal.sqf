#include "TER_targetGUI\addEH.sqf"

/*--------- Functions ---------*/

TA_fnc_loadoutUnit = {
	_loadoutUnits = _this select 0;
	{
		_unit = _x select 0;
		_loadout = _x select 1;

		if (!isNil "_unit") then {
			if(vehicle player == _unit) then {
				_s = execVM _loadout;
				waitUntil {scriptDone _s};
			};
		};

	} forEach _loadoutUnits;

	_return = true;
	_return;

};


/*--------- Ausruester ---------*/

sign_1 addAction ["Squadleader (<t color='#ffff7f'>Desert</t>)</t>)", "execVM 'loadouts\Squadleader_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Squadleader (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Squadleader_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Corpsman (Medic) (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Corpsman_Medic_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Corpsman (Medic) (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Corpsman_Medic_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Rifleman M4 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Rifleman_M4_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Rifleman M4 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Rifleman_M4_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Rifleman M16 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Rifleman_M16_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Rifleman M16 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Rifleman_M16_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Grenadier M4 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Grenadier_M4_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Grenadier M4 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Grenadier_M4_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Grenadier M16 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Grenadier_M16_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Grenadier M16 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Grenadier_M16_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["SAW M249 short (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\SAW_M249_short_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["SAW M249 short (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\SAW_M249_short_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["SAW M249 long (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\SAW_M249_long_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["SAW M249 long (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\SAW_M249_long_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Machinegunner (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Machinegunner_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Machinegunner (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Machinegunner_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Automatic Rifleman M27 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Automatic_Rifleman_M27_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Automatic Rifleman M27 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Automatic_Rifleman_M27_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["DMR Mk11 Mod 1 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\DMR_Mk11_Mod_1_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["DMR Mk11 Mod 1 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\DMR_Mk11_Mod_1_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Scout Sniper Spotter (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Scout_Sniper_Spotter_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Scout Sniper Spotter (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Scout_Sniper_Spotter_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Scout Sniper M40 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Scout_Sniper_M40_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Scout Sniper M40 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Scout_Sniper_M40_W.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Scout Sniper Heavy (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Scout_Sniper_Heavy_D.hpp';", nil, 100, false, true, "", ""];
sign_1 addAction ["Scout Sniper Heavy (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Scout_Sniper_Heavy_W.hpp';", nil, 100, false, true, "", ""];

sign_2 addAction ["UK Teamleader", "execVM 'loadouts\UK_Teamleader.hpp';", nil, 100, false, true, "", ""];
sign_2 addAction ["UK Medic", "execVM 'loadouts\UK_Medic.hpp';", nil, 100, false, true, "", ""];
sign_2 addAction ["UK Rifleman", "execVM 'loadouts\UK_Rifleman.hpp';", nil, 100, false, true, "", ""];
sign_2 addAction ["UK Grenadier", "execVM 'loadouts\UK_Grenadier.hpp';", nil, 100, false, true, "", ""];
sign_2 addAction ["UK SAW Gunner", "execVM 'loadouts\UK_SAW_Gunner.hpp';", nil, 100, false, true, "", ""];
sign_2 addAction ["UK LMG Gunner", "execVM 'loadouts\UK_LMG_Gunner.hpp';", nil, 100, false, true, "", ""];
sign_2 addAction ["UK Radioman / DMR", "execVM 'loadouts\UK_Radioman_DMR.hpp';", nil, 100, false, true, "", ""];

sign_3 addAction ["Squadleader (<t color='#ffff7f'>Desert</t>)</t>)", "execVM 'loadouts\Squadleader_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Squadleader (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Squadleader_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Corpsman (Medic) (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Corpsman_Medic_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Corpsman (Medic) (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Corpsman_Medic_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Rifleman M4 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Rifleman_M4_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Rifleman M4 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Rifleman_M4_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Rifleman M16 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Rifleman_M16_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Rifleman M16 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Rifleman_M16_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Grenadier M4 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Grenadier_M4_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Grenadier M4 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Grenadier_M4_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Grenadier M16 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Grenadier_M16_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Grenadier M16 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Grenadier_M16_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["SAW M249 short (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\SAW_M249_short_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["SAW M249 short (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\SAW_M249_short_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["SAW M249 long (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\SAW_M249_long_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["SAW M249 long (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\SAW_M249_long_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Machinegunner (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Machinegunner_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Machinegunner (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Machinegunner_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Automatic Rifleman M27 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Automatic_Rifleman_M27_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Automatic Rifleman M27 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Automatic_Rifleman_M27_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["DMR Mk11 Mod 1 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\DMR_Mk11_Mod_1_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["DMR Mk11 Mod 1 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\DMR_Mk11_Mod_1_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Scout Sniper Spotter (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Scout_Sniper_Spotter_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Scout Sniper Spotter (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Scout_Sniper_Spotter_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Scout Sniper M40 (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Scout_Sniper_M40_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Scout Sniper M40 (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Scout_Sniper_M40_W.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Scout Sniper Heavy (<t color='#ffff7f'>Desert</t>)", "execVM 'loadouts\Scout_Sniper_Heavy_D.hpp';", nil, 100, false, true, "", ""];
sign_3 addAction ["Scout Sniper Heavy (<t color='#00ff00'>Wood</t>)</t>)", "execVM 'loadouts\Scout_Sniper_Heavy_W.hpp';", nil, 100, false, true, "", ""];

sign_4 addAction ["UK Teamleader", "execVM 'loadouts\UK_Teamleader.hpp';", nil, 100, false, true, "", ""];
sign_4 addAction ["UK Medic", "execVM 'loadouts\UK_Medic.hpp';", nil, 100, false, true, "", ""];
sign_4 addAction ["UK Rifleman", "execVM 'loadouts\UK_Rifleman.hpp';", nil, 100, false, true, "", ""];
sign_4 addAction ["UK Grenadier", "execVM 'loadouts\UK_Grenadier.hpp';", nil, 100, false, true, "", ""];
sign_4 addAction ["UK SAW Gunner", "execVM 'loadouts\UK_SAW_Gunner.hpp';", nil, 100, false, true, "", ""];
sign_4 addAction ["UK LMG Gunner", "execVM 'loadouts\UK_LMG_Gunner.hpp';", nil, 100, false, true, "", ""];
sign_4 addAction ["UK Radioman / DMR", "execVM 'loadouts\UK_Radioman_DMR.hpp';", nil, 100, false, true, "", ""];

flag_base addAction ["Schiessuebung", {createDialog "TER_target";}];
//flag_base addAction ["Air Base", {player setPos (getMarkerPos "pos_airbase");}];
flag_airbase addAction ["Home Base", {player setPos (getMarkerPos "pos_base");}];
rec_1 addAction ["Master-Key herunterladen", {["task_flug", "SUCCEEDED", true] spawn BIS_fnc_taskSetState;}];
