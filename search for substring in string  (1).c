#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char st[30],sub[30];
	printf("enter string :\n");
	gets(st);
	printf("enter substring :\n");
	gets(sub);
	for(i=0;st[i]!='\0';i++)
	{
		for(j=0;sub[j]!='\0';j++)
		{
			if(st[i+j]=!sub[j])
			break;
		}
		if(sub[j]=='\0')
		{
			printf("%d",j=1);
			break;
		}
	}
	return 0;
}

	

