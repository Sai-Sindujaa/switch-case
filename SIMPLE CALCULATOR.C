#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul,div;
char c;
clrscr();
printf("enter your choice [+,-,*,/]:");
scanf("%c",&c);
printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);
switch(c)
{
case'+':
sum=a+b;
printf("addition : %d",sum);
break;
case'-':
sub=a-b;
printf("subtraction : %d",sub);
break;
case'*':
mul=a*b;
printf("product : %d",mul);
break;
case'/':
div=a%b;
printf("remainder : %d",div);
break;
default:
printf("invalid");
}
getch();
}
