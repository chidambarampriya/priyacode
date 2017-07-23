#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the integer");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digit:%d",count);
}
