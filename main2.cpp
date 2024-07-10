main.cpp
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include "LibraryItem.h"
#include "LibraryItemCollection.h"

using namespace std;

void displayMainMenu() {
    cout << "Library Management System\n";
    cout << "1. Add Item\n";
    cout << "2. Edit Item\n";
    cout << "3. Delete Item\n";
    cout << "4. Print All Items\n";
    cout << "5. Exit\n";
}

int main() {
    LibraryItemCollection library; // Create an instance of your library item collection

    int choice;
    do {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Add Item
                int id, loanPeriod;
                double cost;
                cout << "Enter item ID: ";
                cin >> id;
                cout << "Enter cost: ";
                cin >> cost;
                cout << "Enter loan period: ";
                cin >> loanPeriod;
                // Create a new library item object and add it to the collection
                LibraryItem* newItem = new LibraryItem(id, cost, loanPeriod);
                library.AddItem(newItem);
                break;
            }
            case 2: {
                // Edit Item
                int itemId;
                cout << "Enter item ID to edit: ";
                cin >> itemId;
                library.EditItem(itemId);
                break;
            }
            case 3: {
                // Delete Item
                int itemId;
                cout << "Enter item ID to delete: ";
                cin >> itemId;
                library.DeleteItem(itemId);
                break;
            }
            case 4: {
                // Print All Items
                library.PrintAllItems();
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
