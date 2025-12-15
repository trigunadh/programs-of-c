#include<stdio.h>
int binary(int n,int a[],int k)
{
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(k==a[mid])
        return mid;
        else if (a[mid]<k)
        l=mid+1;
        else
        r=mid-1;
    }
    if(l>r)
    return -1;
}
int main()
{
    int n,k,i,a[100];
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements in sorted order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&k);
    int result=binary(n,a,k);
    if(result==-1)
    printf("Element not found");
    else
    printf("Element found at index %d",result);
    return 0;
}