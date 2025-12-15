#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
	int rev,rem,count=0,l;
	l=n;
	while(l>0)
	{
		count++;
		l=l/10;
	}
	while(n>0)
	{
		rem=n%10;
		rev=rev+pow(rem,count);
		n=n/10;
	}
}
int main()
{
	int x;
	printf("enter a number\n");
	scanf("%d",&x);
	if(armstrong(x)==x)
	printf("the given number is a armstrong number\n");
	else
	printf("the given number is not a armstrong number\n");
	return 0;
}
