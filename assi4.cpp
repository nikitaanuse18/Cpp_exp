#include<iostream>
#include<string>
using namespace std;
class SavingsAccounts
{
private:
   string acc_name;
   int acc_no;
   double balance;
   double interestRate;
public:
   //constructor
   SavingsAccounts(string name,int no,double balance,double rate)
   {
     acc_name = name;
     acc_no = no;
    this->balance = balance;
     interestRate = rate;
   }
   void deposit(double amount)
   {
   balance=balance+amount;
   }
   void withdraw(double amount)
   {
    if(amount<=balance)
       balance=balance-amount;
    else
       cout<<"Insufficient balance!"<<endl;
       }
       void apply_interest()
       {
        double interest=balance*interestRate/100;
        balance=balance+interest;
       }
       void display()
       {
        cout<<"Account name:"<<acc_name<<endl;
        cout<<"Account no:"<<acc_no<<endl;
        cout<<"Balance:"<<balance<<endl;
        cout<<"Interest Rate:"<<interestRate<<"%"<<endl;
       }
      };
       int main()
       {
        SavingsAccounts s("Nikita",96,10000,5);
        s.deposit(3000);
        s.withdraw(2000);
        s.apply_interest();
        s.display();
        return 0;
       }
       
    
