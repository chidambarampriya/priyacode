#include<stdio.h>
void main()
{
int i,high,low,flag;
printf("enter the number");
scanf("%d",&low,&high);
printf("prime numbers between %d and %d are:",low,high);
while(low<high)
{
flag=0;
for(i=2;i<low/2;i++)
if(low%i==0)
{
flag=1;
beak;
}
if(flag==0)
{
printf("%d",low);
}
low++;
}
}
