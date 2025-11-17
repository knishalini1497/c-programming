#include<stdio.h>
int main()
{
	int a,i;
	printf("enter the value of a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	if(a%5==0)
	{
		printf("the given number is divisible by 5");
	}
	else
	{
		printf("the given number is not divisible by 5");
	
	}
    }
	return 0;
	
}
