#include<stdio.h>
int main()
{
	int a[100],n,i,j;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array elements are:\n");
	for(j=n-1;j>=0;j--)
	{
		printf("%d\n",a[j]);
	}
	return 0;
}
