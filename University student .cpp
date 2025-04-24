#include <iostream>
#include <string>
using namespace std;

class University_Student {
private:
    string name;
    int studentID;
    string department;
    float CGPA;

public:
    
    University_Student(string n, int id, string dept, float cgpa) {
        name = n;
        studentID = id;
        department = dept;
        CGPA = cgpa;
    }

    
    University_Student(const University_Student &student) {
        name = student.name;
        studentID = student.studentID;
        department = student.department;
        CGPA = student.CGPA;
    }

    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << CGPA << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    
    University_Student student1("Abrar", 1001, "CSE", 3.85);
    University_Student student2("Ashad", 1002, "EEE", 3.92);

    
    University_Student student3 = student1;

    
    cout << "Student 1 Info:" << endl;
    student1.display();

    cout << "Student 2 Info:" << endl;
    student2.display();

    cout << "Student 3 (Copy of Student 1) Info:" << endl;
    student3.display();

    return 0;
}