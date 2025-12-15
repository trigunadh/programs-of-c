#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,min;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if (a[min]>a[j])
            {
                min=j;
            }

        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;    
        }
    }
    printf("Sorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }   
    return 0;
}
