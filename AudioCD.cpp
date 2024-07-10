#include "AudioCD.h"
#include <iostream>

// Constructor
AudioCD::AudioCD(int id, double cost, Status status, int loanPeriod,
                 const std::string& artist, const std::string& title,
                 int numTracks, const std::string& releaseDate,
                 const std::string& genre)
    : LibraryItem(id, cost, status, loanPeriod),
      artist(artist), title(title), numTracks(numTracks),
      releaseDate(releaseDate), genre(genre) {}

// Accessor functions
std::string AudioCD::getArtist() const {
    return artist;
}

std::string AudioCD::getTitle() const {
    return title;
}

int AudioCD::getNumTracks() const {
    return numTracks;
}

std::string AudioCD::getReleaseDate() const {
    return releaseDate;
}

std::string AudioCD::getGenre() const {
    return genre;
}

// Mutator functions
void AudioCD::setArtist(const std::string& artist) {
    this->artist = artist;
}

void AudioCD::setTitle(const std::string& title) {
    this->title = title;
}

void AudioCD::setNumTracks(int numTracks) {
    this->numTracks = numTracks;
}

void AudioCD::setReleaseDate(const std::string& releaseDate) {
    this->releaseDate = releaseDate;
}

void AudioCD::setGenre(const std::string& genre) {
    this->genre = genre;
}

// Override printDetails function
void AudioCD::printDetails() const {
    std::cout << "Audio CD Details:" << std::endl;
    LibraryItem::printDetails(); // Call base class printDetails
    std::cout << "Artist: " << artist << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Number of Tracks: " << numTracks << std::endl;
    std::cout << "Release Date: " << releaseDate << std::endl;
    std::cout << "Genre: " << genre << std::endl;
}
