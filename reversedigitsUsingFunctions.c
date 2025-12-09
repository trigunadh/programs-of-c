#include<stdio.h>
int rev(int);
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	printf("reverse =%d",rev(n));
	return 0;
}
int rev( int n )
{
	int s=0,rem, i;
	while(n!=0)
	{
		rem=n%10;
		s=(s*10)+rem;
		n=n/10;
	}
	return s;
}

	

