#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class LibraryItem {
protected:
    string title;
    string itemID;
    bool isAvailable;

public:
    LibraryItem(string t, string id) : title(t), itemID(id), isAvailable(true) {}
    

    virtual void displayInfo() = 0;
    virtual string getType() = 0;
    

    virtual void borrowItem() {
        if(isAvailable) {
            isAvailable = false;
            cout << "Item borrowed successfully!" << endl;
        } else {
            cout << "Sorry, item is not available." << endl;
        }
    }
    
    virtual void returnItem() {
        isAvailable = true;
        cout << "Item returned successfully!" << endl;
    }
    
    // Getters
    string getTitle() const { return title; }
    string getID() const { return itemID; }
    bool getAvailability() const { return isAvailable; }
};

// Derived class for Books
class Book : public LibraryItem {
private:
    string author;
    string ISBN;
    int pages;

public:
    Book(string t, string id, string auth, string isbn, int p) 
        : LibraryItem(t, id), author(auth), ISBN(isbn), pages(p) {}
    
    void displayInfo() override {
        cout << "\nBook Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "ID: " << itemID << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Pages: " << pages << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
    
    string getType() override { return "Book"; }
};

// Derived class for Magazines
class Magazine : public LibraryItem {
private:
    string issueDate;
    string publisher;

public:
    Magazine(string t, string id, string date, string pub) 
        : LibraryItem(t, id), issueDate(date), publisher(pub) {}
    
    void displayInfo() override {
        cout << "\nMagazine Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "ID: " << itemID << endl;
        cout << "Issue Date: " << issueDate << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
    }
    
    string getType() override { return "Magazine"; }
};

// Library Management System class
class LibrarySystem {
private:
    vector<LibraryItem*> items;
    string filename;

public:
    LibrarySystem(string fname) : filename(fname) {
        loadData();
    }
    
    ~LibrarySystem() {
        saveData();
        for(auto item : items) {
            delete item;
        }
    }
    
    void addItem() {
        cout << "\nWhat type of item to add?" << endl;
        cout << "1. Book" << endl;
        cout << "2. Magazine" << endl;
        
        int choice;
        cin >> choice;
        cin.ignore();
        
        string title, id;
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter ID: ";
        getline(cin, id);
        
        if(choice == 1) {
            string author, isbn;
            int pages;
            
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter ISBN: ";
            getline(cin, isbn);
            cout << "Enter Number of Pages: ";
            cin >> pages;
            
            items.push_back(new Book(title, id, author, isbn, pages));
        }
        else if(choice == 2) {
            string issueDate, publisher;
            
            cout << "Enter Issue Date: ";
            getline(cin, issueDate);
            cout << "Enter Publisher: ";
            getline(cin, publisher);
            
            items.push_back(new Magazine(title, id, issueDate, publisher));
        }
        cout << "\nItem added successfully!" << endl;
    }
    
    void displayAllItems() {
        if(items.empty()) {
            cout << "\nNo items in library!" << endl;
            return;
        }
        
        for(auto item : items) {
            item->displayInfo();
        }
    }
    
    void searchItem() {
        if(items.empty()) {
            cout << "\nNo items in library!" << endl;
            return;
        }
        
        string searchTerm;
        cout << "Enter title or ID to search: ";
        cin.ignore();
        getline(cin, searchTerm);
        
        bool found = false;
        for(auto item : items) {
            if(item->getTitle() == searchTerm || item->getID() == searchTerm) {
                item->displayInfo();
                found = true;
            }
        }
        
        if(!found) {
            cout << "\nItem not found!" << endl;
        }
    }
    
    void borrowReturnItem() {
        if(items.empty()) {
            cout << "\nNo items in library!" << endl;
            return;
        }
        
        string id;
        cout << "Enter item ID: ";
        cin.ignore();
        getline(cin, id);
        
        for(auto item : items) {
            if(item->getID() == id) {
                cout << "1. Borrow Item" << endl;
                cout << "2. Return Item" << endl;
                int choice;
                cin >> choice;
                
                if(choice == 1) {
                    item->borrowItem();
                } else if(choice == 2) {
                    item->returnItem();
                }
                return;
            }
        }
        
        cout << "\nItem not found!" << endl;
    }
    
private:
    void loadData() {
        // Implement loading data from file
        // This is left as an exercise
    }
    
    void saveData() {
        // Implement saving data to file
        // This is left as an exercise
    }
};

int main() {
    LibrarySystem library("library_data.txt");
    int choice;
    
    while(true) {
        cout << "\n=== Library Management System ===" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. Display All Items" << endl;
        cout << "3. Search Item" << endl;
        cout << "4. Borrow/Return Item" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        
        cin >> choice;
        
        switch(choice) {
            case 1:
                library.addItem();
                break;
            case 2:
                library.displayAllItems();
                break;
            case 3:
                library.searchItem();
                break;
            case 4:
                library.borrowReturnItem();
                break;
            case 5:
                cout << "\nGoodbye!" << endl;
                return 0;
            default:
                cout << "\nInvalid choice!" << endl;
        }
    }
    
    return 0;
}