#include<stdio.h>
#include<string.h>
int main()
{
	char st1[20],st2[20];
	printf("enter string 1\n");
	gets(st1);
	printf("enter string 2\n");
	gets(st2);
	strcat(st1,st2);
	puts(st1);
	return 0;
}
