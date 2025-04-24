#include <iostream>
using namespace std;

class IIUC_Auditorium {
private:
    float area;                 
    float totalFloorSpace;   
    int hallID;                 
    int maxSeatingCapacity;     

public:
    IIUC_Auditorium(float a, float tfs, int id, int capacity) {
        area = a;
        totalFloorSpace = tfs;
        hallID = id;
        maxSeatingCapacity = capacity;
    }

    
    IIUC_Auditorium(const IIUC_Auditorium &other) {
        area = other.area;
        totalFloorSpace = other.totalFloorSpace;
        hallID = other.hallID;
        maxSeatingCapacity = other.maxSeatingCapacity;
    }

    
    void display() {
        cout << "Hall ID: " << hallID << endl;
        cout << "Area: " << area << " sq.ft" << endl;
        cout << "Total Floor Space: " << totalFloorSpace << " sq.ft" << endl;
        cout << "Maximum Seating Capacity: " << maxSeatingCapacity << " participants" << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    
    IIUC_Auditorium hall1(4500.0, 4000.0, 101, 350);
    IIUC_Auditorium hall2(6000.0, 5500.0, 102, 500);

    
    IIUC_Auditorium hall3 = hall1;

    
    hall1.display();
    hall2.display();
    hall3.display();

    return 0;
}