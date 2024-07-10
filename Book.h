#ifndef BOOK_H
#define BOOK_H

#include "LibraryItem.h"
#include <string>

using namespace std;

class Book : public LibraryItem {
public:
    // Constructor
    Book(int id, double cost, Status status, int loanPeriod,
         const string& title, const string& author,
         const string& isbn, const string& category);

    // Accessor functions
    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
    string getCategory() const;

    // Mutator functions
    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setISBN(const string& isbn);
    void setCategory(const string& category);

    // Override printDetails
    virtual void printDetails() const override;

private:
    string title;
    string author;
    string isbn;
    string category;
};

#endif // BOOK_H
