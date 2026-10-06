#include<iostream>
using namespace std;
class Vehicle
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Car : public Vehicle
{
public:
     void start()
     {
          cout << "Car starts with a key." << endl;
     }
     
     void stop()
     {
          cout << "Car stops using brakes." << endl;
     }
};

class Bike : public Vehicle
{
public:
    void start()
    {
         cout << "Bike starts with a self-start button." << endl;
    }
    
    void stop()
    {
         cout << "Bike stops using brakes." << endl;
    }     
};    

int main()
{
   Vehicle *v;
   Car c;
   Bike b;
   
   v = &c;
   v->start();
   v->stop();
   
   v = &b;
   v->start();
   v->stop();
   
   return 0;
}   
