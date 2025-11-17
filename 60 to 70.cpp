#include<stdio.h>
int main()
{
	int p,q,r,i;
	scanf("%d%d",&p,&q);
	scanf("%d",&r);
	r=0;
	for(i=p;i<=q;i++);
	{
		if(r==3)
		{
		continue;
		printf("%d",i);
		r=r+1;
	}
		
	}
	return 0;
}
