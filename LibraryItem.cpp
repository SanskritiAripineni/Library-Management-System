#include "LibraryItem.h"
using namespace std;
// Constructor
LibraryItem::LibraryItem(int id, double cost, Status status, int loanPeriod)
    : id(id), cost(cost), status(status), loanPeriod(loanPeriod) {}

// Accessor functions
int LibraryItem::getID() const {
    return id;
}

double LibraryItem::getCost() const {
    return cost;
}

LibraryItem::Status LibraryItem::getStatus() const {
    return status;
}

int LibraryItem::getLoanPeriod() const {
    return loanPeriod;
}

// Mutator functions
void LibraryItem::setCost(double cost) {
    this->cost = cost;
}

void LibraryItem::setStatus(Status status) {
    this->status = status;
}

void LibraryItem::setLoanPeriod(int loanPeriod) {
    this->loanPeriod = loanPeriod;
}

ostream& operator<<(std::ostream& os, const LibraryItem& item) {
    os << "ID: " << item.getID() << ", Cost: " << item.getCost()
       << ", Status: " << static_cast<int>(item.getStatus())
       << ", Loan Period: " << item.getLoanPeriod();
    return os;
}