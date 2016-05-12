#include "entity.hpp"

//Private

//Protected

//Public
entity::entity(int newID) : entityID(newID) {};
int entity::getID() {
	return entityID;
}