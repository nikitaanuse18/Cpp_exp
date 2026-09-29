#include<iostream>
using namespace std;
class Number
{
private:
    int x;
public:
    Number(int a = 0)
    {
        x = a;
    }
    // Binary + operator overloading
    Number operator+(Number n)
    {
        Number temp;
        temp.x =x + n.x;
        return temp;
    }
    void display()
    {
        cout << x << endl;
    }
};
int main()
{
     Number n1(5), n2(45), n3;
     n3 = n1+n2;
     cout << "Addition =";
     n3.display();
     return 0;
}     
