#include "catch.hpp"
#include "entity.hpp"

TEST_CASE("Entities can be initialized and have the correct starting attributes." "[entity]") {
	entity testEntity(1);

	SECTION("An entity's ID correctly initializes to the given integer value.") {
		REQUIRE(testEntity.getID() == 1);
	}

	SECTION("A new entity's components vector correctly contains no elements.") {
		REQUIRE(testEntity.entityComponents.size() == 0);
	}
}