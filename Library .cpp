#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string libraryName;
    int totalBooks;
    int sittingCapacity;
    int libraryID;

public:
    
    Library(string name, int books, int capacity, int id) {
        libraryName = name;
        totalBooks = books;
        sittingCapacity = capacity;
        libraryID = id;
    }

    Library(const Library &lib) {
        libraryName = lib.libraryName;
        totalBooks = lib.totalBooks;
        sittingCapacity = lib.sittingCapacity;
        libraryID = lib.libraryID;
    }

    
    void display() {
        cout << "Library Name: " << libraryName << endl;
        cout << "Total Books: " << totalBooks << endl;
        cout << "Sitting Capacity: " << sittingCapacity << endl;
        cout << "Library ID: " << libraryID << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    
    Library lib1("Central Library", 5000, 200, 101);
    Library lib2("City Library", 3000, 150, 102);

    
    Library lib3 = lib1;

    
    cout << "Library 1 Details:" << endl;
    lib1.display();

    cout << "Library 2 Details:" << endl;
    lib2.display();

    cout << "Library 3 (Copied from Library 1) Details:" << endl;
    lib3.display();

    return 0;
}