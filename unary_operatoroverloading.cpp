#include<iostream>
using namespace std;
class Number
{
   int x;
public:
  Number(int n)
  {
  x = n;
  }
  //Unary ++ operator overloading
  void operator++()
  {
     x = -x;
  }
  void display()
  {
     cout <<"Value =" << x;
  }
};
int main()
{
    Number obj(10);
    ++obj;
    obj.display();
    return 0;
}
