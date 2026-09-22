#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee
{
protected:
    int empID;
    string empName, department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Department: ";
        getline(cin, department);
    }

    void showEmployee()
    {
        cout << "\nEmployee ID : " << empID;
        cout << "\nEmployee Name : " << empName;
        cout << "\nDepartment : " << department;
    }
};

// Derived Class 1
class TeachingStaff : public Employee
{
    string subject, qualification;

public:
    void getTeaching()
    {
        getEmployee();

        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void showTeaching()
    {
        cout << "\n\n----- Teaching Staff Details -----";
        showEmployee();
        cout << "\nSubject : " << subject;
        cout << "\nQualification : " << qualification;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee
{
    string designation;
    int workingHours;

public:
    void getNonTeaching()
    {
        getEmployee();

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void showNonTeaching()
    {
        cout << "\n\n----- Non-Teaching Staff Details -----";
        showEmployee();
        cout << "\nDesignation : " << designation;
        cout << "\nWorking Hours : " << workingHours;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "Enter Teaching Staff Details\n";
    t.getTeaching();

    cout << "\nEnter Non-Teaching Staff Details\n";
    n.getNonTeaching();

    cout << "\n======================================";
    t.showTeaching();
    cout << "\n======================================";
    n.showNonTeaching();
    cout << "\n======================================";

    return 0;
}
