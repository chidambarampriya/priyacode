#include<stdio.h>
void main()
{
int i,n;
unsigned long long factorial=1;
print("enter the ineger");
scanf("%d",&n);
if(n<0)
{
printf("error!factorial of the number is does not exit");
}
else
for(i=1;i<=n;i++)
{
factorial *=i;
}
printf("factorial of %d=%11u",n,factorial);
}
