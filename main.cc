#include <iostream>

#include "ip_distributor/ip_distributor.h"
#include "ip_translator/ip_translator.h"

int main(int argc, char *argv[]) {
  std::string ip = "10.168.0.1";
  std::string bin_ip = IPTranslator::TranslateToBin(ip);
  std::cout << bin_ip << "\n";
  IPClass ip_class = IPDistributor::GetClass(bin_ip);
  std::cout << IPDistributor::GetClassStr(ip_class) << "\n";
  return 0;
}
