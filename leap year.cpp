#include<stdio.h>
int main()
{
	int x,year;
	printf("enter the year:");
	scanf("%d",&x);
	if(x%4==0)
	{
	printf("it is leap year");
	}
	else
	{
	printf("it is not a leap year");
	}
}
