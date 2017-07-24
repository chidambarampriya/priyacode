#include<stdio.h>
void main()
{
int n,rn=0,r;
printf("enter the integer");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rn=rn*10+r;
r /=10;
printf("rn = %d",rn);
}
}
