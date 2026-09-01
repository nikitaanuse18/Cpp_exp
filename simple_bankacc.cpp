#include<iostream>
using namespace std;
class savingacc
{
private:
string acchold_name;
int acc_no;
double balance;
float interest_r;
public:
savingacc(string name,int no,double m,float r)
{
acchold_name=name;
acc_no=no;
balance=m;
interest_r=r;
}
void deposit(double money)
{
if money>0
{
balance+=money;
cout<<"Deposited : "<<money<<"rupees"<<endl;
}}
void withdraw(double amount)
{
cout<<"Amount to withdraw : "<<amount;
if(amount>0 && amount<=balance)
{
balance --=amount;
cout<<amount<<"rupees Withdrawn successfully";
}
else
{
cout<<"Insufficient balance :)";
}
}
void applyinterest()
{
double interest=balance * interest_r /100;
balance+=interest;
cout<<"Interest applied :"<<interest<<"rupees";
}
void display()
{
cout<<"SAVINGS ACCOUNT"<<endl;
cout<<"Account holder name : "<<acchold_name<<endl;
cout<<"Account number : "<<acc_no<<endl;
cout<<"Bank Balance : "<<balance<<"rupees"<<endl;
cout<<"Interest rate : "<<interest_r<<"%"<<endl;
}
};

int main()
{
savingacc s("Alice",2025,40000,7.5);
s.display();
s.deposit(25000);
s.withdraw(20000);
s.applyinterest();
s.display();
return 0;
}



