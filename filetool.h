#ifndef FILETOOL_H
#define FILETOOL_H
#include <iostream>
#include <fstream>
#include <string>

class fileTool
{
public:
    static void writefile(const std::string& file, const std::string& text)
    {
        std::ofstream f(file.c_str(), std::ios::app);
        if (f.is_open())
        {
            f << text << std::endl;
            f.close();
        }
        else
        {
            std::cout << "File don't open" << std::endl;
        }
    }

    static void readAllLines(const std::string& file)
    {
        std::ifstream f(file);
        if (f.is_open())
        {
            std::string line;
            while (std::getline(f, line))
                std::cout << line << std::endl;
            f.close();
        }
        else
        {
            std::cout << "File don't open";
        }
    }

private:
         // std::string file("C:\\Users\\user\\DEV\\PROJECTS\\laboQt\\data.txt");
};

#endif // FILETOOL_H
