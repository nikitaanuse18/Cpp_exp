#include<iostream>
using namespace std;
class employee
{
private:
int employee_id;
string name;
float salary;
public:
employee()
{
employee_id=0;
name="____";
salary=0;
}

employee(int i,string n,float s)
{
employee_id=i;
name=n;
salary=s;
}

employee(const employee &e)
{
employee_id=e.employee_id;
name=e.name;
salary=e.salary;
}

void display()
{
cout<<"Employee Id : "<<employee_id<<endl;
cout<<"Employee Name : "<<name<<endl;
cout<<"Employee salary : "<<salary<<"lakh per annum"<<endl;
}
};
int main()
{
employee e1;
employee e2(59,"Harish Toraskar" ,25);
employee e3(e2);
e1.display();
e2.display();
e3.display();
return 0;
}

