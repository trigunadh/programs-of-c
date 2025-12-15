#include<stdio.h>
int main()
{
	char st[20];
	int i,count=0;
	printf("enter your string\n");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		count++;
	}
	printf("the length of string is %d",count);
	return 0;
}
