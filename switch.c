#include<iostream>
using namespace std;
int main()
{
int choice;
float a,b;
cout<<"Enter two numbers:";
cin>>a>>b;
cout<<"\nchoose an operation:\n;
cout<<"1.Addition\n";
cout<<"2.Substraction\n";
cout<<"3.Multiplication\n";
cout<<"4.Division\n";
cout<<"Enter your choice(1-4):";
cin>>choice;
switch(choice)
{
case 1:
cout<<"result="<<a+b;
break;
case 2:
cout<<"result="<<a-b;
break;
case 3:
cout<<"result="<<a*b;
break;
case 4:
if(b!=0)
cout<<"result="<<a/b;
else
cout<<"Division by zero is not possible.";
break;
default:
cout<<"Invalid choice!";
}
return 0;
}


