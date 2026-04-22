#include <iostream>

std::string GenerateAlphaNumericCode() {
    srand(time(0));

    std::string generatedNumber = "";
    for (int i = 0; i < 7; i++) {
        generatedNumber += 'A' + rand() % 26;
        generatedNumber += std::to_string(rand() % 10);
    }

    return generatedNumber;
}
