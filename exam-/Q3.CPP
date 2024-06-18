#include <iostream>
#include<string.h>
using namespace std;
class Employee
 {
    char name[50];
    double salary;

public:
     Employee() : salary() 
     {
        strcpy(name, ""); 
    }

   
    Employee(const char* name, double salary) 
    {
        strcpy(this->name, name);
        this->salary = salary;
    }

    void set(const char* name, double salary)
     {
        strcpy(this->name, name);
        this->salary = salary;
    }

    Employee operator+(const Employee &e) 
    {
        double totalSalary = this->salary + e.salary;
        return Employee("Total", totalSalary); 
    }

    void display() 
    {
        cout << "name: " << name << endl
             << "salary: " << salary << endl;
    }
};

int main() {
    Employee emp1, emp2;
    emp1.set("sakshi", 50000);
    emp2.set("anju", 60000);

    cout << "Employee 1 details:" << endl;
    emp1.display();
    cout << "Employee 2 details:" << endl;
    emp2.display();

    Employee totalSalaryEmployee = emp1 + emp2;

    cout << "Total Salary Employee details:" << endl;
    totalSalaryEmployee.display();

    return 0;
}