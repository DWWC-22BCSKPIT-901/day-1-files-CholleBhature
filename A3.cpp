#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    double employeeSalary;

public:
    // Setter methods
    void setEmployeeID(int id)
    {
        employeeID = id;
    }

    void setEmployeeName(const string &name)
    {
        employeeName = name;
    }

    void setEmployeeSalary(double salary)
    {
        employeeSalary = salary;
    }

    // Getter methods
    int getEmployeeID() const
    {
        return employeeID;
    }

    string getEmployeeName() const
    {
        return employeeName;
    }

    double getEmployeeSalary() const
    {
        return employeeSalary;
    }

    // Method to display all employee details
    void displayEmployeeDetails() const
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
    }
};

int main()
{
    Employee emp;

    // Setting employee details using setter methods
    emp.setEmployeeID(101);
    emp.setEmployeeName("John Doe");
    emp.setEmployeeSalary(55000.50);

    // Displaying employee details using the display method
    cout << "Employee Details:" << endl;
    emp.displayEmployeeDetails();

    // Accessing individual details using getter methods
    cout << "\nAccessing Individual Details:" << endl;
    cout << "ID: " << emp.getEmployeeID() << endl;
    cout << "Name: " << emp.getEmployeeName() << endl;
    cout << "Salary: " << emp.getEmployeeSalary() << endl;

    return 0;
}
