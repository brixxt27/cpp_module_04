#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define CNT_INVENTORY 4

class Character : public ICharacter
{
public:
	Character(std::string& name);
	Character(const Character& other);
	Character&	operator=(const Character& rhs);
	virtual ~Character();
	
	virtual std::string const &	getName() const;

	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

private:
	std::string	_name;
	AMateria*	_inventory[4];

	Character();
};

#endif
