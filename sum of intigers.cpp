#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
soint();
getch();
return(0);
}

soint()
{
 int i,n,s=0,r;
 printf("Enter the number : ");
 scanf("%d",&n);
     while(n!=0)
	{
	r=n%10;
	s=s+r;
	n=n/10;
	}
 printf("Sum is %d",s);

}