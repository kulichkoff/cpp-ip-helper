//
// Created by kylich on 14.02.2022.
//

#ifndef IPHELPER_IP_DISTRIBUTOR_H
#define IPHELPER_IP_DISTRIBUTOR_H

#include <string>

enum class IPClass { A, B, C, D, E };

class IPDistributor {
public:
    static IPClass GetClass(std::string &binaryIP);
    static std::string GetClassStr(IPClass ipClass);
};


#endif //IPHELPER_IP_DISTRIBUTOR_H
