#include<stdio.h>
int Arm(int);
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	if(Arm(n)==n)
	printf("Yes Armstrong number \n");
	else 
	printf("not Armstrong number \n");
	return 0;
}
int Arm( int n )
{
	int i,sum,r;
	while(n!=0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;
	}
	return sum;
}
	

