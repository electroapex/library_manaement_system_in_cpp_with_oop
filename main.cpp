#include "header_files/json.hpp"
#include "components/Person.cpp"
#include  "utlis/GenerateAlphaNumericCode.cpp"

using json = nlohmann::json;
#include <iostream>

int main() {
   std::cout <<  GenerateAlphaNumericCode();

   return 0;
}