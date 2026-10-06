// Printing an employee's salary using friend class and constructors
#include <iostream>
using namespace std;

class Employee {
private:
    double salary;

public:
    // Using a constructor here
    Employee(double empsalary) {
        salary = empsalary;
    }

    // Declaring a friend class of Employee
    friend class displaysal;
};

class displaysal {
public:
    // Using emp to access Employee
    void display(Employee& emp) {
        cout << "Monthly salary: Rp " << emp.salary << endl;
    }
};

int main() {
    // Creating objects for the classes
    Employee emp1(750000.00);
    displaysal payroll;

    // Passing emp1 to display
    payroll.display(emp1);

    return 0;
}