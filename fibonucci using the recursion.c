#include <stdio.h>
int fibonucci(int a)
{
    if(a==0)
    return 0;
    else if (a==1||a==2)
    return 1;
    else    
    return fibonucci(a-1)+fibonucci(a-2);
}
int main()
{
	 int a;
     printf("enter the position of the element in the series you want \n");
     scanf("%d ",&a);
     printf("the element at position %d is %d",a,fibonucci(a));
    return 0;
}