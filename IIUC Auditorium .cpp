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

    
    IIUC_Auditorium(const IIUC_Auditorium &aud) {
        area = aud.area;
        totalFloorSpace = aud.totalFloorSpace;
        hallID = aud.hallID;
        maxSeatingCapacity = aud.maxSeatingCapacity;
    }

    
    void display() {
        cout << "Auditorium Hall ID: " << hallID << endl;
        cout << "Area: " << area << " sq.ft" << endl;
        cout << "Total Floor Space: " << totalFloorSpace << " sq.ft" << endl;
        cout << "Max Seating Capacity: " << maxSeatingCapacity << " participants" << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    
    IIUC_Auditorium aud1(5000.0, 4500.0, 201, 300);
    IIUC_Auditorium aud2(6000.0, 5500.0, 202, 400);

    
    IIUC_Auditorium aud3 = aud1;

    
    aud1.display();
    aud2.display();
    aud3.display();

    return 0;
}