//
// Created by kylich on 14.02.2022.
//

#include "ip_distributor.h"

IPClass IPDistributor::GetClass(std::string &binary_ip) {
  for (int i = 0; i < 5; i++) {
    if (binary_ip[i] == '0') {
      return IPClass(i);
    }
  }
  return IPClass(-1);
}

std::string IPDistributor::GetClassStr(IPClass ip_class) {
  switch (ip_class) {
    case IPClass::kA:
      return "A";
    case IPClass::kB:
      return "B";
    case IPClass::kC:
      return "C";
    case IPClass::kD:
      return "D";
    case IPClass::kE:
      return "E";
    default:
      return "unknown";
  }
}
