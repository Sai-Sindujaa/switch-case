#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,choice;
clrscr();
printf("enter number_1 : ");
scanf("%d",&num1);
printf("enter number_2 : ");
scanf("%d",&num2);
printf("enter your choice(1-4):\n");
printf("1.find whether the number is odd or even\n");
printf("2.find whether the number is positive or negative\n");
printf("3.the nearest tens of the number \n");
printf("4.thankyou and close the program\n");
scanf("%d",&choice);

switch(choice)
{
case 1 :
if(num1%2==0)
printf("%d is even \n",num1);
else
printf("%d is odd \n",num1 );

if(num2%2==0)
printf("%d is even \n",num2);
else
printf("%d is odd \n",num2);
break;
case 2:
if(num1>=0)
printf("%d is positive number\n",num1);
else
printf("%d is negative number\n",num1);
if(num2>=0)
printf("%d is positive number\n",num2);
else
printf("%d is negative number\n",num2);
break;
case 3:
printf("nearest tens of %d is %d\n",num1,(num1+5)/10*10);
printf("nearest tens of %d is %d \n",num2,(num2+5)/10*10);
break;
case 4:
printf("thankyou\n");
break;
default:
printf("invalid choice");
}
getch();
}

