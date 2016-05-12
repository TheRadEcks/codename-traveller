#pragma once

#include "component.hpp"
#include <vector>

class attributesComp : public component {
private:
protected:
public:
	int vitality, power, potency, dexterity, endurance, resistance, awareness, luck;
	attributesComp(int, int, int, int, int, int, int, int);
};

class derivedAttribComp : public component {
private:
protected:
public:
	int armor, evasion, initiative;
	derivedAttribComp(int, int, int);
};

class woundAttribComp : public component {
private:
protected:
public:
	int wounds, woundGrowth;
	woundAttribComp(int, int);
};

class resistanceComp : public component {
private:
protected:
public:
	int physicalResist, magicResist;
	resistanceComp(int, int);
};

class skillComp : public component {
private:
protected:
public:
	std::vector<int> skillIDs;
};

class equipComp : public component {
private:
protected:
public:
	int mainhandID, offhandID, bodyID, accessoryID;
	equipComp(int, int, int, int);
};

class carriedItemComp : public component {
private:
protected:
public:
	int miscItemID1, miscItemID2, miscItemID3;
	carriedItemComp(int, int, int);
};