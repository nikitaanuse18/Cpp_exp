#include<iostream>
using namespace std;
class rectangle
{
public:
  int length,breadth;
  rectangle()
  {
     length=0;
     breadth=0;
     }
  rectangle(int l,int b)
  {
     length=l;
     breadth=b;
     }
  rectangle(rectangle &r)
  {
     length=r.length;
     breadth=r.breadth;
     }
    int area()
    {
       return length*breadth;
       }
      void display()
      {
         cout<<"length:"<<length<<endl;
         cout<<"breadth:"<<breadth<<endl;
         cout<<"area:"<<area()<<endl;
         }
       };
       int main()
       {
          rectangle r1;
          rectangle r2(10,5);
          rectangle r3(r2);
          
          cout<<"Default Constructor:\n";
          r1.display();
          cout<<"\nParameterized Constructor:\n";
          r2.display();
          cout<<"\nCopy Constructor:\n";
          r3.display();
          return 0;
          }
         
         
