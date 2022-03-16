
#include "Replace.hpp"
#include <string>
#include <iostream>

Replace::Replace()
{
}

void Replace::setString1(std::string s1){
    _s1 = s1;
}
void Replace::setString2(std::string s2){
    _s2 = s2;
}
void Replace::setFilename(std::string filename){
    _filename = filename;
}

std::string	Replace::getString1(void){
    return(_s1);
}
std::string	Replace::getString2(void){
    return(_s2);
}
std::string	Replace::getFilename(void){
    return(_filename);
}

Replace::~Replace()
{
}
