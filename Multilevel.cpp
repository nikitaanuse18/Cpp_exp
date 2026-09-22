#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }
};

class Exam : public Student
{
protected:
    int marks1, marks2;

public:
    void getMarks()
    {
        getStudent();

        cout << "Enter Marks of Subject 1: ";
        cin >> marks1;

        cout << "Enter Marks of Subject 2: ";
        cin >> marks2;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        cout << "\n--- Student Result ---";
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nSubject 1 Marks: " << marks1;
        cout << "\nSubject 2 Marks: " << marks2;
        cout << "\nTotal Marks: " << marks1 + marks2 << endl;
    }
};

int main()
{
    Result r;

    r.getMarks();
    r.display();

    return 0;
}
