#include<stdio.h>
#include<conio.h>
int main()
{
int array[12]={3,2,5,6,8,2,0,2,5,6,2,1};
float sum,avg;
int loop;

sum=avg=0;
for( loop=0;loop<11;loop++){
sum=sum+array[loop];
}

avg=sum/loop;
printf("Average of array values is %f",avg);
getch();
return 0;
}