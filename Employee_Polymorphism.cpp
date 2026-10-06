#include<iostream>
using namespace std;
class Employee
{
public:
    virtual void
  calculateSalary()
  {
       cout << "Employee Salary" << endl;
  }
};

class Manager : public Employee 
{
public:
    void calculateSalary()
override
   {
       cout << "Manager Salary = Rs. 60000" << endl;
   }
};

class Developer : public
Employee
{
public:
    void calculateSalary()
override
  {
       cout << "Developer Salary = RS. 50000" << endl;
  }
};

int main()
{
    Employee *e;
    Manager m;
    Developer d;
    
    e = &m;
    e->calculateSalary();
    
    e = &d;
    e->calculateSalary();
    
    return 0;
}    
    
