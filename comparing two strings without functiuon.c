#include<stdio.h>
int main()
{
	char st1[10],st2[10];
	int i,l=0;
	printf("enter string 1\n");
	gets(st1);
	printf("enter string 2\n");
	gets(st2);
	for(i=0;st1[i]!='\0'||st2[i]!='\0';i++)
	{
		if(st1[i]!=st2[i])
		{
			l++;
			break;
		}
	}
	if(l==0)
	printf("equal\n");
	else
	printf("not equal\n");
	return 0;
}
