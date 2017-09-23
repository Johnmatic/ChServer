/**
 * ExileClient_gui_selectSpawnLocation_show
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_display","_spawnButton","_spawnButton2","_tipText","_tipTextList","_listBox","_listItemIndex","_numberOfSpawnPoints","_randNum","_randData","_randomSpawnIndex"];
disableSerialization;
ExileClientSpawnLocationSelectionDone = false;
ExileClientSelectedSpawnLocationMarkerName = "";
createDialog "xstremeGroundorHaloDialog";
_display = uiNamespace getVariable ["xstremeGroundorHaloDialog",displayNull];
_display displayAddEventHandler ["KeyDown", "_this call ExileClient_gui_loadingScreen_event_onKeyDown"];
_spawnButton = _display displayCtrl 1600;
_spawnButton2 = _display displayCtrl 1601;
_spawnButton ctrlEnable false;
_spawnButton2 ctrlEnable false;
_tipText = _display displayCtrl 1204;
_listBox = _display displayCtrl 1500;
lbClear _listBox;
{
	if (getMarkerType _x == "ExileSpawnZone") then
	{
		_listItemIndex = _listBox lbAdd (markerText _x);
		_listBox lbSetData [_listItemIndex, _x];
	};
}
forEach allMapMarkers;
_numberOfSpawnPoints = {getMarkerType _x == "ExileSpawnZone"} count allMapMarkers;
if (_numberOfSpawnPoints > 0) then 
{
	_randNum = floor(random _numberOfSpawnPoints);
	_randData = lbData [1500,_randNum];
	_randomSpawnIndex = _listBox lbAdd "Random";
	_listBox lbSetData [_randomSpawnIndex, _randData];
};

_tipTextList = selectRandom 
[
	"There is no such a place as safezone...",
	"Be sure to read server rules in XM8 App",
	"This is a game of loss, its a wild world out there, good luck!",
	"Enjoy the server... Please consider donating to help keep us alive",
	"Feel free to visit office at bash",
	"Good luck!",
	"Traders are looking badly for rubber ducks, old money and dog tags... You can get paid well for those!",
	"Some militarized group set up a camp at Green Mountain, go visit and trade with them."
];
_tipText ctrlSetStructuredText parseText format["<t size ='1.8 / (getResolution select 5)' valign='middle' align='right'>[ %1 ]</t>",_tipTextList];

true