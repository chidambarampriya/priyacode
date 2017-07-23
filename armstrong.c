#include<stdio.h>
void main()
{
int num,on,r,result=0;
printf("enter the digit");
scanf("%d",&num);
on=num;
while(on!=0)
{
r=on%10;
result +=r*r*r;
on /=10;
if(result==num)
printf("%d is the armstrong number",num);
else
printf("%d is not armstrong number",num);
}
}
