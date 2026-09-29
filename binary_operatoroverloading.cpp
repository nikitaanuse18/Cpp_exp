#include <iostream>
using namespace std;

class Complex {

int real , imag;
 private:
    void getData()
    {
        cout << "enter real and imaginary part :";
        cin >> real >> imag;
    }
    
    void add(Complex c1 , Complex c2)
    {
         real = c1.real + c2.real;
         imag = c1. imag + c2.imag;
    }
    
    void subtract(Complex c1 , Complex c2)
    {
         real = c1.real - c2.real;
         imag = c1.real - c2.real;
    }
    
    void display()
    {
        cout << real;
        if(imag >= 0)
           cout << " + " << imag << " i ";
           
