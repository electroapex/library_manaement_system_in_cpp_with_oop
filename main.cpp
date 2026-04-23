#include "header_files/json.hpp"
#include "components/Person.cpp"
#include  "utlis/AlphaNumericCodeGenerator.cpp"

using json = nlohmann::json;
#include <iostream>

int main() {
   std::cout <<  AlphaNumericCodeGenerator();

   return 0;
}