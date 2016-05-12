#include "combatComp.hpp"

attributesComp::attributesComp(int newVit, int newPow, int newPot, int newDex, int newEnd, int newRes, int newAwa, int newLuk)
	: vitality(newVit), power(newPow), potency(newPot), dexterity(newDex), endurance(newEnd), awareness(newAwa), luck(newLuk) {};

derivedAttribComp::derivedAttribComp(int newArm, int newEva, int newInit) : armor(newArm), evasion(newEva), initiative(newInit) {};

woundAttribComp::woundAttribComp(int newWnd, int newWndGrth) : wounds(newWnd), woundGrowth(newWndGrth) {};

resistanceComp::resistanceComp(int newPhysRes, int newMagRes) : physicalResist(newPhysRes), magicResist(newMagRes) {};

equipComp::equipComp(int newMainHnd, int newOffHnd, int newBody, int newAcc) : mainhandID(newMainHnd), offhandID(newOffHnd), bodyID(newBody), accessoryID(newAcc) {};

carriedItemComp::carriedItemComp(int newMisc1, int newMisc2, int newMisc3) : miscItemID1(newMisc1), miscItemID2(newMisc2), miscItemID3(newMisc3) {};