#include<stdio.h>
void main()
{
int n ri=0,r,oi;
printf("enter the integer")
scanf("%d",&n);
oi=n;
while(n!=0)
{
r=n%10;
ri=ri*10+r;
n/=10;
if(oi==ri)
printf("%d is the palindrome",ri);
else
printf("%d is not palindrome",ri);
}
