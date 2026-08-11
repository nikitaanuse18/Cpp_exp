#include<stdio.h>
int main ()
{
int n, i;
int factorial=1;
printf("enter the num:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
 factorial = factorial * i;
}
printf("factorial of %d = %d\n",n,factorial);
return 0;
}
