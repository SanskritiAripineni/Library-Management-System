#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include "LibraryItem.h"

class LibraryItemCollection {
private:
    std::vector<LibraryItem*> items;

public:
    // Function to add a library item to the collection
    void AddItem(LibraryItem* item) {
        if (item) {
            items.push_back(item);
            std::cout << "Item added successfully.\n";
        } else {
            std::cout << "Error: Invalid item object.\n";
        }
    }

    // Function to edit a library item in the collection
    void EditItem(int itemId) {
        LibraryItem* item = FindItemById(itemId);
        if (!item) {
            std::cout << "Item not found.\n";
            return;
        }

        std::cout << "Editing item: " << item->getId() << "\n";
        std::cout << "Select the attribute to edit: \n";
        std::cout << "1. Title\n";
        std::cout << "2. Author\n";
        std::cout << "3. ISBN\n";
        std::cout << "Enter choice: ";
        int choice;
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the newline character from the buffer

        switch (choice) {
            case 1: {
                std::string newTitle;
                std::cout << "Enter new title: ";
                std::getline(std::cin, newTitle);
                // item->setTitle(newTitle); // Need to implement in the derived classes
                break;
            }
            case 2: {
                std::string newAuthor;
                std::cout << "Enter new author: ";
                std::getline(std::cin, newAuthor);
                // item->setAuthor(newAuthor); // Need to implement in the derived classes
                break;
            }
            case 3: {
                int newISBN;
                std::cout << "Enter new ISBN: ";
                std::cin >> newISBN;
                // item->setISBN(newISBN); // Need to implement in the derived classes
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the buffer
                break;
            }
            default:
                std::cout << "Invalid choice. Returning to main menu.\n";
        }

        std::cout << "Item updated successfully.\n";
    }

    // Function to delete a library item from the collection
    void DeleteItem(int itemId) {
        auto it = std::find_if(items.begin(), items.end(), [itemId](const LibraryItem* item) {
            return item->getId() == itemId;
        });

        if (it != items.end()) {
            delete *it;
            items.erase(it);
            std::cout << "Item deleted successfully.\n";
        } else {
            std::cout << "Error: Item not found.\n";
        }
    }

    // Function to print all library items in the collection
    void PrintAllItems() const {
        if (items.empty()) {
            std::cout << "No items in the collection.\n";
            return;
        }

        std::cout << "Items in the collection:\n";
        for (const auto* item : items) {
            std::cout << "ID: " << item->getId() << ", Title: " << item->getTitle() << "\n"; // Need to implement in the derived classes
        }
    }

    // Function to find a library item by ID
    LibraryItem* FindItemById(int itemId) const {
        auto it = std::find_if(items.begin(), items.end(), [itemId](const LibraryItem* item) {
            return item->getId() == itemId;
        });

        return (it != items.end()) ? *it : nullptr;
    }
};


