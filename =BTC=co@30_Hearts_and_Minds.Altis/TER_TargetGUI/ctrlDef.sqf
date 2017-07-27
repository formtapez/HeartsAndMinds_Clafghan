// #include "TER_targetGUI\ctrlDef.sqf"
// #include "ctrlDef.sqf"
disableSerialization;

_mainDisplay = findDisplay 170716;

_objModel = _mainDisplay displayCtrl 9001;
_objPointer = _mainDisplay displayCtrl 9002;
_txtData = _mainDisplay displayCtrl 1100;
_picStream = _mainDisplay displayCtrl 1200;
//_btnCopyData = _mainDisplay displayCtrl 1600;
//_btnCancel = _mainDisplay displayCtrl 1;
_lbTargets = _mainDisplay displayCtrl 1500;
_mapMap = _mainDisplay displayCtrl 1901;
_lbPlayers = _mainDisplay displayCtrl 1501;
_btnActivate = _mainDisplay displayCtrl 1601;
_btnDeactivate = _mainDisplay displayCtrl 1602;
_picPlayerStream = _mainDisplay displayCtrl 1203;