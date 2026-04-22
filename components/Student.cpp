#include "Person.cpp"

class Student : public Person {
    std::string issuedItems[100];
    int count = 0;

public:
    void display() override {
        std::cout << "ID: " << getId() << std::endl << "Name: " << getName() << std::endl << "Email: " << getEmail();
    }

    void isIssuedItems(std::string& item) {
        this->issuedItems[this->count++] = item;
    }
};
