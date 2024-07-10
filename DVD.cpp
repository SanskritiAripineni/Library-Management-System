#include "DVD.h"
#include <iostream>

// Constructor
DVD::DVD(int id, double cost, Status status, int loanPeriod,
         const std::string& title, const std::string& category,
         int runTime, const std::string& studio, const std::string& releaseDate)
    : LibraryItem(id, cost, status, loanPeriod),
      title(title), category(category), runTime(runTime),
      studio(studio), releaseDate(releaseDate) {}

// Accessor functions
std::string DVD::getTitle() const {
    return title;
}

std::string DVD::getCategory() const {
    return category;
}

int DVD::getRunTime() const {
    return runTime;
}

std::string DVD::getStudio() const {
    return studio;
}

std::string DVD::getReleaseDate() const {
    return releaseDate;
}

// Mutator functions
void DVD::setTitle(const std::string& title) {
    this->title = title;
}

void DVD::setCategory(const std::string& category) {
    this->category = category;
}

void DVD::setRunTime(int runTime) {
    this->runTime = runTime;
}

void DVD::setStudio(const std::string& studio) {
    this->studio = studio;
}

void DVD::setReleaseDate(const std::string& releaseDate) {
    this->releaseDate = releaseDate;
}

// Override printDetails function
void DVD::printDetails() const {
    std::cout << "DVD Details:" << std::endl;
    LibraryItem::printDetails(); // Call base class printDetails
    std::cout << "Title: " << title << std::endl;
    std::cout << "Category: " << category << std::endl;
    std::cout << "Run Time: " << runTime << " minutes" << std::endl;
    std::cout << "Studio: " << studio << std::endl;
    std::cout << "Release Date: " << releaseDate << std::endl;
}
