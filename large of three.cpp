#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the value");
	scanf("%d%d%d",&x,&y,&z);
	if ((x>y)&&(x>z))
	{
	printf("x is larger");
	}
	else if((y>z)&&(y>x))
	{
	printf("y is larger");
	}
	else
	{
	printf("z is larger");
    }
		
		
}
