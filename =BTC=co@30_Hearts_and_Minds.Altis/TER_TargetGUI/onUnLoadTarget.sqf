#include "ctrlDef.sqf"

// Delete variables and objects:
TER_currentTarget removeMPEventHandler ["MPHit", TER_ehInd];

TER_deleteCamera cameraEffect ["terminate","back"];
camDestroy TER_deleteCamera;

deleteMarkerLocal TER_mrkTemp;

{deleteMarkerLocal _x} forEach TER_targetMarkers;

TER_currentTarget setVariable ["TER_LastHitPos", nil, true];