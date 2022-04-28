#include "AMateria.hpp"
#include "ICharacter.hpp"

#define NUM_INVENTORY 4
class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria*	_inventory[NUM_INVENTORY];
		int			_equipedInventory;
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &copy);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		Character &operator=( Character const &rhs);

};
