#include<stdio.h>
#include<string.h>
int main()
{
	int i,l=0;
	char st[30],ch;
	printf("enter string :\n");
	gets(st);
	printf("enter letter  :\n");
	scanf("%c",&ch);
	
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==ch)
		l++;
	}
	printf("repeated %d times ",l);
	return 0;
}

	

