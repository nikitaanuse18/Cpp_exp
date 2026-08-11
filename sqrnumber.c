#include<iostream>
using namespace std;
//Function to find square of a number
int square(int n)
{
return n*n;
}
int main()
{
int num;
cout<<"Enter a number:";
cin>>num;
cout<<"Square of"<<num<<"="<<square(num);
return 0;
}
