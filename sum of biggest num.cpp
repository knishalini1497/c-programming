#include<stdio.h>
int  main()
{
	int big,n,num,i;
	scanf("%d",&num);
	scanf("%d",&n);
	big=num;
	for(i=2;i<=n;i++)
	{
	scanf("%d",&num);
	if(num>big)
	   big=num;
	}
	printf("biggest =%d",big);
    return 0;
}
