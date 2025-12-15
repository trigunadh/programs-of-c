#include<stdio.h>
int main()
{
    int n, k, i, a[100],found=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d", &k);
    for(i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            found = 1;
            break;
        }
    }
    if(found==1)
        printf("Element found at index %d", i);
    else
        printf("Element not found");
    return 0;
}