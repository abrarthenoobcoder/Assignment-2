#include <iostream>
#include <string>
using namespace std;

class Car_Showroom {
private:
    string showroomName;
    int numberOfCars;
    float showroomArea;
    int showroomID;

public:
    
    Car_Showroom(string name, int cars, float area, int id) {
        showroomName = name;
        numberOfCars = cars;
        showroomArea = area;
        showroomID = id;
    }

    
    Car_Showroom(const Car_Showroom &showroom) {
        showroomName = showroom.showroomName;
        numberOfCars = showroom.numberOfCars;
        showroomArea = showroom.showroomArea;
        showroomID = showroom.showroomID;
    }

    
    void display() {
        cout << "Showroom Name: " << showroomName << endl;
        cout << "Number of Cars: " << numberOfCars << endl;
        cout << "Showroom Area: " << showroomArea << " sq.ft" << endl;
        cout << "Showroom ID: " << showroomID << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    Car_Showroom showroom1("AutoWorld", 50, 1500.75, 101);
    Car_Showroom showroom2("CarZone", 30, 1200.50, 102);

    
    Car_Showroom showroom3 = showroom1;

    showroom1.display();
    showroom2.display();
    showroom3.display();

    return 0;
}