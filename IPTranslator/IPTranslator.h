//
// Created by kylich on 14.02.2022.
//

#include <string>

#ifndef IPHELPER_IPTRANSLATOR_H
#define IPHELPER_IPTRANSLATOR_H


class IPTranslator {
public:
    static std::string translateToBin(std::string &ipAddress);
    static std::string *split(std::string &ipAddress);
};

#endif //IPHELPER_IPTRANSLATOR_H
