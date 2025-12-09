#include<stdio.h>
#include<string.h>
int main ()
{
	int i,l=0;
	char st1[30],st2[30];
	printf("enter string 1:\n");
	gets(st1);
	printf("enter string 2:\n");
	gets(st2);
	for (i=0;(st1[i]!='\0')|| (st2[i]!='\0');i++)
	{
		if(st1[i]!=st2[i]){
			l++;
			printf("not equal\n");
			if(st1[i]>st2[i])
			printf("positive ");
			else 
			printf("negative ");
			
		}
		
		
	}
	if(l==0)
	printf("equal\n");
	
	return 0;
}
