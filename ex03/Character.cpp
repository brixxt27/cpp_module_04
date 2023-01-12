#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character(std::string name)
	: _name(name)
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		_slot[i] = NULL;
	}
}

Character::Character(const Character& other)
	: _name(other._name)
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		if (other._slot[i] == NULL)
			_slot[i] = NULL;
		else {
			if (other._slot[i]->getType() == "ice")
				_slot[i] = new Ice();
			else
				_slot[i] = new Cure();
		}
	}
}

Character&	Character::operator=(const Character& rhs)
{
	if (this != &rhs) {
		_name = rhs._name;

		for (int i = 0; i < CNT_INVENTORY; ++i) {
			if (_slot[i] != NULL) {
				delete _slot[i];
			}

			if (rhs._slot[i] == NULL) {
				_slot[i] = NULL;
			}				
			else {
				if (rhs._slot[i]->getType() == "ice")
					_slot[i] = new Ice();
				else
					_slot[i] = new Cure();
			}
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		if (_slot[i] != NULL)
			delete _slot[i];
	}
}

std::string const &	Character::getName() const
{
	return _name;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < CNT_INVENTORY; ++i) {
		if (_slot[i] != NULL) {
			_slot[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || _slot[idx] == NULL)
		return;
	_slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || _slot[idx] == NULL)
		return;
	
	_slot[idx]->use(target);
}


Character::Character()
{
}
