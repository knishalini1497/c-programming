#include<stdio.h>
int main ()
{
	int a,i,sum=0;
	printf("enter the value of a;");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i%5==0)
		{
			sum+=i;
		}
    }
    printf("the sum of all integer:%d\n,",sum);
    return 0;
    
}
    
