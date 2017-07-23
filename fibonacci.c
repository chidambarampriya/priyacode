#includ<stdio.h>
void main()
{
int i,n,t1=0,t2=1,nt;
printf("enter the no of terms");
scanf("%d",&n);
printf("fibonacci series");
for(i=1;i<=n;i++)
{
printf("%d",t1);
nt=t1+t2;
t1=t2;
t2=nt;
}
}
