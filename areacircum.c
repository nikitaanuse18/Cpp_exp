#include<iostream>
using namespace std;
const float PI=3.1415;
//Function to calculate area
float area(float r)
{
return PI*r*r;
}
//Function to calculate circumference
float circumference(float r)
{
return 2*PI*r;
}
int main()
{
float radius;
cout<<"Enter radius of the circle:";
cin>>radius;
cout<<"Area of the circle="<<area(radius)<<endl;
cout<<"Circumference of circle="<<circumference(radius);
return 0;
}
