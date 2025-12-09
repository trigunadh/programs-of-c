#include <stdio.h>
int main()
{
	int a,b;
    float c,d;
    printf(" enter the interger values\n");
    scanf("%d %d",&a, &b);
    printf("enter the decimal values\n");
    scanf("%f %f",&c, &d);
    printf("sum is %d and difference is %d\n",a+b,a-b);
    printf("sum is %.1f and difference is %.1f",c+d,c-d);   
    return 0;
}