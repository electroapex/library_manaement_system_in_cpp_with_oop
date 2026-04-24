// #include "header_files/json.hpp"
// using json = nlohmann::json;
#include <iostream>

std::string AlphaNumericCodeGenerator();
std::string UIDGenerator();

int main() {
   std::cout <<  AlphaNumericCodeGenerator() << std::endl;
   std::cout <<  UIDGenerator() << std::endl;

   return 0;
}