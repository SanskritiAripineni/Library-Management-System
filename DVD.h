#ifndef DVD_H
#define DVD_H

#include "LibraryItem.h"
#include <string>

class DVD : public LibraryItem {
public:
    // Constructor
    DVD(int id, double cost, Status status, int loanPeriod, const std::string& title,
        const std::string& category, int runTime, const std::string& studio,
        const std::string& releaseDate);

    // Accessor functions
    std::string getTitle() const;
    std::string getCategory() const;
    int getRunTime() const;
    std::string getStudio() const;
    std::string getReleaseDate() const;

    // Mutator functions
    void setTitle(const std::string& title);
    void setCategory(const std::string& category);
    void setRunTime(int runTime);
    void setStudio(const std::string& studio);
    void setReleaseDate(const std::string& releaseDate);

    // Override printDetails function
    virtual void printDetails() const override;

private:
    std::string title;
    std::string category;
    int runTime;
    std::string studio;
    std::string releaseDate;
};

#endif // DVD_H
