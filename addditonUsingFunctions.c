#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("enter numbers to be added :\n");
	scanf("%d%d",&a,&b);
	printf("Addition=%d",add(a,b));
	return 0;
}
int add( int a, int b)
{
	return a+b;
}

	

