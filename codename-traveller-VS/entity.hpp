#pragma once

#include <vector>
#include "component.hpp"

class entity {
private:
	//Members
	int entityID;

	//Methods

protected:
	//Members

	//Methods

public:
	//Members
	std::vector<component *> entityComponents;

	//Methods
	entity(int);
	int getID();
};