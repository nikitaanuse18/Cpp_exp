#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int id;
    string name, department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);
    }

    void showEmployee()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nDepartment: " << department;
    }
};

class TeachingStaff : public Employee
{
    string subject, qualification;

public:
    void getData()
    {
        getEmployee();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void display()
    {
        cout << "\n--- Teaching Staff ---";
        showEmployee();
        cout << "\nSubject: " << subject;
        cout << "\nQualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee
{
    string designation;
    int hours;

public:
    void getData()
    {
        getEmployee();
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Working Hours: ";
        cin >> hours;
    }

    void display()
    {
        cout << "\n--- Non-Teaching Staff ---";
        showEmployee();
        cout << "\nDesignation: " << designation;
        cout << "\nWorking Hours: " << hours << endl;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "Enter Teaching Staff Details\n";
    t.getData();

    cout << "\nEnter Non-Teaching Staff Details\n";
    n.getData();

    t.display();
    n.display();

    return 0;
}
