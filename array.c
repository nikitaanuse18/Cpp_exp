#include<stdio.h>
int main()
{
int arr[4],i,sum=0;
printf("enter 4 elements:\n");
   for(i=0;i<4;i++)
   {scanf("%d",&arr[i]);
   sum+=arr[i];
}
printf("sum of array elements=%d",sum);
}
