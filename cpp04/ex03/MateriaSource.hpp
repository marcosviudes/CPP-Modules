#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define NUM_INVENTORY 4

class AMateria;
class MateriaSource: public IMateriaSource
{
	private:
		/*Private variables*/
		bool _iceKnowledge;
		bool _cureKnoledge;
	public:
		MateriaSource(void);
		//MateriaSource(/*args*/);
		MateriaSource( MateriaSource const &copy);
		~MateriaSource();

		MateriaSource &operator=( MateriaSource const &rhs);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const &type);
};
