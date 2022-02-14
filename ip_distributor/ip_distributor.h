//
// Created by kylich on 14.02.2022.
//

#ifndef IPHELPER_IP_DISTRIBUTOR_H
#define IPHELPER_IP_DISTRIBUTOR_H

#include <string>

enum class IPClass { kA, kB, kC, kD, kE };

class IPDistributor {
 public:
  static IPClass GetClass(std::string &binary_ip);
  static std::string GetClassStr(IPClass ip_class);
};

#endif  // IPHELPER_IP_DISTRIBUTOR_H
