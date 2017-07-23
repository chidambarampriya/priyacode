#incude<stdio.h>
void main()
{
 double n1,n2,n3;
 printf("enter the three different number");
 scanf("%1f%1f%1f",&n1,&n2,&n3);
 if(n1>=n2&&n1>=n3)
 {
 printf("%2f is the largest number",n1);
 }
 if(n2>=n1&&n2>=n3)
 {
 printf("%2f is the largest number",n2);
 }
 if(n3>=n1&&n3>=n2)
 {
 printf("%2f is the largest number",n3);
 }
 }
