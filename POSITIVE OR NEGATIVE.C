#include<stdio.h>
#include<conio.h>
void main()
{
int num ;
clrscr();
printf("enter a number : ");
scanf("%d",&num);
switch(num==0)
{
case 1:
printf(" the number is zero ");
break;
case 0:
if(num<0)
{
printf(" negative ");
}
else
{
printf("positive");
}
break;
default:
printf("error");
}
getch();
}
