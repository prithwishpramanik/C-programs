#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter 1 number");
scanf("%d",&a);
printf("enter 2 number");
scanf("%d",&b);
c=a+b;
a=b;
b=c;
printf("%d",c);
getch();
}
