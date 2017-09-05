#include<stdio.h>
#include<conio.h>
void main()
{
int i;
printf("enter the value");
scanf("%d",&i);
if(i<0)
{
printf("value is negative");
}
else if(i>0)
{
printf("the value is positive");
}
else if(i==0)
{
printf("the value is zero");
}
else
{
printf("it is not a number... invalid");
}
}
