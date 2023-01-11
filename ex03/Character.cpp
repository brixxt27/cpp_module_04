#include "Character.hpp"

Character::Character(std::string& name)
	: _name(name)
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		_inventory[i] = NULL;
	}
}









Character::Character()
{
}
