#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	printf("sum=%d",sum(n));
	return 0;
}
int sum( int n )
{
	int s=0,rem, i;
	while(n!=0)
	{
		rem=n%10;
		s+=rem;
		n=n/10;
	}
	return s;
}

	

