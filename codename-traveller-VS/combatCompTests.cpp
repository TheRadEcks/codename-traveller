#include "catch.hpp"
#include "combatComp.hpp"

TEST_CASE("Combat components correctly initialize.", "[component]") {

	attributesComp testAttribs(1, 1, 1, 1, 1, 1, 1, 1);
	derivedAttribComp testDerivedAttribs(1, 1, 1);
	woundAttribComp testWoundAttribs(1, 1);
	resistanceComp testResistances(1, 1);
	skillComp testSkills;
	equipComp testEquip(1, 1, 1, 1);
	carriedItemComp testCarried(1, 1, 1);

	SECTION("Attributes correctly initialize.") {
		REQUIRE(testAttribs.vitality == 1);
		REQUIRE(testAttribs.power == 1);
		REQUIRE(testAttribs.potency == 1);
		REQUIRE(testAttribs.dexterity == 1);
		REQUIRE(testAttribs.endurance == 1);
		REQUIRE(testAttribs.awareness == 1);
		REQUIRE(testAttribs.luck == 1);
	}

	SECTION("Derived attributes correctly initialize.") {
		REQUIRE(testDerivedAttribs.armor == 1);
		REQUIRE(testDerivedAttribs.evasion == 1);
		REQUIRE(testDerivedAttribs.initiative == 1);
	}

	SECTION("Wound attributes correctly initialize.") {
		REQUIRE(testWoundAttribs.wounds == 1);
		REQUIRE(testWoundAttribs.woundGrowth == 1);
	}

	SECTION("Resistance attributes correctly initialize.") {
		REQUIRE(testResistances.physicalResist == 1);
		REQUIRE(testResistances.magicResist == 1);
	}

	SECTION("Skills container correctly initializes.") {
		REQUIRE(testSkills.skillIDs.size() == 0);
	}

	SECTION("Equipment slots correctly initialize.") {
		REQUIRE(testEquip.mainhandID == 1);
		REQUIRE(testEquip.offhandID == 1);
		REQUIRE(testEquip.bodyID == 1);
		REQUIRE(testEquip.accessoryID == 1);
	}

	SECTION("Carried item slots correctly initialize.") {
		REQUIRE(testCarried.miscItemID1 == 1);
		REQUIRE(testCarried.miscItemID2 == 1);
		REQUIRE(testCarried.miscItemID3 == 1);
	}
}