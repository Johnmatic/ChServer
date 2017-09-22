/**
 * ExileClient_util_gear_calculateSellPrice
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */

private["_className", "_amount"];
_className = _this;
_amount = 0;

_amount = getNumber (missionConfigFile >> "CfgExileArsenal" >> _className >> "sellPrice");

if (_amount == 0) then 
{
	_amount = getNumber (missionConfigFile >> "CfgExileArsenal" >> _className >> "price");
	_amount = _amount * (getNumber (missionConfigFile >> "CfgTrading" >> "sellPriceFactor"));
	_amount = (floor _amount) max 1;
};
_amount