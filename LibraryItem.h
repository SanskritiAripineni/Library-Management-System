#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>

using namespace std;

class LibraryItem {
public:
    enum class Status { IN, OUT, LOST };

    // Constructor
    LibraryItem(int id, double cost, Status status, int loanPeriod);

    // Virtual destructor
    virtual ~LibraryItem() {}

    // Accessor functions
    int getID() const;
    double getCost() const;
    Status getStatus() const;
    int getLoanPeriod() const;

    // Mutator functions
    void setID(int id);
    void setCost(double cost);
    void setStatus(Status status);
    void setLoanPeriod(int loanPeriod);

    // Virtual function for printing details
    virtual void printDetails() const = 0;

private:
    int id;
    double cost;
    Status status;
    int loanPeriod;
};

ostream& operator<<(std::ostream& os, const LibraryItem& item);


#endif // LIBRARYITEM_H
