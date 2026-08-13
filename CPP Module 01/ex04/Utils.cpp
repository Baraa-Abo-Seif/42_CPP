#include "Replace.hpp"

bool checkStrings(const std::string &s1)
{
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return false;
    }
    return true;
}

bool openInputFile(std::ifstream &inFile, const std::string &filename)
{
    inFile.open(filename.c_str());
    if (!inFile.is_open())
    {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return false;
    }
    return true;
}

bool openOutputFile(std::ofstream &outFile, const std::string &filename)
{
    outFile.open((filename + ".replace").c_str());
    if (!outFile.is_open())
    {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return false;
    }
    return true;
}

void replaceLine(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;

    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
}

void processFile(std::ifstream &inFile, std::ofstream &outFile,
                 const std::string &s1, const std::string &s2)
{
    std::string line;

    while (std::getline(inFile, line))
    {
        replaceLine(line, s1, s2);

        outFile << line;
        if (!inFile.eof())
            outFile << std::endl;
    }
}
