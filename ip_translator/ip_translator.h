//
// Created by kylich on 14.02.2022.
//

#ifndef IPHELPER_IPTRANSLATOR_H
#define IPHELPER_IPTRANSLATOR_H

#include <string>

class IPTranslator {
public:
  static std::string TranslateToBin(std::string &ip_address);
  static std::string *Split(std::string &ip_address);
};

#endif//IPHELPER_IPTRANSLATOR_H
