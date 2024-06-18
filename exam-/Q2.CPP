#include<iostream>
#include<string.h>
using namespace std;

class Employee {
    char name[50];
    int salary;
    char designation[50];

public:
  
    void set(const char* name, int salary, const char* designation) {
        strcpy(this->name, name);
        this->salary = salary;
        strcpy(this->designation, designation);
    }

    void get() const {
        cout << "Name: " << name << endl
             << "Salary: " << salary << endl
             << "Designation: " << designation << endl;
    }

 
    void display() const {
        get();
    }
};

int main() {
    Employee emp1;

   
    emp1.set("Sakshi", 50000, "doctor");

    cout << "Employee Details:" << endl;
    emp1.get();

    cout << "\nUsing display method:" << endl;
    emp1.display();

    return 0;
}