#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char st1[30],st2[30];
	printf("enter string to convert lower to upper case :\n");
	gets(st1);

	for(i=0;st1[i]!='\0';i++)
	{
		st2[i]=st1[i] - 32;
		
	}
	st2[i]='\0';
	puts (st2);
	return 0;
	
}
