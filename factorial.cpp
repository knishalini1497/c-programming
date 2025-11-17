#include<stdio.h>
int main()
 {
    int n,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
    {
    	printf("it not exist");
	}
     else 
	 {
        for (i = 1; i <= n; ++i)
		 {
		 	printf("Factorial of %d = %llu", n, fact);
		 }
        printf("Factorial of %d = %llu", n, fact);
    }
    return 0;
}
