#include <iostream>

#include "ip_translator/ip_translator.h"

int main(int argc, char *argv[])
{
    std::string ip = "192.168.0.1";
    std::string *stringVector = IPTranslator::Split(ip);
    std::string binIP = IPTranslator::TranslateToBin(ip);

    for (int i = 0; i < 4; i++)
    {
        std::cout << stringVector[i] << std::endl;
    }

    std::cout << binIP << std::endl;

    delete[] stringVector;
    return 0;
}
