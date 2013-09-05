private["_display","_channelDisplay","_text","_channel"];
	disableSerialization;
	_channelDisplay = findDisplay 63;
	if( !isNull _channelDisplay) then {
		_text = _channelDisplay displayCtrl 101;
		_channel = ctrlText _text;
		if( _channel == localize "STR_SIDE_CHANNEL" ) then {
			cutText ["Do not talk in side chat!","PLAIN",2];
		};
	};