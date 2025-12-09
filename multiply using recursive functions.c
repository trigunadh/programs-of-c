#include <stdio.h>
int multiply(inta,intb)
{
    if(a==0 || b==0)
        return 0;
    else
        return a+multiply(a,b-1);
}
int main()
{
	 int a,b;
     printf("enter two numbers\n");
     scanf("%d %d",&a,&b);
     printf("product is %d",multiply(a,b)); 
    return 0;
}