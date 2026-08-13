#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (!checkStrings(s1))
        return 1;
    std::ifstream inFile;
    if (!openInputFile(inFile, filename))
        return 1;
    std::ofstream outFile;
    if (!openOutputFile(outFile, filename))
    {
        inFile.close();
        return 1;
    }
    processFile(inFile, outFile, s1, s2);
    inFile.close();
    outFile.close();
    return 0;
}
