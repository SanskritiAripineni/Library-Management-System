#ifndef AUDIOCD_H
#define AUDIOCD_H

#include "LibraryItem.h"
#include <string>

class AudioCD : public LibraryItem {
public:
    // Constructor
    AudioCD(int id, double cost, Status status, int loanPeriod, const std::string& artist,
            const std::string& title, int numTracks, const std::string& releaseDate,
            const std::string& genre);

    // Accessor functions
    std::string getArtist() const;
    std::string getTitle() const;
    int getNumTracks() const;
    std::string getReleaseDate() const;
    std::string getGenre() const;

    // Mutator functions
    void setArtist(const std::string& artist);
    void setTitle(const std::string& title);
    void setNumTracks(int numTracks);
    void setReleaseDate(const std::string& releaseDate);
    void setGenre(const std::string& genre);

    // Override printDetails function
    virtual void printDetails() const override;

private:
    std::string artist;
    std::string title;
    int numTracks;
    std::string releaseDate;
    std::string genre;
};

#endif // AUDIOCD_H
