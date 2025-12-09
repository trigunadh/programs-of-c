#include<stdio.h>
#include<string.h>
int main()
{
	int i,k=0;
	char st1[30],ch;
	printf("enter string :\n");
	gets(st1);
	printf("enter charecter :\n");
	scanf("%c",&ch);

	for(i=0;st1[i]!='\0';i++)
	{
		if(st1[i]==ch)
		{
			k++;
			printf(" positions is %d",i+1);
		}
	}

	return 0;
	
}
