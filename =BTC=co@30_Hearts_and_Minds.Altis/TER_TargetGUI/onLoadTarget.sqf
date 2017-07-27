#include "ctrlDef.sqf"
// define vars to avoid errors
TER_deleteCamera = objNull;
TER_tempMarkers = [];
TER_currentTarget = objNull;
TER_ehInd = -1;
TER_mrkTemp = "";

_objModel ctrlEnable false;

_allTargets = [];
{
	if (_x getVariable ["TER_isTarget", false]) then {
		_allTargets pushBack _x;
	};
} forEach (nearestObjects  [player, ["TargetBase"], 2500]);
_mapMarkers = [];
{
	// Listbox targets
	_cfgPath = configfile >> "CfgVehicles" >> typeOf _x;
	_displayName = _cfgPath call BIS_fnc_displayName;
	_ind = _lbTargets lbAdd (_displayName +" (" +str (_x distance player) +"m)");
	_lbTargets lbSetPicture [_ind, getText (_cfgPath >> "editorPreview")];
	_lbTargets lbSetData [_ind, (_x call BIS_fnc_netId)];

	// Map locations
	_targetMrk = createMarkerLocal [str (random 1000), getPos _x];
	_targetMrk setMarkerShapeLocal "ICON";
	_targetMrk setMarkerTypeLocal "mil_dot";
	_targetMrk setMarkerColorLocal "ColorGreen";
	_mapMarkers pushBack _targetMrk;
} forEach _allTargets;
TER_targetMarkers = _mapMarkers;

{
	_ind = _lbPlayers lbAdd name _x;
	_lbPlayers lbSetData [_ind, _x call BIS_fnc_netId];
} forEach allPlayers;

_lbTargets ctrlAddEventHandler ["LBSelChanged", {
	#include "ctrlDef.sqf"
	params ["_ctrl", "_ind"];
	TER_deleteCamera cameraEffect ["terminate","back"];
	camDestroy TER_deleteCamera;

	_currentTarget = (_ctrl lbData _ind) call BIS_fnc_objectFromNetId;
	_objModel ctrlSetModel (getText (configfile >> "CfgVehicles" >> typeOf _currentTarget >> "model"));
	_cam = "camera" camCreate (_currentTarget modelToWorld [0,-1.7,0.5]);
	_cam camSetTarget _currentTarget;
	_bbr = boundingBoxReal _currentTarget;
	_p1 = _bbr select 0;
	_p2 = _bbr select 1;
	_maxWidth = abs ((_p2 select 0) - (_p1 select 0));
	_maxLength = abs ((_p2 select 1) - (_p1 select 1));
	_maxHeight = abs ((_p2 select 2) - (_p1 select 2)); Arr = [_maxWidth,_maxLength,_maxHeight];
	_cam attachTo [_currentTarget, [0,-_maxHeight,_maxHeight/2]];
	_idRTT = str (random 10000);
	_cam cameraEffect ["Internal", "Back", _idRTT];
	_cam camCommit 0;
	TER_deleteCamera = _cam;
	_lastTarget = TER_currentTarget;
	TER_currentTarget = _currentTarget;
	_picStream ctrlSetText ("#(argb,256,256,1)r2t("+ _idRTT +",1.0);");

	if (TER_ehInd > -1) then {
		_lastTarget removeMPEventHandler ["MPHit", TER_ehInd];
	};
	_fncEHhit = {
		if (isNull findDisplay 170716) exitWith {};
		_this spawn {
			#include "ctrlDef.sqf"
			_target = _this select 0;
			_shooter = _this select 1;
			waitUntil {typeName [] == typeName (_target getVariable ["TER_LastHitPos", objNull])};
			_position = _target getVariable "TER_LastHitPos";
			_target setVariable ["TER_LastHitPos", nil, true];
			_cfgPath = configfile >> "CfgVehicles" >> typeOf _target;
			_displayName = _cfgPath call BIS_fnc_displayName;
			_t1 = localize "STR_TER_txtTarget" +" " +_displayName;
			_t2 = localize "STR_TER_txtShooter" +" "  +name _shooter;
			_t3 = localize "STR_TER_txtWeapon" +" " +getText (configfile >> "CfgWeapons" >> currentWeapon _shooter >> "displayName");
			_t4 = localize "STR_TER_txtDistance" +" " +str (_shooter distance _target) +"m";
			_magDetail = currentMagazineDetail  _shooter;
			_t6Pre =[_magDetail, 0,(_magDetail find "[") -1]  call BIS_fnc_trimString;
			_t6 = localize "STR_TER_txtMagazine" +" " +_t6Pre;
			_t5 = "";
			if (toLower typeOf _target find "acc" > -1) then {
				_t5 = localize "STR_TER_txtAccuracy" +" " +str ((1- (_position  distance (_target modelToWorld [-0.00390625,0.161621,-0.0233293])))*100) +"%";
			};
			_txt = [];
			{
				{_txt pushBack _x} forEach [_x, lineBreak];
			} forEach ["", _t1, _t2, _t3, _t4,_t6, _t5];
			_finalText = composeText _txt;
			_txtData ctrlSetStructuredText _finalText;

			_hitOffset = _target worldToModel _position;
			_offGUI = ctrlPosition _objModel vectorAdd [(_hitOffset select 0) /2, 0, (-(_hitOffset select 2) /2)];
			_objPointer ctrlSetPosition _offGUI;

			_pointer = "Sign_Sphere10cm_F" createVehicleLocal _position;
			_pointer attachTo [_target, _hitOffset];
			_pointer setObjectTexture [0,"#(argb,8,8,3)color(1,0,0,1.0,ca)"];
			_pointer spawn {
				sleep 10;
				deleteVehicle _this;
			};
		};
	};
	_ehHitPart = _currentTarget addMPEventHandler ["MPHit", _fncEHhit];
	TER_ehInd = _ehHitPart;

	// Update map ctrl
	deleteMarkerLocal TER_mrkTemp;

	_mapMap ctrlMapAnimAdd [0.1,ctrlMapScale _mapMap, _currentTarget];
	ctrlMapAnimCommit _mapMap;
	_tempMrk = createMarkerLocal [str (random 1000), _currentTarget];
	_tempMrk setMarkerShapeLocal "ICON";
	_tempMrk setMarkerTypeLocal "mil_dot";
	_tempMrk setMarkerColorLocal "ColorRed";

	TER_mrkTemp = _tempMrk;
}];

_btnActivate buttonSetAction "
	_obj = ((findDisplay 170716) displayCtrl 1500) lbData lbCurSel ((findDisplay 170716) displayCtrl 1500);
	_obj = _obj call BIS_fnc_objectFromNetId;
	_obj animate ['terc', 0];
";

_btnDeactivate buttonSetAction "
	_obj = ((findDisplay 170716) displayCtrl 1500) lbData lbCurSel ((findDisplay 170716) displayCtrl 1500);
	_obj = _obj call BIS_fnc_objectFromNetId;
	_obj animate ['terc', 1];
";
