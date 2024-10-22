#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

class Item {
public:
    int Item_Code;
    string Item_Name;
    int Item_Quantity;
    float Item_Price;

    // Constructor to initialize item properties
    Item(int code, const string& name, int quantity, float price) 
        : Item_Code(code), Item_Name(name), Item_Quantity(quantity), Item_Price(price) {}

    // Method to display item details
    void display() const {
        cout << "Item Code: " << Item_Code << "\n";
        cout << "Item Name: " << Item_Name << "\n";
        cout << "Item Quantity: " << Item_Quantity << "\n";
        cout << "Item Price per Unit: $" << Item_Price << "\n";
    }
};

// Comparison function for sorting by item code
bool compareByCode(const Item& a, const Item& b) {
    return a.Item_Code < b.Item_Code;
}

// Comparison function for sorting by item name
bool compareByName(const Item& a, const Item& b) {
    return a.Item_Name < b.Item_Name;
}

class InventorySystem {
private:
    list<Item> inventory;  // List to store items

public:
    // Method to add an item to the inventory
    void addItem(int code, const string& name, int quantity, float price) {
        Item newItem(code, name, quantity, price);
        inventory.push_back(newItem);
        cout << "Item added successfully!\n";
    }

    // Method to search for an item by code or name
    void searchItem(int code = -1, const string& name = "") {
        bool found = false;
        for (list<Item>::const_iterator it = inventory.begin(); it != inventory.end(); ++it) {
            if (it->Item_Code == code || it->Item_Name == name) {
                cout << "Item Found!\n";
                it->display();
                found = true;
                return;
            }
        }
        if (!found) {
            cout << "Requested Item is not available\n";
        }
    }

    // Method to purchase an item and update inventory
    void purchaseItem(int code, int quantity) {
        for (list<Item>::iterator it = inventory.begin(); it != inventory.end(); ++it) {
            if (it->Item_Code == code) {
                if (it->Item_Quantity >= quantity) {
                    float totalCost = quantity * it->Item_Price;
                    it->Item_Quantity -= quantity;
                    cout << "Item Purchased Successfully!\n";
                    cout << "Total Bill: $" << totalCost << "\n";
                } else {
                    cout << "Required item's Quantity is not in stock\n";
                }
                return;
            }
        }
        cout << "Item not found\n";
    }

    // Method to delete an item from the inventory
    void deleteItem(int code) {
        bool found = false;  // Flag to track if the item is found
        for (list<Item>::iterator it = inventory.begin(); it != inventory.end(); ++it) {
            if (it->Item_Code == code) { // Check if the item code matches
                inventory.erase(it);  // Remove the item from the inventory
                cout << "Item removed successfully!\n";
                found = true;
                return;
            }
        }
        if (!found) {
            cout << "Item not found!\n";
        }
    }

    // Method to display all items in the inventory
    void displayAll() const {
        if (inventory.empty()) {
            cout << "Inventory is empty.\n";
            return;
        }
        cout << "Current Inventory:\n";
        for (list<Item>::const_iterator it = inventory.begin(); it != inventory.end(); ++it) {
            it->display();
            cout << "-------------------------\n";
        }
    }

    // Method to sort the inventory by code or name
    void sortInventory(int option) {
        if (option == 1) {
            inventory.sort(compareByCode);
            cout << "Items sorted by Item Code\n";
        } else if (option == 2) {
            inventory.sort(compareByName);
            cout << "Items sorted by Item Name\n";
        } else {
            cout << "Invalid sorting option!\n";
        }
    }
};

int main() {
    InventorySystem system;
    int choice;

    do {
        cout << "\n=== Inventory System Menu ===\n";
        cout << "1. Add Item\n";
        cout << "2. Search Item\n";
        cout << "3. Purchase Item\n";
        cout << "4. Delete Item\n";
        cout << "5. Display All Items\n";
        cout << "6. Sort Items\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int code, quantity;
                float price;
                string name;
                cout << "Enter Item Code: ";
                cin >> code;
                cout << "Enter Item Name: ";
                cin.ignore(); // Clear input buffer
                getline(cin, name); // Use getline for names with spaces
                cout << "Enter Item Quantity: ";
                cin >> quantity;
                cout << "Enter Item Price per Unit: ";
                cin >> price;
                system.addItem(code, name, quantity, price);
                break;
            }
            case 2: {
                int searchOption;
                cout << "Search by: 1. Code 2. Name: ";
                cin >> searchOption;
                if (searchOption == 1) {
                    int code;
                    cout << "Enter Item Code: ";
                    cin >> code;
                    system.searchItem(code);
                } else if (searchOption == 2) {
                    string name;
                    cout << "Enter Item Name: ";
                    cin.ignore(); // Clear input buffer
                    getline(cin, name); // Use getline for names with spaces
                    system.searchItem(-1, name);
                } else {
                    cout << "Invalid option!\n";
                }
                break;
            }
            case 3: {
                int code, quantity;
                cout << "Enter Item Code: ";
                cin >> code;
                cout << "Enter Quantity: ";
                cin >> quantity;
                system.purchaseItem(code, quantity);
                break;
            }
            case 4: {
                int code;
                cout << "Enter Item Code to delete: ";
                cin >> code;
                system.deleteItem(code);
                break;
            }
            case 5: {
                system.displayAll();
                break;
            }
            case 6: {
                int sortOption;
                cout << "Sort by: 1. Code 2. Name: ";
                cin >> sortOption;
                system.sortInventory(sortOption);
                break;
            }
            case 0: {
                cout << "Exiting...\n";
                break;
            }
            default: {
                cout << "Invalid choice! Please try again.\n";
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
