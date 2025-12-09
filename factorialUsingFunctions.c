#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	printf("Factorial=%d",factorial(n));
	return 0;
}
int factorial( int n )
{
	int fact=1, i;
	for (i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}

	

