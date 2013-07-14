class RscPicture;
class RscButton {
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = 0.03921;
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorDisabled[] = {0.4, 0.4, 0.4, 1};
	colorBackground[] = {0.1, 0.1, 0.1, 0.85};
	colorBackgroundActive[] = {0.1, 0.1, 0.1, 1};
	colorBackgroundDisabled[] = {0.1, 0.1, 0.1, 0.5};
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	colorFocused[] = {1, 0.537, 0, 1};
	colorShadow[] = {0.023529, 0, 0.0313725, 1};
	colorBorder[] = {0.023529, 0, 0.0313725, 1};
	borderSize = 0.0;
	soundEnter[] = {"\ca\ui\data\sound\onover", 0.09, 1};
	soundPush[] = {"\ca\ui\data\sound\new1", 0.0, 0};
	soundClick[] = {"\ca\ui\data\sound\onclick", 0.07, 1};
	soundEscape[] = {"\ca\ui\data\sound\onescape", 0.09, 1};
};
class CA_IGUI_Title;
class CA_Title;

class RscText {
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 2;
	font = "Zeppelin32";
	SizeEx = 0.03921;
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorBackground[] = {0, 0, 0, 0};
};

class RscLine : RscText {
	idc = -1;
	style = 176;
	x = 0.17;
	y = 0.48;
	w = 0.66;
	h = 0;
	text = "";
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {0.95, 0.95, 0.95, 1};
};
class RscEdit {
	style = 0x00 + 0x40;
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
	colorBackground[] = {0, 0, 0, 1};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorSelection[] = {1, 1, 1, 1.0};
};

class RscIGUIText : RscText {
	sizeEx = 0.034;
	colorText[] = {0.95, 0.95, 0.95, 1};
	style = 0;
};

class RscIGUIValue : RscIGUIText {
	sizeEx = 0.034;
	colorText[] = {0.95, 0.95, 0.95, 1};
	font = "Zeppelin32Mono";
	style = 0;
	fixedWidth = 1;
};
class RscControlsGroup {
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = false;
	style = 16;
	
	class VScrollbar {
		width = 0.021;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
		shadow = false;
	};
	
	class HScrollbar {
		height = 0.028;
		shadow = false;
	};
	
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\z\addons\dayz_code\gui\ui\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\z\addons\dayz_code\gui\ui\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\z\addons\dayz_code\gui\ui\ui_arrow_top_ca.paa";
		border = "\z\addons\dayz_code\gui\ui\ui_border_scroll_ca.paa";
	};
	
	class Controls {};
};
class RscLineBreak;

class RscShortcutButton {
	idc = -1;
	style = 0;
	default = 0;
	shadow = 2;
	w = 0.183825;
	h = 0.104575;
	color[] = {0.8784, 0.8471, 0.651, 1.0};
	color2[] = {0.95, 0.95, 0.95, 1};
	colorBackground[] = {1, 1, 1, 1};
	colorbackground2[] = {1, 1, 1, 0.4};
	colorDisabled[] = {1, 1, 1, 0.25};
	periodFocus = 1.2;
	periodOver = 0.8;
	
	class HitZone {
		left = 0.004;
		top = 0.029;
		right = 0.004;
		bottom = 0.029;
	};
	
	class ShortcutPos {
		left = 0.0145;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	
	class TextPos {
		left = 0.05;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	animTextureNormal = "\z\addons\dayz_code\gui\ui\ui_button_normal_ca.paa";
	animTextureDisabled = "\z\addons\dayz_code\gui\ui\ui_button_disabled_ca.paa";
	animTextureOver = "\z\addons\dayz_code\gui\ui\ui_button_over_ca.paa";
	animTextureFocused = "\z\addons\dayz_code\gui\ui\ui_button_focus_ca.paa";
	animTexturePressed = "\z\addons\dayz_code\gui\ui\ui_button_down_ca.paa";
	animTextureDefault = "\z\addons\dayz_code\gui\ui\ui_button_default_ca.paa";
	period = 0.4;
	font = "Zeppelin32";
	size = 0.03921;
	sizeEx = 0.03921;
	text = "";
	soundEnter[] = {"\ca\ui\data\sound\onover", 0.09, 1};
	soundPush[] = {"\ca\ui\data\sound\new1", 0.0, 0};
	soundClick[] = {"\ca\ui\data\sound\onclick", 0.07, 1};
	soundEscape[] = {"\ca\ui\data\sound\onescape", 0.09, 1};
	action = "";
	
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	
	class AttributesImage {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
};
class RscIGUIShortcutButton : RscShortcutButton {
	w = 0.183825;
	h = 0.0522876;
	style = 2;
	color[] = {1, 1, 1, 1};
	color2[] = {1, 1, 1, 0.85};
	colorBackground[] = {1, 1, 1, 1};
	colorbackground2[] = {1, 1, 1, 0.85};
	colorDisabled[] = {1, 1, 1, 0.4};
	
	class HitZone {
		left = 0.002;
		top = 0.003;
		right = 0.002;
		bottom = 0.016;
	};
	
	class ShortcutPos {
		left = -0.006;
		top = -0.007;
		w = 0;
		h = 0.0522876;
	};
	
	class TextPos {
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.016;
	};
	animTextureNormal = "\z\addons\dayz_code\gui\ui\igui_button_normal_ca.paa";
	animTextureDisabled = "\z\addons\dayz_code\gui\ui\igui_button_disabled_ca.paa";
	animTextureOver = "\z\addons\dayz_code\gui\ui\igui_button_over_ca.paa";
	animTextureFocused = "\z\addons\dayz_code\gui\ui\igui_button_focus_ca.paa";
	animTexturePressed = "\z\addons\dayz_code\gui\ui\igui_button_down_ca.paa";
	animTextureDefault = "\z\addons\dayz_code\gui\ui\igui_button_normal_ca.paa";
	
	class Attributes {
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "true";
	};
};
class RscGearShortcutButton;
class RscActiveText;

class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgressNotFreeze;
class RscButtonTextOnly;

class RscProgress {
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	shadow = 2;
	texture = "\z\addons\dayz_code\gui\ui\loadscreen_progressbar_ca.paa";
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorFrame[] = {0, 0, 0, 0};
	colorBar[] = {1, 1, 1, 1};
};

class RscProgressBackground : RscPicture {
	x = 0.0;
	y = 0.892164;
	w = 1;
	h = 0.078432;
	texture = "\ca\ui\data\ui_gradient_title_gs.paa";
	colorText[] = {0, 0, 0, 0.4};
};

class RscLoadingText : RscText {
	style = 2;
	x = 0.29412;
	y = 0.666672;
	w = 0.411768;
	h = 0.039216;
	sizeEx = 0.03921;
	colorText[] = {0.95, 0.95, 0.95, 1};
};

class RscIGProgress : RscProgress {
	style = 1;
	w = 0.009;
	h = 0.178;
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorBar[] = {1, 1, 1, 1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
};

class RscListBox {
	style = 16;
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
	color[] = {1, 1, 1, 1};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0, 0, 0, 1};
	colorSelectBackground2[] = {0.8784, 0.8471, 0.651, 1.0};
	period = 1.2;
	colorBackground[] = {0, 0, 0, 1};
	maxHistoryDelay = 1.0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\z\addons\dayz_code\gui\ui\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\z\addons\dayz_code\gui\ui\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\z\addons\dayz_code\gui\ui\ui_arrow_top_ca.paa";
		border = "\z\addons\dayz_code\gui\ui\ui_border_scroll_ca.paa";
	};
};

class RscListNBox {
	style = 16;
	shadow = 2;
	color[] = {1, 1, 1, 1};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0.1, 0.1, 0.1, 1.0};
	colorSelectBackground2[] = {0.1, 0.1, 0.1, 0.8};
	
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\z\addons\dayz_code\gui\ui\igui_scrollbar_thumb_ca.paa";
		arrowFull = "\z\addons\dayz_code\gui\ui\igui_arrow_top_active_ca.paa";
		arrowEmpty = "\z\addons\dayz_code\gui\ui\igui_arrow_top_ca.paa";
		border = "\z\addons\dayz_code\gui\ui\igui_border_scroll_ca.paa";
	};
};

class RscIGUIListBox : RscListBox {
	shadow = 2;
	color[] = {1, 1, 1, 1};
	colorText[] = {0.95, 0.95, 0.95, 1};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0.1, 0.1, 0.1, 1.0};
	colorSelectBackground2[] = {0.1, 0.1, 0.1, 0.8};
	period = 0;
	colorBackground[] = {0, 0, 0, 1};
	sizeEx = 0.034;
	
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\z\addons\dayz_code\gui\ui\igui_scrollbar_thumb_ca.paa";
		arrowFull = "\z\addons\dayz_code\gui\ui\igui_arrow_top_active_ca.paa";
		arrowEmpty = "\z\addons\dayz_code\gui\ui\igui_arrow_top_ca.paa";
		border = "\z\addons\dayz_code\gui\ui\igui_border_scroll_ca.paa";
	};
};

class RscIGUIListNBox : RscListNBox {
	style = 0 + 0x10;
	shadow = 2;
	color[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 0.75};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0.1, 0.1, 0.1, 1.0};
	colorSelectBackground2[] = {0.1, 0.1, 0.1, 1.0};
	period = 0;
	colorBackground[] = {0, 0, 0, 1};
	columns[] = {0.1, 0.7, 0.1, 0.1};
	
	class ScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\z\addons\dayz_code\gui\ui\igui_scrollbar_thumb_ca.paa";
		arrowFull = "\z\addons\dayz_code\gui\ui\igui_arrow_top_active_ca.paa";
		arrowEmpty = "\z\addons\dayz_code\gui\ui\igui_arrow_top_ca.paa";
		border = "\z\addons\dayz_code\gui\ui\igui_border_scroll_ca.paa";
	};
};

class RscDisplayLoading 
{
	class Variants 
	{
		class LoadingOne 
		{
			class controls 
			{
				class LoadingPic : RscPictureKeepAspect
				{
					text = "z\addons\dayz_code\gui\sahrani.paa";
				};
				class Name : RscText {
					style = 0;
					colorText[] = {0.95, 0.95, 0.95, 1};
				};
				class CA_Progress : RscProgress {
					idc = 104;
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.5/2/4)*3*SafezoneH";
					y = "SafezoneY+SafezoneH*0.95";
					w = "0.5* (((SafezoneW*3)/4)/SafezoneW)/(1/SafezoneH)";
					text = "\ca\ui\data\loadscreen_progressbar_ca.paa";
					colorText[] = {0.95, 0.95, 0.95, 1};
				};
			};
		};
	};
};

class RscDisplayStart 
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text = "z\addons\dayz_code\gui\sahrani.paa";
		};
	};
};

class RscDisplayDebriefing: RscStandardDisplay
{
	class controls
	{
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		delete CA_DebriefingInfo;
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete ButtonStatistics;
		delete ButtonRetry;
		//delete ButtonContinue;
	};
	class ControlsBackground
	{
		delete Mainback;
	};
};
class RscDisplayMissionFail: RscStandardDisplay
{
	class controls
	{
		delete Debriefing_MissionTitle;
		delete CA_MissionTitle;
		delete CA_TextVotingTimeLeft;
		delete CA_MissionResult;
		delete CA_DebriefingInfo;
		delete CA_DebriefingTextGroup;
		delete CA_DebriefingObjectivesGroup;
		delete CA_DebriefingStatsGroup;
		delete BRetry;
		//delete BAbort;
	};
	class ControlsBackground
	{
		delete Mainback;
	};
};


class CA_TextLanguage;
class RscXListBox;

class RscDisplayGameOptions
{
	//onLoad = "((_this select 0) displayCtrl 140) lbAdd 'Default';((_this select 0) displayCtrl 140) lbAdd 'Debug';((_this select 0) displayCtrl 140) lbAdd 'None';((_this select 0) displayCtrl 140) lbSetCurSel (uiNamespace getVariable ['DZ_displayUI', 0]);";
	onUnload = "call ui_changeDisplay;";
	class controls
	{
		class CA_TextUIDisplay: CA_TextLanguage
		{
			x = 0.159803;
			y = "(0.420549 + 4*0.069854)";
			text = "DayZ UI:";
		};
		class CA_ValueUIDisplay: RscXListBox
		{
			idc = 140;
			x = 0.400534;
			y = "(0.420549 + 4*0.069854)";
			w = 0.3;
			onLBSelChanged = "(uiNamespace setVariable ['DZ_displayUI', (_this select 1)]);";
		};	
	};
};
class RscShortcutButtonMain;
class RscDisplayMain : RscStandardDisplay
{
	class controlsBackground 
	{
		class Mainback : RscPicture {
			idc = 1104;
			x = "SafeZoneX + 0.04";
			y = "SafeZoneY + 0.03";
			w = 0.627451;
			h = 1.000000;
			text = "\ca\ui\data\ui_mainmenu_background_ca.paa";
		};
		class CA_ARMA2 : RscPicture
		{
			text = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		};
	};
	
	class controls 
	{
		class CA_Version;
		class DAYZ_Version : CA_Version
		{
			idc = -1;
			text = "DayZ Sahrani 0.2.1 - 20130604";
			y = "(SafeZoneH + SafeZoneY) - (1 - 0.95)";
		};
		delete CA_TitleMainMenu;
		//delete CA_SinglePlayer;
		class CA_PlayerName : RscText {
			idc = 109;
			style = 256;
			colorbackground[] = {0.1, 0.1, 0.1, 0};
			x = "SafeZoneX + 0.15";
			y = "SafeZoneY + 0.06";
			w = 0.5;
			h = 0.05;
		};
		class CA_MP : RscShortcutButtonMain {
			idc = 105;
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.15";
			toolTip = $STR_TOOLTIP_MAIN_MULTIPLAYER;
			text = $STR_CA_MAIN_MULTI;
			
			class KeyHints {
				class A {
					key = 0x00050000 + 0;
					hint = "";
				};
			};
		};
		class CA_Options : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.30";
		};
		class CA_PlayerProfile : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.45";
		};
		class CA_Expansions : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.60";
		};
		class CA_Exit : RscShortcutButtonMain {
			x = "SafeZoneX + 0.05";
			y = "SafeZoneY + 0.75";
		};
	};
};
//Remove Diary
class RscDisplayDiary {
	idd = 129;
	movingEnable = 0;
	
	class Controls {
		delete Diary;
		delete DiaryIndex;
		delete B_Quit;
		delete B_Add;
		delete DiaryPage;
		delete DiaryTitle;
		delete DiaryBackground;
	};
};

class RscButtonActionMenu: RscButton
{
	SizeEx = 0.02674;
	colorBackground[] = {0.1,0.1,0.1,0.85};
	colorBackgroundActive[] = {0.1,0.1,0.1,1};
	colorBackgroundDisabled[] = {0.1,0.1,0.1,0.5};
	colorFocused[] = {0.95,0.95,0.95,1};
	colorShadow[] = {1,1,1,0};
	borderSize = 0;
	w = 0.095 * safezoneW;
	h = 0.025 * safezoneH;
};
class RscDisplayGenderSelect
{
	idd = 6902;
	enableDisplay = 1;
	class controls
	{
		class GenderPic_Man : RscActiveText
		{
			idc = -1;
			style = 48;
			text = "z\addons\dayz_code\gui\gender_menu_man.paa";
			x = 0.28 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;
			w = 0.117188 * safezoneW;
			h = 0.542373 * safezoneH;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_selectGender = 'Survivor2_DZ';";
		};
		class GenderPic_Woman : RscActiveText
		{
			idc = -1;
			style = 48;
			text = "z\addons\dayz_code\gui\gender_menu_woman.paa";
			x = 0.6 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;
			w = 0.117188 * safezoneW;
			h = 0.542373 * safezoneH;
			color[] = { 0.5, 0.5, 0.5, 1 };
			colorActive[] = { 1, 1, 1, 1 };
			action = "closeDialog 0;dayz_selectGender = 'SurvivorW2_DZ';";
		};
		class Gender_Title: RscStructuredText
		{
			idc = -1;
			text = "$STR_UI_GENDER_TITLE";
			x = 0.4 * safezoneW + safezoneX;
			y = 0.221864 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
		class Gender_Description: RscStructuredText
		{
			idc = -1;
			text = "$STR_UI_GENDER_DESC";
			x = 0.4 * safezoneW + safezoneX;
			y = 0.366134 * safezoneH + safezoneY;
			w = 0.2 * safezoneW;
			h = 0.3 * safezoneH;
			colorBackground[] = {-1,-1,-1,0};
		};
	};
};

class RscDisplayGear
{
	idd = 106;
	enableDisplay = 1;
	onUnload = "call player_gearSync; call dayz_forceSave;";
	class controls
	{
		class CA_Filter_Icon: RscPicture
		{
			idc = 148;
			style = "0x30 + 0x800";
			x = 0.04;
			y = 0.544098;
			w = 0.458;
			h = 0.075;
			text = "\z\addons\dayz_code\gui\ui\igui_gear_filter_1_ca.paa";
		};
		class CA_Filter_Left_Icon: RscPicture
		{
			idc = 1301;
			style = "0x30 + 0x800";
			x = 0.05;
			y = 0.545098;
			w = 0.036;
			h = 0.075;
			text = "\ca\ui\data\arrow_left_ca.paa";
		};
		class CA_Filter_Right_Icon: RscPicture
		{
			idc = 1302;
			style = "0x30 + 0x800";
			x = 0.453;
			y = 0.545098;
			w = 0.036;
			h = 0.075;
			text = "\ca\ui\data\arrow_right_ca.paa";
		};
		class CA_Filter_Arrow_Left: RscButton
		{
			idc = 150;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0.041;
			y = 0.545098;
			w = 0.056;
			h = 0.075;
			text = "";
		};
		class CA_Filter_Arrow_Right: RscButton
		{
			idc = 151;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0.443;
			y = 0.545098;
			w = 0.056;
			h = 0.075;
			text = "";
		};
		class CA_Filter_Icon1: RscButton
		{
			idc = 149;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0.099;
			y = 0.545098;
			w = 0.341;
			h = 0.075;
			text = "";
		};
		class Gear_Title: CA_IGUI_Title
		{
			idc = 1001;
			x = 0.047634;
			y = -0.00102941;
			text = "Gear";
		};
		class Unit_Title: RscText
		{
			idc = 101;
			style = 2;
			x = 0.502419;
			y = 0.0492156;
			w = 0.456;
			colorText[] = {1,1,1,0};
		};
		class Available_items_Text: RscText
		{
			idc = 156;
			x = 0.0433014;
			y = 0.0526966;
			w = 0.389709;
			h = 0.029412;
		};
		class CA_ItemName: Available_items_Text
		{
			idc = 1101;
			x = 0.0416704;
			y = 0.627451;
			text = "Gear of the unit:";
		};
		class CA_Money: RscText
		{
			idc = 1102;
			style = 1;
			show = 0;
			x = -2.50409;
			y = -2.85784;
			w = 0.228;
			text = "Money:";
		};
		class CA_Money_Value: RscText
		{
			idc = 1103;
			x = -2.72794;
			y = -2.85784;
			w = 0.228;
			text = "0";
		};
		class ListboxArrows: RscControlsGroup
		{
			x = 0.04;
			y = 0.0892447;
			w = 0.48;
			h = 0.449;
			idc = 155;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_B_Add: RscGearShortcutButton
				{
					idc = 146;
					x = -2;
					style = 2048;
					onSetFocus = "private [""_dummy""]; _dummy = [_this,""onFocus""] execVM	""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onButtonClick = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					text = "&lt;";
				};
				class Available_items: RscIGUIListNBox
				{
					idc = 105;
					columns[] = {0.075,0.175,0.81,0.67};
					drawSideArrows = 1;
					idcRight = 147;
					idcLeft = 146;
					colorPlayerItem[] = {0.95,0.95,0.95,1};
					onKeyDown = "private [""_dummy""]; _dummy = [_this,""onKeyDown"",0,107,0,107] execVM	""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onLBSelChanged = "private [""_dummy""]; _dummy = [_this,""onLBSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onLBListSelChanged = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onKillFocus = "private [""_dummy""]; _dummy = [_this,""onKillFocus""] execVM	""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					x = 0;
					y = 0;
					w = 0.46;
					h = 0.449;
					canDrag = 1;
				};
				class CA_B_Remove: CA_B_Add
				{
					idc = 147;
					x = -2;
					onSetFocus = "private [""_dummy""]; _dummy = [_this,""onFocus""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onButtonClick = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					text = ">";
				};
			};
		};
		class CA_CustomDescription: RscStructuredText
		{
			idc = 1106;
			x = 0.0414969;
			y = 0.663641;
			w = 0.458;
			h = 0.152;
			colorText[] = {0.95,0.95,0.95,1};
			class Attributes
			{
				font = "Zeppelin32";
				color = "#F2F2F2";
				align = "left";
				shadow = 1;
			};
		};
		class CA_Item_Picture: RscPicture
		{
			idc = 1104;
			style = "0x30 + 0x800";
			x = 0.330883;
			y = 0.785541;
			w = 0.156863;
			h = 0.104575;
			text = "";
		};
		class G_Interaction: RscControlsGroup
		{
			idc = 6902;
			x = 0.502;
			y = 0.250 * safezoneH;
			w = 0.145 * safezoneW;
			h = 0; //0.250 * safezoneH;
			onMouseMoving = "_this call gear_ui_offMenu;";
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class RscButton_1600: RscButtonActionMenu
				{
					idc = 1600;
					text = "";
					x = 0;
					y = 0 * safezoneH;
				};
				class RscButton_1601: RscButtonActionMenu
				{
					idc = 1601;
					text = "";
					x = 0;
					y = 0.025 * safezoneH;
				};
				class RscButton_1602: RscButtonActionMenu
				{
					idc = 1602;
					text = "";
					x = 0;
					y = 0.05 * safezoneH;
				};
				class RscButton_1603: RscButtonActionMenu
				{
					idc = 1603;
					text = "";
					x = 0;
					y = 0.075 * safezoneH;
				};
				class RscButton_1604: RscButtonActionMenu
				{
					idc = 1604;
					text = "";
					x = 0;
					y = 0.1 * safezoneH;
				};
				class RscButton_1605: RscButtonActionMenu
				{
					idc = 1605;
					text = "";
					x = 0;
					y = 0.125 * safezoneH;
				};
				class RscButton_1606: RscButtonActionMenu
				{
					idc = 1606;
					text = "";
					x = 0;
					y = 0.15 * safezoneH;
				};
				class RscButton_1607: RscButtonActionMenu
				{
					idc = 1607;
					text = "";
					x = 0;
					y = 0.175 * safezoneH;
				};
				class RscButton_1608: RscButtonActionMenu
				{
					idc = 1608;
					text = "";
					x = 0;
					y = 0.2 * safezoneH;
				};
				class RscButton_1609: RscButtonActionMenu
				{
					idc = 1609;
					text = "";
					x = 0;
					y = 0.225 * safezoneH;
				};
			};
		};
		class G_GearItems: RscControlsGroup
		{
			idc = 160;
			x = 0.502;
			y = 0.09;
			w = 0.463;
			h = 0.776;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Gear_slot_primary: RscActiveText
				{
					idc = 107;
					x = "0.502 - 0.502";
					y = "0.244 - 0.09";
					w = 0.286;
					h = 0.15;
					style = "0x30 + 0x800";
					onMouseButtonDown = "_this call player_selectSlot;";
					soundDoubleClick[] = {"",0.1,1};
					color[] = {1,1,1,1};
					colorBackground[] = {0.95,0.95,0.95,1};
					colorBackgroundSelected[] = {0.95,0.95,0.95,1};
					colorFocused[] = {0,0,0,0};
					canDrag = 1;
				};
				class CA_Gear_slot_secondary: CA_Gear_slot_primary
				{
					idc = 108;
					y = "0.398 -0.09";
				};
				class CA_Gear_slot_item1: CA_Gear_slot_primary
				{
					idc = 109;
					x = "0.790 - 0.502";
					y = "0.244 - 0.09";
					w = 0.055;
					h = 0.074;
				};
				class CA_Gear_slot_item2: CA_Gear_slot_item1
				{
					idc = 110;
					x = "0.847 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item3: CA_Gear_slot_item1
				{
					idc = 111;
					x = "0.904366 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item4: CA_Gear_slot_item1
				{
					idc = 112;
					x = "0.790 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item5: CA_Gear_slot_item1
				{
					idc = 113;
					x = "0.847 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item6: CA_Gear_slot_item1
				{
					idc = 114;
					x = "0.904366 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item7: CA_Gear_slot_item1
				{
					idc = 115;
					x = "0.790 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item8: CA_Gear_slot_item7
				{
					idc = 116;
					x = "0.847 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item9: CA_Gear_slot_item7
				{
					idc = 117;
					x = "0.904366 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item10: CA_Gear_slot_item7
				{
					idc = 118;
					x = "0.790 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item11: CA_Gear_slot_item7
				{
					idc = 119;
					x = "0.847 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item12: CA_Gear_slot_item7
				{
					idc = 120;
					x = "0.904366 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_handgun: CA_Gear_slot_primary
				{
					idc = 121;
					x = "0.560 - 0.502";
					y = "0.551 - 0.09";
					w = 0.113;
					h = 0.15;
				};
				class CA_Gear_slot_handgun_item1: CA_Gear_slot_item1
				{
					idc = 122;
					x = "0.674 - 0.502";
					y = "0.551 - 0.09";
					w = 0.055;
					h = 0.074;
				};
				class CA_Gear_slot_handgun_item2: CA_Gear_slot_handgun_item1
				{
					idc = 123;
					x = "0.733 - 0.502";
					y = "0.551 - 0.09";
				};
				class CA_Gear_slot_handgun_item3: CA_Gear_slot_handgun_item1
				{
					idc = 124;
					x = "0.790 - 0.502";
				};
				class CA_Gear_slot_handgun_item4: CA_Gear_slot_handgun_item1
				{
					idc = 125;
					x = "0.847 - 0.502";
				};
				class CA_Gear_slot_handgun_item5: CA_Gear_slot_handgun_item1
				{
					idc = 126;
					x = "0.674 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item6: CA_Gear_slot_handgun_item5
				{
					idc = 127;
					x = "0.733 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item7: CA_Gear_slot_handgun_item5
				{
					idc = 128;
					x = "0.790 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item8: CA_Gear_slot_handgun_item5
				{
					idc = 129;
					x = "0.847 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_special1: CA_Gear_slot_item1
				{
					idc = 130;
					x = "0.502 - 0.502";
					y = "0.09 - 0.09";
					w = 0.113;
					h = 0.15;
				};
				class CA_Gear_slot_special2: CA_Gear_slot_special1
				{
					idc = 131;
					x = "0.847 - 0.502";
					y = "0.09 - 0.09";
					w = 0.113;
					h = 0.15;
				};
				class CA_Gear_slot_inventory1: CA_Gear_slot_special1
				{
					idc = 134;
					x = "0.560 - 0.502";
					y = "0.705 - 0.09";
					w = 0.055;
					h = 0.074;
				};
				class CA_Gear_slot_inventory2: CA_Gear_slot_inventory1
				{
					idc = 135;
					x = "0.617 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory3: CA_Gear_slot_inventory1
				{
					idc = 136;
					x = "0.674 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory4: CA_Gear_slot_inventory1
				{
					idc = 137;
					x = "0.733 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory5: CA_Gear_slot_inventory1
				{
					idc = 138;
					x = "0.790 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory6: CA_Gear_slot_inventory1
				{
					idc = 139;
					x = "0.847 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory7: CA_Gear_slot_inventory1
				{
					idc = 140;
					x = "0.560 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory8: CA_Gear_slot_inventory7
				{
					idc = 141;
					x = "0.617 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory9: CA_Gear_slot_inventory7
				{
					idc = 142;
					x = "0.674 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory10: CA_Gear_slot_inventory7
				{
					idc = 143;
					x = "0.733 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory11: CA_Gear_slot_inventory7
				{
					idc = 144;
					x = "0.790 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory12: CA_Gear_slot_inventory7
				{
					idc = 145;
					x = "0.847 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory13: CA_Gear_slot_inventory7
				{
					idc = 1122;
					x = 10.1;
					y = 10.1;
				};
			};
		};
		class BagItemsGroup: RscControlsGroup
		{
			x = 0.502;
			y = 0.09;
			w = 0.463;
			h = 0.776;
			idc = 159;
			magW = 0.055;
			magH = 0.074;
			weaponW = 0.226;
			weaponH = 0.15;
			gunW = 0.113;
			gunH = 0.15;
			spacing = 0.002;
			text = "";
			color[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorBackgroundSelected[] = {1,1,1,1};
			colorFocused[] = {1,1,1,1};
			soundPush[] = {"",0.1,1};
			soundClick[] = {"",0.1,1};
			soundDoubleClick[] = {"",0.1,1};
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\z\addons\dayz_code\gui\ui\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\z\addons\dayz_code\gui\ui\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\z\addons\dayz_code\gui\ui\ui_arrow_top_ca.paa";
				border = "\z\addons\dayz_code\gui\ui\ui_border_scroll_ca.paa";
			};
			class Controls
			{
			};
		};
		class Break_7: RscLineBreak
		{
		};
		class ButtonFilters: RscIGUIShortcutButton
		{
			idc = 148;
			shortcuts[] = {"0x00050000 + 3"};
			x = 0.333336;
			y = 0.897067;
			text = "Filter";
		};
		class ButtonRearm: RscIGUIShortcutButton
		{
			idc = 132;
			shortcuts[] = {};
			//onButtonClick = "player hint ""Crafting not ready yet.""; /*_dummy = execVM ""\ca\ui\scripts\armory\launchArmory.sqf""*/ ";
			x = 0.554743;
			y = 0.897067;
			text = "Rearm";
		};
		class ButtonOpenBag: RscIGUIShortcutButton
		{
			idc = 157;
			shortcuts[] = {"0x00050000 + 2"};
			x = 0.554743;
			y = 0.897067;
			text = "Open bag";
		};
		class ButtonCloseBag: RscIGUIShortcutButton
		{
			idc = 158;
			shortcuts[] = {"0x00050000 + 2"};
			x = 0.554743;
			y = 0.897067;
			text = "Close bag";
		};
		class ButtonContinue: RscIGUIShortcutButton
		{
			idc = 1;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.77615;
			y = 0.897066;
			default = 1;
		};
		class ButtonClose: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			x = 0.0392216;
			y = 0.897066;
			text = "Close";
		};
	};
	class Filters
	{
		class All
		{
			name = "All";
			mask = -1;
			image = "\z\addons\dayz_code\gui\ui\igui_gear_filter_1_ca.paa";
		};
		class Primary
		{
			name = "Primary";
			mask = 769;
			image = "\z\addons\dayz_code\gui\ui\igui_gear_filter_2_ca.paa";
		};
		class Secondary
		{
			name = "Secondary";
			mask = 516;
			image = "\z\addons\dayz_code\gui\ui\igui_gear_filter_3_ca.paa";
		};
		class HandGun
		{
			name = "HandGun";
			mask = 18;
			image = "\z\addons\dayz_code\gui\ui\igui_gear_filter_4_ca.paa";
		};
		class Items
		{
			name = "Items";
			mask = 135168;
			image = "\z\addons\dayz_code\gui\ui\igui_gear_filter_5_ca.paa";
		};
	};
	movingEnable = 1;
	emptyGun = "\ca\ui\data\ui_gear_gun_gs.paa";
	emptySec = "\ca\ui\data\ui_gear_sec_gs.paa";
	emptyEq = "\ca\ui\data\ui_gear_eq_gs.paa";
	emptyMag = "\ca\ui\data\ui_gear_mag_gs.paa";
	emptyMag2 = "\ca\ui\data\ui_gear_mag2_gs.paa";
	emptyHGun = "\ca\ui\data\ui_gear_hgun_gs.paa";
	emptyHGunMag = "\ca\ui\data\ui_gear_hgunmag_gs.paa";
	onLoad = "call gear_ui_init;if (isNil('IGUI_GEAR_activeFilter')) then { IGUI_GEAR_activeFilter = 0;}; private ['_dummy']; _dummy = [_this,'initDialog'] call compile preprocessFile	'\ca\ui\scripts\handleGear.sqf'; _dummy = [_this,'onLoad'] execVM	'\ca\ui\scripts\handleGear.sqf'; _dummy;";
	class ControlsBackground
	{
		class Mainback: RscPicture
		{
			idc = 1005;
			x = 0.04;
			y = 0.01;
			w = 1.2549;
			h = 1.6732;
			moving = 1;
			text = "\z\addons\dayz_code\gui\ui\igui_background_gear_ca.paa";
			colorText[] = {1,1,1,0.85};
		};
	};
};
class DZ_ItemInteraction {
	idd = 6901;
	movingEnable = 0;
	class controlsBackground { 
		// define controls here
	};
	class objects { 
		// define controls here
	};
	class controls { 
		// define controls here

	};
};

class RscTitles
{
	class Default
	{
		idd = -1;
		movingEnable = 0;
		duration = 4;
	};
	class playerKillScore 
	{
		idd = 6902;
		movingEnable = 0;
		duration = 5;
		name = "playerKillScore";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_kills', _this select 0];";
		class ControlsBackground {
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1400;
				text = "\z\addons\dayz_code\gui\stats_kills_human_ca.paa";
				x = 0.044687 * safezoneW + safezoneX;
				y = 0.934779 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1401;
				text = "\z\addons\dayz_code\gui\stats_kills_zombie_ca.paa";
				x = 0.044687 * safezoneW + safezoneX;
				y = 0.876025 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
		};
		class Controls{
			class RscText1: RscStructuredTextGUI
			{
				idc = 1410;
				text = "10";
				x = (0.044687 * safezoneW + safezoneX) - 0.01;
				y = 0.934779 * safezoneH + safezoneY;
				w = 0.08;
				h = 0.08;
			};
			class RscText2: RscStructuredTextGUI
			{
				idc = 1411;
				text = "1000";
				x = (0.044687 * safezoneW + safezoneX) - 0.01;
				y = 0.876025 * safezoneH + safezoneY;
				w = 0.08;
				h = 0.08;
			};
		};
	};
	
	class playerStatusWaiting
	{
		idd = 6901;
		movingEnable = 0;
		duration = 100000;
		name = "playerStatusWaiting";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_waiting', _this select 0];";
		class ControlsBackground {
			class RscText_1402: RscPictureGUI
			{
				idc = 1402;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.473572 * safezoneW + safezoneX;
				y = 0.418158 * safezoneH + safezoneY;
				w = 0.0634286 * safezoneW;
				h = 0.136829 * safezoneH;
				colorText[] = {0.95, 0.95, 0.95, .9};
			};
			class RscText_1400: RscPictureGUI
			{
				idc = 1400;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = 0.473572 * safezoneW + safezoneX;
				y = 0.418158 * safezoneH + safezoneY;
				w = 0.0634286 * safezoneW;
				h = 0; //0.136829 * safezoneH;
				colorText[] = {0,0,0,1};
			};
		};
		class Controls {
			class RscPicture_1401: RscPictureGUI
			{
				idc = 1401;
				text = "\z\addons\dayz_code\gui\status_waiting_ca.paa";
				x = 0.434999 * safezoneW + safezoneX;
				y = 0.392207 * safezoneH + safezoneY;
				w = 0.141 * safezoneW;
				h = 0.188013 * safezoneH;
				colorText[] = {0.1,0.1,0.1,1};
			};
		};
	};

	class playerStatusGUI
	{
		idd = 6900;
		movingEnable = 0;
		duration = 100000;
		name = "statusBorder";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
		class ControlsBackground {
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1201;
				text = "\z\addons\dayz_code\gui\status_food_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY; //1
				w = 0.06;
				h = 0.08;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1200;
				text = "\z\addons\dayz_code\gui\status_blood_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;//2
				w = 0.06;
				h = 0.08;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
			class RscPicture_1202: RscPictureGUI
			{
				idc = 1202;
				text = "\z\addons\dayz_code\gui\status_thirst_border_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY; //3
				w = 0.06;
				h = 0.08;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
			class RscPicture_1208: RscPictureGUI
			{
				idc = 1208;
				text = "\z\addons\dayz_code\gui\status_temp_outside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY; //3
				w = 0.06;
				h = 0.08;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
			class RscPicture_1207 : RscPictureGUI {
				idc = 1207;
				text = "\z\addons\dayz_code\gui\status_combat_border_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.65 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
			class RscPicture_1203: RscPictureGUI
			{
				idc = 1203;
				text = "\z\addons\dayz_code\gui\status_fracture_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.58 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.85};
				shadow = 2;
			};
			class RscPicture_1204: RscPictureGUI
			{
				idc = 1204;
				text = "\z\addons\dayz_code\gui\status_connection_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.51 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.85};
				shadow = 2;
			};
			class RscPicture_1205: RscPictureGUI
			{
				idc = 1205;
				text = "\z\addons\dayz_code\gui\status_ear_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.30 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.85};
				shadow = 2;
			};
			class RscPicture_1206: RscPictureGUI
			{
				idc = 1206;
				text = "\z\addons\dayz_code\gui\status_eye_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.85};
				shadow = 2;
			};
			class RscPicture_1501: RscPictureGUI
			{
				idc = 1501;
				text = "\z\addons\dayz_code\gui\status_food_border_ca.paa";
				x = 0.945313 * safezoneW + safezoneX;
				y = 0.95 * safezoneH + safezoneY; //1
				w = 0.04;
				h = 0.053333;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
			class RscPicture_1502: RscPictureGUI
			{
				idc = 1502;
				text = "\z\addons\dayz_code\gui\status_thirst_border_ca.paa";
				x = 0.945313 * safezoneW + safezoneX;
				y = 0.816666 * safezoneH + safezoneY; //3
				w = 0.04;
				h = 0.053333;
				colorText[] = {0.95, 0.95, 0.95, 1};
				shadow = 2;
			};
		};
		class Controls{
			class RscPicture_1301: RscPictureGUI
			{
				idc = 1301;
				//text = "\z\addons\dayz_code\gui\status_food_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.93 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1300: RscPictureGUI
			{
				idc = 1300;
				//text = "\z\addons\dayz_code\gui\status_blood_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1302: RscPictureGUI
			{
				idc = 1302;
				//text = "\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.79 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1306: RscPictureGUI
			{
				idc = 1306;
				//text = "\z\addons\dayz_code\gui\status_temp_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.72 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1303: RscPictureGUI
			{
				idc = 1303;
				text = "\z\addons\dayz_code\gui\status_bleeding_ca.paa";
				x = 0.955313 * safezoneW + safezoneX;
				y = 0.86 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {0, 0, 0, 0.85};
			};
			class RscPicture_1304: RscPictureGUI
			{
				idc = 1304;
				text = "";
				x = 0.935313 * safezoneW + safezoneX;
				y = 0.3 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.9};
			};
			class RscPicture_1305: RscPictureGUI
			{
				idc = 1305;
				text = "";
				x = 0.935313 * safezoneW + safezoneX;
				y = 0.37 * safezoneH + safezoneY;
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.9};
			};
			class RscPicture_1307 : RscPictureGUI {
				idc = 1307;
				text = "\z\addons\dayz_code\gui\status_combat_inside_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.65 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1701: RscPictureGUI

			{
				idc = 1701;
				//text = "\z\addons\dayz_code\gui\status_food_inside_ca.paa";
				x = 0.945313 * safezoneW + safezoneX;
				y = 0.95 * safezoneH + safezoneY;
				w = 0.04;
				h = 0.053333;
			};
			class RscPicture_1702: RscPictureGUI
			{
				idc = 1702;
				//text = "\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
				x = 0.945313 * safezoneW + safezoneX;
				y = 0.816666 * safezoneH + safezoneY;
				w = 0.04;
				h = 0.053333;
			};
		};
	};
};

class CA_Black_Back;
class RscMapControl;
class IGUIBack;
class RscHTML;
class RscObject;
class RscDisplayMainMap {
	saveParams = 1;
	
	class controlsBackground {
		class Map {};
		
		class CA_Black : CA_Black_Back {};
		
		class CA_Map : RscMapControl {
			x = "SafeZoneXAbs";
			y = "SafeZoneY";
			w = "SafeZoneWAbs";
			h = "SafeZoneH";
		};
	};
	
	class controls {
		class DiaryIndex {};
		class DiaryAdd {};
		class DiarySort {};
		class DiaryFilter {};
		class Diary {};
		
		class CA_MainBackground : IGUIBack {
			idc = 1020;
			x = "SafeZoneX + 0.010 * SafeZoneW";
			y = "SafeZoneY + 0.031";
			w = "0.98*SafeZoneW";
			h = 0.082;
			colorbackground[] = {0.1961, 0.1451, 0.0941, 0.85};
		};
		
		class CA_TopicsBackground : IGUIBack {
			idc = 1021;
			x = "0.010*SafeZoneW + SafeZoneX";
			y = "SafeZoneY + 0.117";
			w = "0.146*SafeZoneW";
			h = 0.53;
			colorbackground[] = {0.1961, 0.1451, 0.0941, 0.85};
		};
		
		class CA_SubTopicsBackground : IGUIBack {
			idc = 1022;
			x = "0.16*SafeZoneW + SafeZoneX";
			y = "SafeZoneY + 0.117";
			w = "0.283*SafeZoneW";
			h = 0.53;
			colorbackground[] = {0.1961, 0.1451, 0.0941, 0.85};
		};
		
		class CA_ContentBackground : IGUIBack {
			idc = 1023;
			x = "0.446*SafeZoneW + SafeZoneX";
			y = "SafeZoneY + 0.117";
			w = "SafeZoneW * 0.544";
			h = 0.832;
			colorbackground[] = {0.1961, 0.1451, 0.0941, 0.85};
		};
		
		class CA_PlayerName {};
		class CA_PlayerRank {};
		class CA_MissionName {};
		class CA_CurrentTaskLabel {};
		class CA_CurrentTask {};
		
		class DiaryList : RscIGUIListBox {
			idc = 1001;
			onLBSelChanged = "[_this select 0, _this select 1, 'List'] call compile preprocessFileLineNumbers 'ca\Warfare2\Scripts\Client\GUI\GUI_logEH.sqf';       private ['_dummy']; _dummy = [_this,'onLBSelChanged'] call compile preprocessfile '\ca\ui\scripts\server_interface.sqf';";
			default = 1;
			x = "0.010*SafeZoneW + SafeZoneX";
			y = "SafeZoneY + 0.137";
			w = "0.146*SafeZoneW";
			h = 0.6;
		};
		
		class CA_DiaryIndex : RscIGUIListBox {
			idc = 1002;
			onLBSelChanged = "[_this select 0, _this select 1, 'Index'] call compile preprocessFileLineNumbers 'ca\Warfare2\Scripts\Client\GUI\GUI_logEH.sqf';";
			default = 0;
			x = "0.16*SafeZoneW  + SafeZoneX";
			y = "SafeZoneY + 0.137";
			w = "0.283*SafeZoneW";
			h = 0.6;
			sizeEx = 0.034;
		};
		
		class CA_DiaryGroup : RscControlsGroup {
			idc = 1013;
			x = "0.446*SafeZoneW  + SafeZoneX";
			y = "SafeZoneY + 0.137";
			w = "0.534*SafeZoneW";
			h = 0.718;
			
			class VScrollbar {
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1, 1, 1, 1};
				width = 0.01;
			};
			
			class HScrollbar {
				color[] = {1, 1, 1, 0};
				height = 0.001;
			};
			
			class Controls {
				class CA_Diary : RscHTML {
					idc = 1003;
					cycleLinks = 0;
					cycleAllLinks = 0;
					default = 0;
					x = "0.01*SafeZoneW";
					y = 0.0;
					w = "0.514*SafeZoneW";
					h = 1.807;
					colorText[] = {0.95, 0.95, 0.95, 1};
					
					class H1 {
						font = "Zeppelin32";
						fontBold = "Zeppelin32";
						sizeEx = 0.034;
					};
					
					class P {
						font = "Zeppelin32";
						fontBold = "Zeppelin32";
						sizeEx = 0.034;
					};
				};
			};
		};
		
		class HC_tooltip_back : IGUIBack {
			idc = 1124;
			x = 0.0;
			y = 0.0;
			w = 0.0;
			h = 0.0;
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
		};
		
		class HC_tooltip_text : RscStructuredText {
			idc = 1125;
			x = 0.0;
			y = 0.0;
			w = 0.0;
			h = 0.0;
			size = 0.035;
			
			class Attributes {
				font = "Zeppelin32";
				color = "#B6F862";
				align = "left";
				shadow = true;
			};
		};
	};
	
	class objects {
		class Watch : RscObject {
			model = "\ca\ui\Watch.p3d";
			x = 0.08;
			xBack = 0.4;
			y = 0.925;
			yBack = 0.5;
			z = 0.21;
			zBack = 0.11;
			enableZoom = 1;
			direction[] = {0, 1, 7.2};
			up[] = {0, 0, -1};
			scale = 0.4;
		};
		
		class Compass : RscObject {
			model = "\ca\ui\Compass.p3d";
			selectionArrow = "";
			x = 0.16;
			xBack = 0.6;
			y = 0.925;
			yBack = 0.5;
			z = 0.2;
			zBack = 0.1;
			enableZoom = 1;
			direction[] = {1, 0, 0};
			up[] = {0, 1, 0};
			scale = 0.35;
		};
		
		class GPS : RscObject {
			model = "\ca\ui\gps.p3d";
			x = 0.36;
			xBack = 0.7;
			y = 0.925;
			yBack = 0.5;
			z = 0.22;
			zBack = 0.12;
			scale = 0.3;
			
			class Areas {
				class Display {
					class controls {
						class GPSSquare : RscText {
							idc = 75;
							x = 0;
							y = 0.56;
							w = 1;
							h = 0.5;
							colorText[] = {0.2314, 0.2588, 0.1373, 1.0};
							sizeEx = 0.4;
						};
						
						class GPS_ALT : RscText {
							idc = 77;
							x = 0.25;
							y = 0.31;
							w = 1;
							h = 0.3;
							colorText[] = {0.2314, 0.2588, 0.1373, 1.0};
							sizeEx = 0.23;
						};
						
						class GPS_Heading : RscText {
							idc = 78;
							x = 0.25;
							y = 0.073;
							w = 1;
							h = 0.3;
							colorText[] = {0.2314, 0.2588, 0.1373, 1.0};
							sizeEx = 0.23;
						};
					};
				};
			};
		};
		
		class WalkieTalkie : RscObject {
			model = "\ca\ui\radio.p3d";
			x = 0.56;
			xBack = 0.8;
			y = 0.925;
			yBack = 0.5;
			z = 0.22;
			zBack = 0.12;
			scale = 0.15;
			
			class Areas {
				class Papir {
					class controls {
						class RscRadioText : RscActiveText {
							sizeEx = 0.17;
							x = 0.005;
							y = 0.02;
							h = 0.1;
						};
						
						class RadioAlpha : RscRadioText {
							y = 0.05;
						};
						
						class RadioBravo : RscRadioText {
							y = 0.17;
						};
						
						class RadioCharlie : RscRadioText {
							y = 0.29;
						};
						
						class RadioDelta : RscRadioText {
							y = 0.41;
						};
						
						class RadioEcho : RscRadioText {
							y = 0.53;
						};
						
						class RadioFoxtrot : RscRadioText {
							y = 0.65;
						};
						
						class RadioGolf : RscRadioText {
							y = 0.77;
						};
						
						class RadioHotel : RscRadioText {
							y = 0.89;
						};
						
						class RadioIndia : RscRadioText {
							y = 1.01;
						};
						
						class RadioJuliet : RscRadioText {
							y = 1.13;
						};
					};
				};
			};
		};
	};
};

class RscChatListDefault {
	idc = 9977;
};

class CA_SpeedBackground : RscEdit {
	idc = -1;
	sizeEx = 0.034;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {0, 0, 1, 1};
	colorSelection[] = {0, 0, 0, 0};
	style = 0x02 + 0x40;
	shadow = 2;
	type = VSoft;
	x = 0.314;
	y = "0.017 + SafeZoneY";
	w = 0.06;
	h = 0.033;
};
class RscInGameUI {
	colorReady[] = {1, 1, 1, 1.0};
	colorPrepare[] = {0.863, 0.584, 0.0, 1};
	colorUnload[] = {0.706, 0.0745, 0.0196, 1};
	class RscUnitInfo {
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"CA_Weapon", "CA_Mode", "CA_Ammo", "CA_ValueFuelBackground", "CA_ValueFuel", "CA_GunnerWeapon", "CA_SpeedBackground", "CA_TextSpeed", "CA_Speed", "CA_ValueArmor", "CA_TextFlares", "CA_TextFlaresMode"};
		
		class CA_Mode : RscIGUIText {
			idc = 149;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Ammo : RscIGUIValue {
			idc = 119;
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Weapon : RscIGUIText {
			idc = 118;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.015 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_GunnerWeapon : RscIGUIText {
			idc = 150;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.132 + SafeZoneY";
			w = 0.214;
			h = 0.039;
			SizeEx = 0.034;
		};
		
		class CA_SpeedBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.95,0.95,0.95,1};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			shadow = 2;
			type = VSoft;
			x = 0.314;
			y = "0.017 + SafeZoneY";
			w = 0.06;
			h = 0.033;
		};
		
		class CA_TextSpeed : RscIGUIText {
			style = 0;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
			text = SPD;
		};
		
		class CA_Speed : RscIGUIValue {
			idc = 121;
			style = 1;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		
		class CA_ValueFuelBackground : RscPicture {
			idc = -1;
			shadow = 2;
			x = "0.018 + SafeZoneX";
			y = "0.01 + SafeZoneY";
			w = 0.0196078;
			h = 0.20915;
			colorText[] = {0.95,0.95,0.95,1};
			text = "\ca\ui\data\ui_fuel_background.paa";
		};
		
		class CA_ValueFuel : RscIGProgress {
			idc = 113;
			x = "0.02 + SafeZoneX";
			y = "0.036 + SafeZoneY";
			w = 0.01;
			h = 0.18;
			texture = "\ca\ui\data\igui_fuel_progress.paa";
		};
		
		class CA_ValueArmor : RscListBox {
			idc = 111;
			sizeEx = 0.03525;
			x = "0.040 + SafeZoneX";
			y = "0.016 + SafeZoneY";
			w = 0.0357;
			h = 0.76;
		};
		
		class CA_TextFlaresMode : RscIGUIText {
			idc = 152;
			style = 0;
			sizeEx = 0.02674;
			x = "0.078 + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		
		class CA_TextFlares : RscIGUIValue {
			idc = 151;
			style = 1;
			sizeEx = 0.02674;
			x = "0.078  + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
	};

	class RscUnitInfoTank {
			idd = 300;
			updateWidthByWeapon = 0;
			updateHeightByCrew = 0;
			updateWidthByCrew = 0;
			controls[] = {"CA_Weapon", "CA_Mode", "CA_Ammo", "CA_ValueFuelBackground", "CA_ValueFuel", "CA_GunnerWeapon", "CA_SpeedBackground", "CA_TextSpeed", "CA_Speed", "CA_HeadingBackground", "CA_Heading", "CA_ValueArmor", "CA_TextFlares", "CA_TextFlaresMode"};
			
			class CA_Mode : RscIGUIText {
				idc = 149;
				style = 0;
				x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
				y = "0.054 + SafeZoneY";
				w = 0.214;
				h = 0.039;
			};
			
			class CA_Ammo : RscIGUIValue {
				idc = 119;
				style = 1;
				x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
				y = "0.054 + SafeZoneY";
				w = 0.214;
				h = 0.039;
			};
			
			class CA_Weapon : RscIGUIText {
				idc = 118;
				style = 0;
				x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
				y = "0.015 + SafeZoneY";
				w = 0.214;
				h = 0.039;
			};
			
			class CA_GunnerWeapon : RscIGUIText {
				idc = 150;
				style = 0;
				x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
				y = "0.132 + SafeZoneY";
				w = 0.214;
				h = 0.039;
				SizeEx = 0.034;
			};
			
			class CA_SpeedBackground : RscEdit {
				idc = -1;
				sizeEx = 0.034;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {0.95,0.95,0.95,1};
				colorSelection[] = {0, 0, 0, 0};
				style = 0x02 + 0x40;
				shadow = 2;
				type = VSoft;
				x = 0.314;
				y = "0.017 + SafeZoneY";
				w = 0.06;
				h = 0.033;
			};
			
			class CA_TextSpeed : RscIGUIText {
				style = 0;
				x = 0.257;
				y = "0.015 + SafeZoneY";
				w = 0.12;
				text = SPD;
			};
			
			class CA_Speed : RscIGUIValue {
				idc = 121;
				style = 1;
				x = 0.257;
				y = "0.015 + SafeZoneY";
				w = 0.12;
			};
			
			class CA_HeadingBackground : RscEdit {
				idc = -1;
				sizeEx = 0.034;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {0.95,0.95,0.95,1};
				colorSelection[] = {0, 0, 0, 0};
				style = 0x02 + 0x40;
				type = VSoft;
				x = 0.469;
				y = "0.017 + SafeZoneY";
				w = 0.061;
				h = 0.033;
			};
			
			class CA_Heading : RscIGUIValue {
				idc = 148;
				style = 2;
				x = 0.45;
				y = "0.015 + SafeZoneY";
				w = 0.1;
			};
			
			class CA_ValueFuelBackground : RscPicture {
				idc = -1;
				shadow = 2;
				x = "0.018 + SafeZoneX";
				y = "0.01 + SafeZoneY";
				w = 0.0196078;
				h = 0.20915;
				colorText[] = {0.95,0.95,0.95,1};
				text = "\ca\ui\data\ui_fuel_background.paa";
			};
			
			class CA_ValueFuel : RscIGProgress {
				idc = 113;
				x = "0.02 + SafeZoneX";
				y = "0.036 + SafeZoneY";
				w = 0.01;
				h = 0.18;
				texture = "\ca\ui\data\igui_fuel_progress.paa";
			};
			
			class CA_ValueArmor : RscListBox {
				idc = 111;
				sizeEx = 0.03525;
				x = "0.040 + SafeZoneX";
				y = "0.016 + SafeZoneY";
				w = 0.0357;
				h = 0.76;
			};
			
			class CA_TextFlaresMode : RscIGUIText {
				idc = 152;
				style = 0;
				sizeEx = 0.02674;
				x = "0.078 + SafeZoneX";
				y = "0.012 + SafeZoneY";
				w = "0.161*SafezoneW";
			};
			
			class CA_TextFlares : RscIGUIValue {
				idc = 151;
				style = 1;
				sizeEx = 0.02674;
				x = "0.078  + SafeZoneX";
				y = "0.012 + SafeZoneY";
				w = "0.161*SafezoneW";
			};
		};

	class RscUnitVehicle {
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"CA_Weapon", "CA_Mode", "CA_Ammo", "CA_ValueFuelBackground", "CA_ValueFuel", "CA_GunnerWeapon", "CA_TextSpeed", "CA_Speed", "CA_ValueArmor", "CA_TextFlares", "CA_TextFlaresMode"};
		
		class CA_Mode : RscIGUIText {
			idc = 149;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Ammo : RscIGUIValue {
			idc = 119;
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Weapon : RscIGUIText {
			idc = 118;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.015 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_GunnerWeapon : RscIGUIText {
			idc = 150;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.132 + SafeZoneY";
			w = 0.214;
			h = 0.039;
			SizeEx = 0.034;
		};
		
		class CA_SpeedBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.95, 0.95, 0.95, 1};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			shadow = 2;
			type = VSoft;
			x = 0.314;
			y = "0.017 + SafeZoneY";
			w = 0.06;
			h = 0.033;
		};
		
		class CA_TextSpeed : RscIGUIText {
			style = 0;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
			text = SPD;
		};
		
		class CA_Speed : RscIGUIValue {
			idc = 121;
			style = 1;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		
		class CA_ValueFuelBackground : RscPicture {
			idc = -1;
			shadow = 2;
			x = "0.018 + SafeZoneX";
			y = "0.01 + SafeZoneY";
			w = 0.0196078;
			h = 0.20915;
			colorText[] = {0.95, 0.95, 0.95, 1};
			text = "\ca\ui\data\ui_fuel_background.paa";
		};
		
		class CA_ValueFuel : RscIGProgress {
			idc = 113;
			x = "0.02 + SafeZoneX";
			y = "0.036 + SafeZoneY";
			w = 0.01;
			h = 0.18;
			texture = "\ca\ui\data\igui_fuel_progress.paa";
		};
		
		class CA_TextFlaresMode : RscIGUIText {
			idc = 152;
			style = 0;
			sizeEx = 0.02674;
			x = "0.078 + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		
		class CA_TextFlares : RscIGUIValue {
			idc = 151;
			style = 1;
			sizeEx = 0.02674;
			x = "0.078  + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		
		class CA_ValueArmor : RscListBox {
			idc = 111;
			sizeEx = 0.03525;
			x = "0.040 + SafeZoneX";
			y = "0.016 + SafeZoneY";
			w = 0.0357;
			h = 0.76;
		};
	};

	class RscUnitInfoAir : RscUnitInfo {
		idd = 300;
		updateWidthByWeapon = 0;
		updateHeightByCrew = 0;
		updateWidthByCrew = 0;
		controls[] = {"CA_Weapon", "CA_Mode", "CA_Ammo", "CA_ValueFuelBackground", "CA_ValueFuel", "CA_GunnerWeapon", "CA_SpeedBackground", "CA_TextSpeed", "CA_Speed", "CA_AltBackground", "CA_TextAlt", "CA_Alt", "CA_HeadingBackground", "CA_Heading", "CA_ValueArmor", "CA_TextFlares", "CA_TextFlaresMode"};
		
		class CA_Mode : RscIGUIText {
			idc = 149;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Ammo : RscIGUIValue {
			idc = 119;
			style = 1;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.054 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_Weapon : RscIGUIText {
			idc = 118;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.015 + SafeZoneY";
			w = 0.214;
			h = 0.039;
		};
		
		class CA_GunnerWeapon : RscIGUIText {
			idc = 150;
			style = 0;
			x = "(SafeZoneW + SafeZoneX) - (1 - 0.761)";
			y = "0.132 + SafeZoneY";
			w = 0.214;
			h = 0.039;
			SizeEx = 0.034;
		};
		
		class CA_SpeedBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.95,0.95,0.95,1};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			shadow = 2;
			type = VSoft;
			x = 0.314;
			y = "0.017 + SafeZoneY";
			w = 0.06;
			h = 0.033;
		};
		
		class CA_TextSpeed : RscIGUIText {
			style = 0;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
			text = SPD;
		};
		
		class CA_Speed : RscIGUIValue {
			idc = 121;
			style = 1;
			x = 0.257;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		
		class CA_AltBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.95,0.95,0.95,1};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			type = VSoft;
			x = 0.625;
			y = "0.017 + SafeZoneY";
			w = 0.06;
			h = 0.033;
		};
		
		class CA_TextAlt : RscIGUIText {
			style = 1;
			x = 0.625;
			y = "0.015 + SafeZoneY";
			w = 0.12;
			text = ALT;
		};
		
		class CA_Alt : RscIGUIValue {
			idc = 122;
			style = 0;
			x = 0.625;
			y = "0.015 + SafeZoneY";
			w = 0.12;
		};
		
		class CA_HeadingBackground : RscEdit {
			idc = -1;
			sizeEx = 0.034;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.95,0.95,0.95,1};
			colorSelection[] = {0, 0, 0, 0};
			style = 0x02 + 0x40;
			type = VSoft;
			x = 0.469;
			y = "0.017 + SafeZoneY";
			w = 0.061;
			h = 0.033;
		};
		
		class CA_Heading : RscIGUIValue {
			idc = 148;
			style = 2;
			x = 0.45;
			y = "0.015 + SafeZoneY";
			w = 0.1;
		};
		
		class CA_ValueFuelBackground : RscPicture {
			idc = -1;
			shadow = 2;
			x = "0.018 + SafeZoneX";
			y = "0.01 + SafeZoneY";
			w = 0.0196078;
			h = 0.20915;
			colorText[] = {0.95,0.95,0.95,1};
			text = "\ca\ui\data\ui_fuel_background.paa";
		};
		
		class CA_ValueFuel : RscIGProgress {
			idc = 113;
			x = "0.02 + SafeZoneX";
			y = "0.036 + SafeZoneY";
			w = 0.01;
			h = 0.18;
			texture = "\ca\ui\data\igui_fuel_progress.paa";
		};
		
		class CA_ValueArmor : RscListBox {
			idc = 111;
			sizeEx = 0.03525;
			x = "0.040 + SafeZoneX";
			y = "0.016 + SafeZoneY";
			w = 0.0357;
			h = 0.76;
		};
		
		class CA_TextFlaresMode : RscIGUIText {
			idc = 152;
			style = 0;
			sizeEx = 0.02674;
			x = "0.078 + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
		
		class CA_TextFlares : RscIGUIValue {
			idc = 151;
			style = 1;
			sizeEx = 0.02674;
			x = "0.078  + SafeZoneX";
			y = "0.012 + SafeZoneY";
			w = "0.161*SafezoneW";
		};
	};
};

//LULULULULULULULUL
class nope {
	type = 0;
	x = -10000;
	y = -10000;
	h = 0;
	w = 0;
	size = 0;
	style = 0;
	shadow = 0;
	font = "Zeppelin32";
	SizeEx = 0;
	colorText[] = {0, 0, 0, 0};
	colorBackground[] = {0, 0, 0, 0};
	color[] = {0,0,0,0};
	text = "";
};

class RscDisplayMultiplayerSetup : RscStandardDisplay {
	west = "ca\ui\data\flag_bluefor_ca.paa";
	east = "ca\ui\data\flag_opfor_ca.paa";
	guer = "ca\ui\data\flag_indep_ca.paa";
	civl = "ca\ui\data\flag_civil_ca.paa";
	none = "ca\ui\data\flag_civil_ca.paa";
	westUnlocked = "ca\ui\data\flag_bluefor_ca.paa";
	westLocked = "ca\ui\data\flag_bluefor_ca.paa";
	eastUnlocked = "ca\ui\data\flag_opfor_ca.paa";
	eastLocked = "ca\ui\data\flag_opfor_ca.paa";
	guerUnlocked = "ca\ui\data\flag_indep_ca.paa";
	guerLocked = "ca\ui\data\flag_indep_ca.paa";
	civlUnlocked = "ca\ui\data\flag_civil_ca.paa";
	civlLocked = "ca\ui\data\flag_civil_ca.paa";
	disabledAllAI = $STR_DISP_MULTI_ENABLE_AI;
	enabledAllAI = $STR_DISP_MULTI_DISABLE_AI;
	hostLocked = $STR_DISP_MULTI_UNLOCK;
	hostUnlocked = $STR_DISP_MULTI_LOCK;
	colorNotAssigned[] = {0.4, 0.4, 0.4, 1};
	colorAssigned[] = {0.78, 0.39, 0, 1};
	colorConfirmed[] = {0, 1, 0, 1};
	class controlsbackground {
		class BlackBackground: RscText {
			idc = -1;
			x = "SafeZoneXAbs";
			y = "SafeZoneY";
			w = "SafeZoneWAbs";
			h = "SafeZoneH";
			colorBackground[] = {0,0,0,1};
		}
		class BackgroundPic: RscPictureKeepAspect
		{
			idc = -1;
			x="0.00001 * safezoneW + safezoneX";
			y="0.00001 * safezoneH + safezoneY";
			w="1 * safezoneW";
			h="1 * safezoneH";
			text = "z\addons\dayz_code\gui\sahrani.paa";
		};
		
		delete MP_roles_TitleBorder;
		delete TextBack;
		delete TextBorder;
		delete SidesBack;
		delete SidesBorder;
		delete ValueRolesBack;
		delete ValueRolesBorder;
		delete ValuePoolBack;
		delete ValuePoolBorder;
	};
	class controls {
		delete B_Civilian;
		delete B_Guerrila;
		delete B_East;
		delete B_West;
		delete B_Side;
		delete B_OK;
		delete B_Cancel;
		delete B_Kick;
		delete B_EnableAll;
		delete B_Lock;
		delete TextDescription;
		delete ValueDescription;
		delete TextMessage;
		delete ValueRoles;
		delete TextParam1;
		delete TextParam2;
		delete ValueParam1;
		delete ValueParam2;
		delete ValuePool;
		delete B_Params;
		delete Title;
		class CA_MP_roles_Title : CA_Title {
			idc = 1001;
			style = 2;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			colorBackground[] = {0, 0, 0, 0};
			text = "";
		};
		class CA_TextVotingTimeLeft : CA_MP_roles_Title {
			idc = 121;
			style = 1;
			x = "(50/100)	* SafeZoneW + SafeZoneX";
			y = "(02/100)	* SafeZoneH + SafeZoneY";
			w = "(45/100)	* SafeZoneW";
			h = "(06/100)	* SafeZoneH";
			colorBackground[] = {0, 0, 0, 0};
		};
		//delete CA_TextVotingTimeLeft;
		delete TextMission;
		delete ValueMission;
		delete CA_TextDescription;
		delete CA_ValueDescription;
		delete TextIsland;
		delete ValueIsland;
		delete TextSide;
		delete TextRoles;
		
		class CA_B_West : RscActiveText {
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			style = 0x02 + 0x100 + 0x40;
			type = 11;
			colorActive[] = {0, 0, 0, 0};
			colorDisabled[] = {0, 0, 0, 0};
			colorShade[] = {0, 0, 0, 0};
			colorText[] = {0, 0, 0, 0};
			pictureWidth = 0;
			pictureHeight = 0;
			textHeight = 0;
			sideDisabled = "ca\ui\data\flag_none_ca.paa";
			sideToggle = "ca\ui\data\flag_side_toggle_ca.paa";
			idc = 104;
			color[] = {0, 0, 0, 0};
			text = $STR_WEST;
			picture = "\ca\ui\data\flag_bluefor_ca.paa";
		};
		
		class CA_B_East : CA_B_West {
			idc = 105;
			y = 0;
			text = $STR_EAST;
			picture = "\ca\ui\data\flag_opfor_ca.paa";
		};
		
		class CA_B_Guerrila : CA_B_West {
			idc = 106;
			y = 0;
			text = $STR_GUERRILA;
			picture = "\ca\ui\data\flag_indep_ca.paa";
		};
		
		class CA_B_Civilian : CA_B_West {
			idc = 107;
			y = 0;
			text = $STR_CIVILIAN;
			picture = "\ca\ui\data\flag_civil_ca.paa";
		};
		
		class CA_ValueRoles : RscIGUIListBox {
			idc = 109;
			style = 16;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			color[] = {0, 0, 0, 0};
			colorSelect[] = {0, 0, 0, 0};
			colorSelectBackground[] = {0, 0, 0, 0};
			colorSelectBackground2[] = {0, 0, 0, 0};
			rowHeight = 0;
			colorText[] = {0, 0, 0, 0};
			colorPlayer[] = {0, 0, 0, 0};
			colorAI[] = {0, 0, 0, 0};
			colorNobody[] = {0, 0, 0, 0};
			enabledAI = "ca\ui\textures\ai2_on.paa";
			disabledAI = "ca\ui\textures\ai2_off.paa";
		};
		
		class TextPool : RscText {
			idc = 1006;
			style = 2;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			SizeEx = 0;
			text = $STR_DISP_SRVSIDE_POOL;
		};
		
		class CA_ValuePool : RscIGUIListBox {
			idc = 114;
			style = 16;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			color[] = {0, 0, 0, 0};
			colorSelect[] = {0, 0, 0, 0};
			colorSelectBackground[] = {0, 0, 0, 0};
			colorSelectBackground2[] = {0, 0, 0, 0};
			rows = 0;
			canDrag = 0;
		};
		
		class CA_B_EnableAll : RscShortcutButton {
			idc = 117;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
			
			class TextPos {
				left = -10000;
				top = -10000;
				right = -10000;
				bottom = -10000;
			};
			default = 0;
		};
		
		class CA_B_Lock : RscShortcutButton {
			idc = 118;
			x = "(39/100)	* SafeZoneW + SafeZoneX";
			y = "(93/100)	* SafeZoneH + SafeZoneY";
			w = 0.183825;
		};
		
		delete CA_B_Params;
		delete CA_B_DSinterface;
		delete CA_B_Kick;
		
		class SMD_ButtonDisconnect: RscButtonTextOnly
		{
			idc = 2;
			default = 0;
			shortcuts[] = {0x00050000 + 1};
			text = "Disconnect";
			align = "center";
			x = 0.223777 * safezoneW + safezoneX;
			y = 0.688041 * safezoneH + safezoneY;
			w = 0.154195 * safezoneW;
			h = 0.0470102 * safezoneH;
			colorText[] = {1,1,1,1};
			colorFocused[] = {0.1, 0.1, 0.1, 1};
			colorDisabled[] = {0.8,0.8,0.8,1};
			colorBackground[] = {0.1,0.1,0.1,0.95};
			colorBackgroundActive[] = {0.2,0.2,0.2,0.95};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.95};
			colorShadow[] = {0.023529,0,0.0313725,1};
			colorBorder[] = {0,0,0,1};
			borderSize = 0.0;
		};
		
		class SMD_ButtonContinue: RscButtonTextOnly
		{
			idc = 1;
			default = 1;
			shortcuts[] = {0x00050000 + 0, 28, 57, 156};
			text = "Play DayZ Sahrani";
			align = "center";
			x = 0.622028 * safezoneW + safezoneX;
			y = 0.688041 * safezoneH + safezoneY;
			w = 0.154195 * safezoneW;
			h = 0.0470102 * safezoneH;
			colorText[] = {1,1,1,1};
			colorFocused[] = {0.1, 0.1, 0.1, 1};
			colorDisabled[] = {0.8,0.8,0.8,1};
			colorBackground[] = {0.1,0.1,0.1,0.95};
			colorBackgroundActive[] = {0.2,0.2,0.2,0.95};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0.95};
			colorShadow[] = {0.023529,0,0.0313725,1};
			colorBorder[] = {0,0,0,1};
			borderSize = 0.0;
		};

		delete CA_ButtonContinue;
		delete CA_ButtonCancel;
	};
};
