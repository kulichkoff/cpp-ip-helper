//
// Created by kylich on 14.02.2022.
//

#ifndef IPHELPER_IPTRANSLATOR_H
#define IPHELPER_IPTRANSLATOR_H

#include <string>

class IPTranslator {
public:
    static std::string TranslateToBin(std::string &ipAddress);
    static std::string *Split(std::string &ipAddress);
};

#endif //IPHELPER_IPTRANSLATOR_H
