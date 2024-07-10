// LibraryItemCollection.h
#ifndef LIBRARYITEMCOLLECTION_H
#define LIBRARYITEMCOLLECTION_H

#include "LibraryItem.h"
#include <vector>
using namespace std;

class LibraryItemCollection {
private:
   vector<LibraryItem*> items;

public:
    void AddItem(LibraryItem* item);
    void EditItem(int itemId);
    void DeleteItem(int itemId);
    void PrintAllItems() const;
    LibraryItem* FindItemById(int itemId) const;
};

#endif // LIBRARYITEMCOLLECTION_H
