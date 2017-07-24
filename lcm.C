#include<stdio.>
void main()
{
int n1,n2,minm;
printf("enter the two numbers");
scanf("%d%d",&n1,&n2);
minm=n1>n2?n1:n2;
while(1)
{
if(minm%n1==0&&minm%n2==0)
{
printf("the lcm of %d and %d is %d",n1,n2,minm);
break;
}
++minm;
}
}
