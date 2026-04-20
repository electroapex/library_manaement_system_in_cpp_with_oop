#include <iostream>

using namespace std;

class Person {
    int id;
    string name, email;

public:
    int getId() const {
        return this->id;
    };

    void setId(int id) {
        this->id = id;
    }

    string getName() const {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getEmail() const {
        return this->email;
    }

    void setEmail(string email) {
        this->email = email;
    }

    virtual void display() = 0;

    virtual ~Person();
};
