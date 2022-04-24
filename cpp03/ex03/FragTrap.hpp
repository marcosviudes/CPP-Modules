#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	private:
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &rhs);
		void 		attack(std::string const &target);
		void highFivesGuys(void);
};
