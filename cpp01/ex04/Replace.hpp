#include <string>
#include <iostream>
#include <fstream>

class Replace{
	private:
		std::fstream	_file;
		std::string		_filename;
		std::string		_s1;
		std::string		_s2;
	public:
		Replace(/* args */);
		~Replace();

		void setString2(std::string s1);
		void setString1(std::string s2);
		void setFilename(std::string filename);

		std::string	getString1(void);
		std::string	getString2(void);
		std::string	getFilename(void);
};