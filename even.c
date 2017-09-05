#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter the value");
scan("%d",num);
if(num%2==0)
{
printf("it is even num");
}
else
{
printf("it is odd number");              
}
getch();
}
