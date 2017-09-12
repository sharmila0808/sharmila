#include<stdio.h>
#include<conio.h>
void main()
{
int alpha;
clrscr();
printf("enter tha alphabet");
scanf("%d",&alpha);
if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=="A"||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
{
printf("gvn alpha is vowel");
}
else
{
printf("it is not a vowel.. it s consonant");
}
getch();
}
