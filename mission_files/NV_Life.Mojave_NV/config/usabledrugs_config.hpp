/*
    File: usabledrugs_config.hpp
    Author: ArmaServices.net Dev Team (Armaservices.net)
    Description: Master config for ASN Useable Drugs. 
*/

class usabledrugs_config {
	
    version = 5; // version 3.x -> 3 | 4.0 - 4.3 -> 4 | version 4.4+ -> 5
	
	////////////////////////////////////// Text /////////////////////////////////////////
	passout = "You pass out due to your drug addiction.";
	temporary = "You feel temporary relief after taking more drugs.";
	addicted = "You're addicted to drugs. Go to a doctor or use some fixer.";
	cure = "You have been cured of your drug addiction.";

	////////////////////////////////////// Addiction /////////////////////////////////////
	enable_addiction = "true"; //Enable debuffs for taking tomany drugs
	addictionvalue = 10;// The ammount of drugs you can take before you get addicted and require treatment.
	faintchance = 5;//The Percent chance that you will faint every 30 seconds when addicted.	
	curecost = 5000;//The Percent chance that you will faint every 30 seconds when addicted.
	
	///////////////////////////////////// Effects ////////////////////////////////////////
	Sprintspeedboost = 1.0; //The boost added to the players speed. 1 is 100% faster then default 0.50 is 50% faster and 0.05 is 5% faster
	recoil = 0.5; //0.5 is 50% less recoil. 0.75% is 25% less recoil 0 is no recoil.
	
};