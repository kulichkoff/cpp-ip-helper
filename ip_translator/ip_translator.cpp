//
// Created by kylich on 14.02.2022.
//

#include <bitset>

#include "ip_translator.h"


std::string IPTranslator::TranslateToBin(std::string &ipAddress)
{
    std::string binIP;
    std::string* octets = IPTranslator::Split(ipAddress);

    for (int i = 0; i < 4; i++)
    {
        int decimalOctetNumber = std::stoi(octets[i]);
        binIP += std::bitset<8>(decimalOctetNumber).to_string();
        if (i != 3) { binIP += "."; }
    }

    delete[] octets;
    return binIP;
}

std::string *IPTranslator::Split(std::string &ipAddress)
{
    std::string ipCopy = ipAddress;
    std::string delimiter = ".";
    size_t pos = 0;
    std::string token;
    auto *splices = new std::string[4];

    for (int i = 0; (pos = ipCopy.find(delimiter)) != std::string::npos; i++)
    {
        token = ipCopy.substr(0, pos);
        splices[i] = token;
        ipCopy.erase(0, pos + delimiter.length());
    }
    splices[3] = ipCopy;

    return splices;
}
