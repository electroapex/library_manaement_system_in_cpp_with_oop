#include <iostream>

class Person {
    int id;
    std::string name, email;

public:
    int getId() const {
        return this->id;
    };

    void setId(int id) {
        this->id = id;
    }

   std:: string getName() const {
        return this->name;
    }

    void setName(std::string name) {
        this->name = name;
    }

   std:: string getEmail() const {
        return this->email;
    }

    void setEmail(std::string email) {
        this->email = email;
    }

    virtual void display() = 0;

    virtual ~Person();
};
