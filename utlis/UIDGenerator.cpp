#include <iostream>

std::string UIDGenerator() {

    std::string generatedUID;
    for (int i = 0; i < 7; i++) {
        generatedUID += 'a' + rand() % 26;
        generatedUID += std::to_string(rand() % 10);
        generatedUID+= '-' + rand() % 1;
    }

    return generatedUID;
}
