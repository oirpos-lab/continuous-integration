#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string line;
    std::ifstream fin("textfile.txt");

    if (fin.is_open())
    {
        while (getline(fin, line))
        {
            std::cout << line << std::endl;
        }
        fin.close();
    }
    else
    {
        std::cout << "File `textfile.txt` not found!" << std::endl;
    }

    return 0;
}