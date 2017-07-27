_allTargets = nearestObjects  [[worldSize /2, worldSize /2, 0], ["TargetBase"], worldSize];
{
	if (_x getVariable ["TER_isTarget", false]) then {
		_x addEventHandler ["HitPart", {
			_params = _this select 0;
			(_params select 0) setVariable ["TER_LastHitPos", ASLToAGL (_params select 3), true];
		}];
	};
} forEach _allTargets;