#include <iostream>

#include "IPTranslator/IPTranslator.h"

int main(int argc, char *argv[])
{
    std::string ip = "192.168.0.1";
    std::string *stringVector = IPTranslator::split(ip);
    std::string binIP = IPTranslator::translateToBin(ip);

    for (int i = 0; i < 4; i++)
    {
        std::cout << stringVector[i] << std::endl;
    }

    std::cout << binIP << std::endl;

    delete[] stringVector;
    return 0;
}
