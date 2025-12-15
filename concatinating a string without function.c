#include<stdio.h>
int main()
{
	char st1[20],st2[20];
	int i,l=0,j;
	printf("enter string 1\n");
	gets(st1);
	printf("enter string 2\n");
	gets(st2);
	for(i=0;st1[i]!='\0';i++)
	{
		l++;
	}
	for(i=l,j=0;st2[j]!='\0';i++,j++)
	{
		st1[i]=st2[j];
	}
	st1[i]='\0';
	puts(st1);
	return 0;
}
