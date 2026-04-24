#include <iostream>

std::string UIDGenerator() {
    std::string generatedUID;
    for (int i = 0; i < 12; i++) {
        if (i == 0) {
            for (int j = 0; j < 4; j++) {
                generatedUID += 'a' + rand() % 26;
            }
        }
        generatedUID += 'a' + rand() % 26;
        generatedUID += std::to_string(rand() % 10);
        if (i % 3 == 0) {
            generatedUID += '-';
        }
    }

    return generatedUID;
}
