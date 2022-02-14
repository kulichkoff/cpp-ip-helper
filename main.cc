#include <iostream>

#include "ip_translator/ip_translator.h"
#include "ip_distributor/ip_distributor.h"

int main(int argc, char *argv[])
{
    std::string ip = "10.168.0.1";
    std::string binIP = IPTranslator::TranslateToBin(ip);
    std::cout << binIP << "\n";
    IPClass ipClass = IPDistributor::GetClass(binIP);
    std::cout << IPDistributor::GetClassStr(ipClass) << "\n";
    return 0;
}
