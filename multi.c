#include<stdio.h>
void main()
{
int i,n;
printf("enter the integer");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d * %d= %d\n",n,n*i);
}
}
