#include<stdio.h>
int main ()
{
	int i,n,evensum=0,oddsum=0;
	printf("enter an integer");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(i%2==0)
		evensum =evensum+i;
	else
		oddsum=oddsum+i;
	printf("the sum of even upto %d\n",evensum);
	printf("the sum of odd upto %d\n",oddsum);
	return 0;
}
