#include<stdio.h>
#include<conio.h>
void main()
{
int l;
clrscr();
printf("enter a year");
scanf("%d",&l);
if(l%4==0)
printf("it is leap year");
else
printf("it s not a leap year");
getch();
}
