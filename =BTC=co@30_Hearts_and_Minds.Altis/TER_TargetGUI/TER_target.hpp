class TER_target {
	idd = 170716;
	movingEnable = 0;
	onLoad = "0 = execVM ""TER_targetGUI\onLoadTarget.sqf""";
	onUnload = "0 = execVM ""TER_TargetGUI\onUnLoadTarget.sqf""";
	class Objects
	{

		class OBJ_target
		{
			idc = 9001;
			type = 82;
			model = "\A3\Structures_F\Training\Target_PopUp_F.p3d";
			scale = 0.5;
			direction[] = {0.2,0,1}; // {0.2,0,1}
			up[] = {0,1,0};
			x = 0.669062 * safezoneW + safezoneX;
			y = 0.01 * safezoneH + safezoneY;
			z = 0.2;
			xBack = 0.85 * safezoneW + safezoneX;
			yBack = 0.45 * safezoneH + safezoneY;
			zBack = 1;
			inBack = 1;
			enableZoom = 0;
			zoomDuration = 0.001;
		};
		class OBJ_pointer
		{
			idc = 9002;
			type = 82;
			model = "\A3\Structures_F_Heli\VR\Helpers\Sign_sphere10cm_F.p3d";
			scale = 0.5;
			direction[] = {0,0,1}; // {0.2,0,1}
			up[] = {0,1,0};
			x = 0.669062 * safezoneW + safezoneX;
			y = 0.01 * safezoneH + safezoneY;
			z = 0.2;
			xBack = -1 * safezoneW + safezoneX;
			yBack = -1 * safezoneH + safezoneY;
			zBack = 1;
			inBack = 1;
			enableZoom = 0;
			zoomDuration = 0.001;
			//onObjectMoved = "systemChat str (ctrlPosition (_this select 0))";
		};
	};
	class controlsBackground {
		class IGUIBack_2200: IGUIBack
		{
			idc = 2200;
			x = 0 * safezoneW + safezoneX;
			y = 0 * safezoneH + safezoneY;
			w = 1 * safezoneW;
			h = 1 * safezoneH;
		};
		class frame_obj: RscFrame
		{
			idc = 1201;
			//text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.669062 * safezoneW + safezoneX;
			y = 0.01 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.882 * safezoneH;
		};
	};
	class controls {
		class txt_data: RscStructuredText
		{
			idc = 1100;
			x = 0.0078125 * safezoneW + safezoneX;
			y = 0.01 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.434 * safezoneH;
		};
		class pic_stream: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.336979 * safezoneW + safezoneX;
			y = 0.0109259 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.321562 * safezoneH;
		};
/*		class btn_copydata: RscButtonMenu
		{
			idc = 1600;
			text = $STR_TER_copyData; //--- ToDo: Localize;
			x = 0.0078125 * safezoneW + safezoneX;
			y = 0.906 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.028 * safezoneH;
			action = "0 = execVM ""test.sqf""";
		};
*/		class btn_cancel: RscButtonMenuCancel
		{
			x = 0.913437 * safezoneW + safezoneX;
			y = 0.906 * safezoneH + safezoneY;
			w = 0.07875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class lb_targets: RscListbox
		{
			idc = 1500;
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.434 * safezoneH;
			/*
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.098 * safezoneH;
			*/
		};
		class map_position: RscMapControl
		{
			idc = 1901;
			x = 0.0078115 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.434 * safezoneH;
		};
/*		class lb_players: RscListbox
		{
			idc = 1501;
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.794 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.098 * safezoneH;
		};
*/		class btn_activate: RscButtonMenu
		{
			idc = 1601;
			text = $STR_TER_activate; //--- ToDo: Localize;
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.906 * safezoneH + safezoneY;
			w = 0.1575 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class btn_deactivate: RscButtonMenu
		{
			idc = 1602;
			text = $STR_TER_deactivate; //--- ToDo: Localize;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.906 * safezoneH + safezoneY;
			w = 0.1575 * safezoneW;
			h = 0.028 * safezoneH;
		};
/*		class pic_playerStream: RscPicture
		{
			idc = 1203;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.335938 * safezoneW + safezoneX;
			y = 0.458 * safezoneH + safezoneY;
			w = 0.321562 * safezoneW;
			h = 0.321562 * safezoneH;
		};
*/	};
};



/* #Gyquni
$[
	1.063,
	["TER_target",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"",[1,"",["0.00125001 * safezoneW + safezoneX","0.01 * safezoneH + safezoneY","0.9975 * safezoneW","1.008 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1100,"txt_data",[1,"",["0.0078125 * safezoneW + safezoneX","0.01 * safezoneH + safezoneY","0.321562 * safezoneW","0.434 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1200,"pic_stream",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.336979 * safezoneW + safezoneX","0.0109259 * safezoneH + safezoneY","0.321562 * safezoneW","0.321562 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1201,"obj_hits",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.669062 * safezoneW + safezoneX","0.01 * safezoneH + safezoneY","0.321562 * safezoneW","0.882 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"btn_copydata",[1,"Copy data to clipboard",["0.0078125 * safezoneW + safezoneX","0.906 * safezoneH + safezoneY","0.321562 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2700,"btn_cancel",[1,"",["0.913437 * safezoneW + safezoneX","0.906 * safezoneH + safezoneY","0.07875 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"lb_targets",[1,"",["0.335938 * safezoneW + safezoneX","0.346 * safezoneH + safezoneY","0.321562 * safezoneW","0.098 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1101,"map_position",[1,"",["0.0078115 * safezoneW + safezoneX","0.458 * safezoneH + safezoneY","0.321562 * safezoneW","0.434 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1501,"lb_players",[1,"",["0.335938 * safezoneW + safezoneX","0.794 * safezoneH + safezoneY","0.321562 * safezoneW","0.098 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"",[1,"Activate target",["0.335938 * safezoneW + safezoneX","0.906 * safezoneH + safezoneY","0.1575 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1602,"",[1,"Deactivate target",["0.5 * safezoneW + safezoneX","0.906 * safezoneH + safezoneY","0.1575 * safezoneW","0.028 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1203,"pic_playerStream",[1,"#(argb,8,8,3)color(1,1,1,1)",["0.335938 * safezoneW + safezoneX","0.458 * safezoneH + safezoneY","0.321562 * safezoneW","0.321562 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

