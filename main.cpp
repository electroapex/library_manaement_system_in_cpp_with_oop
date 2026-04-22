#include "header_files/json.hpp"
#include "components/Person.cpp"
#include  "utlis/RandomNumberGenerator.cpp"

using json = nlohmann::json;
#include <iostream>

int main() {
   std::cout <<  RandomNumberGenerator();

   return 0;
}