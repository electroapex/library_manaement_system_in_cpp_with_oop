#include <iostream>

class Items {
    std::string title, isbn, author;
    int copies;

public:
    std::string getTitle() {
        return this->title;
    }

    void setTitle(std::string &title) {
        this->title = title;
    }

    std::string getISBN() {
        return this->isbn;
    }

    void setISBN(std::string &isbn) {
        this->isbn = isbn;
    }

    std::string getAuthor() {
        return this->author;
    }

    void setAuthor(std::string &author) {
        this->author = author;
    }

    int getCopies() const {
        return this->copies;
    }

    void setCopies(int &copies) {
        this->copies = copies;
    }

    virtual bool isIssue() = 0;

    virtual void display() = 0;

   virtual  ~Items();
};
