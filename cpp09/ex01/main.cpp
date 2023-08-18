#include "./RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try{
			RPN calc(argv[1]);
		}
		catch(char const * err){
			std::cerr << argv[0] << ": Error: " << err << std::endl;
		}
	}
	else
	{
		std::cerr << argv[0] << ": Invalid args use " << argv[0] << " [RPN NOTATION]" << std::endl;
		return(-1);
	}
	return(0);
}
