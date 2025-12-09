#include<stdio.h>
int rev(int);
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	if(rev(n)==n)
	printf("Yes palindrome \n");
	else 
	printf("Not palindrome \n");
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

	

