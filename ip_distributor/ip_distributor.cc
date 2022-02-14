//
// Created by kylich on 14.02.2022.
//

#include "ip_distributor.h"


IPClass IPDistributor::GetClass(std::string &binaryIP) {
    for (int i = 0; i < 5; i++)
    {
        if (binaryIP[i] == '0') { return IPClass(i); }
    }
    return IPClass(-1);
}

std::string IPDistributor::GetClassStr(IPClass ipClass) {
    switch (ipClass) {
        case IPClass::A: return "A";
        case IPClass::B: return "B";
        case IPClass::C: return "C";
        case IPClass::D: return "D";
        case IPClass::E: return "E";
        default: return "unknown";
    }
}
