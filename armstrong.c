#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int num,originalNum,remainder,result=0;
cout<<"Enter a number:";
cin>>num;
originalNum=num;
while(originalNum!=0)
{
remainder=originalNum%10;
result+=pow(remainder,3);
originalNum/=10;
}
if(result==num)
cout<<num<<"Is an Armstrong Number";
else
cout<<num<<"Is Not an Armstrong Number";
return 0;
}
