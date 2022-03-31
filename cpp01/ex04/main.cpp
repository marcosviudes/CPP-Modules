#include <iostream>
#include <string>
#include <fstream>

static std::string	replaceLine(std::string line, std::string search, std::string replace)
{
	size_t	offset;
	size_t	start;
	size_t	end;
	std::string	newline;

	start = line.find(search);
	offset = 0;
	while (start != line.npos) {
		end = start + search.size();
		newline += (line.substr(offset, start) + replace);
		offset += end;
		start = line.substr(offset).find(search);
	}
	newline += line.substr(offset);
	if (!newline.size())
		return (line);
	return (newline);
}

int main(int argc, char **argv)
{
	std::ifstream input;
	std::ofstream output;
	std::string		filename;
	std::string		line;
	
	if(argc == 4)
	{
		filename = argv[1];
		input.open(argv[1]);
		output.open(filename.append(".replace"));
		if(!input.good() || !output.good())
		{
			output.close();
			input.close();
			std::cout << "File error" << std::endl;
			return(-1);
		}
		if(((std::string)argv[1]).empty() || ((std::string)argv[2]).empty())
		{
			std::cout << "Error: empty args are not valid" << std::endl;
			return(-2);
		}
		while (std::getline(input, line))
			output << replaceLine(line, argv[2], argv[3]) << std::endl;
		output.close();
		input.close();
		return(0);
	}
		std::cout << "Run: " << argv[0] << " [Filename] [To_replace] [Replace]" << std::endl;
	return(1);
}