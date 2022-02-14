//
// Created by kylich on 14.02.2022.
//

#include "ip_translator.h"

#include <bitset>

std::string IPTranslator::TranslateToBin(std::string &ip_address) {
  std::string bin_ip;
  std::string *octets = IPTranslator::Split(ip_address);

  for (int i = 0; i < 4; i++) {
    int decimal_octet_number = std::stoi(octets[i]);
    bin_ip += std::bitset<8>(decimal_octet_number).to_string();
    if (i != 3) {
      bin_ip += ".";
    }
  }

  delete[] octets;
  return bin_ip;
}

std::string *IPTranslator::Split(std::string &ip_address) {
  std::string ip_copy = ip_address;
  std::string delimiter = ".";
  size_t pos = 0;
  std::string token;
  auto *splices = new std::string[4];

  for (int i = 0; (pos = ip_copy.find(delimiter)) != std::string::npos; i++) {
    token = ip_copy.substr(0, pos);
    splices[i] = token;
    ip_copy.erase(0, pos + delimiter.length());
  }
  splices[3] = ip_copy;

  return splices;
}
