#include "Book.h"
#include <iostream>

// Constructor
Book::Book(int id, double cost, Status status, int loanPeriod,
           const string& title, const string& author,
           const string& isbn, const string& category)
    : LibraryItem(id, cost, status, loanPeriod),
      title(title), author(author), isbn(isbn), category(category) {}

// Accessor functions
string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

string Book::getISBN() const {
    return isbn;
}

string Book::getCategory() const {
    return category;
}

// Mutator functions
void Book::setTitle(const string& title) {
    this->title = title;
}

void Book::setAuthor(const string& author) {
    this->author = author;
}

void Book::setISBN(const string& isbn) {
    this->isbn = isbn;
}

void Book::setCategory(const string& category) {
    this->category = category;
}

// Override printDetails
void Book::printDetails() const {
    cout << "Title: " << title << ", Author: " << author
         << ", ISBN: " << isbn << ", Category: " << category << endl;
}
