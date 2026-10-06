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
class Square : public Shape
{
       int side;
    public:
       void area()  override
       {
            cout << "Enter side:";
            cin >> side;
            
            int a = side * side;
             cout << "Area of Square =" << a;
       }
};

int main()
{
    Square s1;
    Shape *s;
    
    s = &s1;
    s->area();
    
    return 0;
}    
       
