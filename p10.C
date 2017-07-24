#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("enter the upper limit:");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
{
sum +=i;
}
printf("sum of the odd numbers= %d",sum);
}
