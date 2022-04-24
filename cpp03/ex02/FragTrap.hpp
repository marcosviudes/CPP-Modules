#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &src);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &rhs);
		void 		attack(std::string const &target);
		void highFivesGuys(void);
};
