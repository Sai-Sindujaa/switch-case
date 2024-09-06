#include<stdio.h>
#include<conio.h>
void main()
{
char operators;
float num,a,b,sum,sub,mul,div ;
clrscr();
printf("enter a number1 : ");
scanf("%f",&a);
printf("enter a number2 :");
scanf("%f",&b);
printf("enter the operators :");
scanf("%c",&operators);
switch(operators)
{
case'+':
sum=a+b;
printf("%.2f+%.2f=%.2f\n",a,b,sum);
break;
case'-':
sub=a-b;
printf("%.2f+%.2f=%.2f\n",a,b,sub);
break;
case'*':
mul=a*b;
printf("%.2f*%.2f=%.2f\n",a,b,mul);
break;
case'/':
div=a/b;
printf("%.2f/%.2f=%.2f\n",a,b,div);
break;
default:
printf("error\n");
}
getch();
}