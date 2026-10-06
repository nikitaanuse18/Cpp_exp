#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void area()
    {
         cout << "Area of Shape:";
    }
};
class Rectangle : public Shape 
{
      int l, b;
   public:
       void area() override
       {
            cout << "Enter length:";
            cin >> l;
            cout << "Enter breadth:";
            cin >> b;
            int a = l * b;
            cout << "Area of Rectangle =" << a;
       }
};

int main()
{
    Rectangle r;
    Shape *s;
    
    s = &r;
    s->area();
    
    return 0;
}    
        
