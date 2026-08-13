#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>

bool    checkStrings(const std::string &s1);
bool    openInputFile(std::ifstream &inFile, const std::string &filename);
bool    openOutputFile(std::ofstream &outFile, const std::string &filename);
void    replaceLine(std::string &line, const std::string &s1, const std::string &s2);
void    processFile(std::ifstream &inFile, std::ofstream &outFile,
                    const std::string &s1, const std::string &s2);

#endif