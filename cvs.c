#include<stdio.h>
void main()
{
char line[150];
int i,vowels,consonants,space;
vowels=consonants=space=0;
printf("enter the line of string:");
scanf("[^\n]",line);
for(i=0;line[i]!='\0';++i)
{
if(line[i]='a'||line[i]='e'||line[i]='i'||line[i]='o'||line[i]='u'||line[i]='A'||line[i]='E'||line[i]='I'||line[i]='O'||line[i]='U')
{
++vowels;
}
elseif((line[i]>='a'&&line[i]<='z'||line[i]>='A'&&line[i]<='Z'))
