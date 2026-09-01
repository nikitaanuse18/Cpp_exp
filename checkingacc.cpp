#include<iostream>
#include<string>
using namespace std;
class CheckingAccount
{
private:
   string acc_name;
   int acc_no;
   double balance;
public:
   //constructor
   CheckingAccount(string name,int no,double bal)
   {
     acc_name = name;
     acc_no = no;
     balance = bal;
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
       void display()
       {
        cout<<"Account name:"<<acc_name<<endl;
        cout<<"Account no:"<<acc_no<<endl;
        cout<<"Balance:"<<balance<<endl;
       }
      };
       int main()
       {
        CheckingAccount c("Nikita",96,10000);
        c.deposit(3000);
        c.withdraw(2000);
        c.display();
        return 0;
       }
       
    
