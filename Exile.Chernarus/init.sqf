[] execVM "rearm\takegive_poptab_init.sqf";

SA_MAX_TOWED_CARGO = 2;
SA_TOW_LOCKED_VEHICLES_ENABLED = false;

if(hasInterface) then{
    [] execVM "rearm\service_point.sqf";
};
