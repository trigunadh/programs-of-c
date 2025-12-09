#include<stdio.h>
int tab(int);
int main()
{
	int n;
	printf("enter number :\n");
	scanf("%d",&n);
	tab(n);
	return 0;
}
int tab( int n )
{
	int i;
	for(i=1;i<=10;i++)
	printf("%dx%d=%d\n",n,i,n*i);

	return 0;
}
	

