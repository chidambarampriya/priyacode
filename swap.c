#include<stdio.h>
void main()
{
int x,y,temp;
printf("enter the no of variables");
scanf("%d%d",&x,&y);
printf("before swapping x=%d,y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("after swapping x=%d,y%d",x,y);
}
