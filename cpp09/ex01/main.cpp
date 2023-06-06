#include "./RPN.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		try{
			RPN calc(argv[1]);
		}
		catch(std::exception &e){
			std::cerr << argv[0] << ": Error: " << e.what() << std::endl;
		}
	}
	else
	{
		std::cerr << argv[0] << ": Error: Invalid args use: " << argv[0] << " [RPN NOTATION]" << std::endl;
		return(-1);
	}
	return(0);
}
