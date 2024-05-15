
params ["_time2"];
"chromAberration" ppEffectEnable true; 
"radialBlur" ppEffectEnable true; 
enableCamShake true; 
drug_time = drug_time + (round(_time2 - (_time2/2 * life_chemResistant))); 
_time = (round(_time2 - (_time2/2 * life_chemResistant))); 

//Let's go for 45secs of effetcs 
addcamShake[3, _time + 8, 10]; 
for "_i" from 1 to _time do 
{ 
    "chromAberration" ppEffectAdjust [0.1,0.1,true]; 
    "chromAberration" ppEffectCommit 1; 
    sleep 1; 
}; 
drug_time = drug_time - _time; 
if (drug_time <= 0) then 
    { 
        //Stop effects 
        drug_time = 0; 
        "chromAberration" ppEffectAdjust [0,0,true]; 
        "chromAberration" ppEffectCommit 3; 
        sleep 4; 
        //Deactivate ppEffects 
        "chromAberration" ppEffectEnable false; 
        "radialBlur" ppEffectEnable false; 
    };