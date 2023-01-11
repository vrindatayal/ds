//Program for Ternary search

#include<stdio.h>
void main()
{
    int i,l=0,r,mid1,mid2,found=0,n,data,a[10];
    printf("enter the length of array\n");
    scanf("%d",&n); 
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element you want to search\n");
    scanf("%d",&data);
    /* finding mid points */

    l=0,r=n-1;
    while(l<=r)
    {
        mid1=l+(r-l)/3;
        mid2=r-(r-l)/3;
        if(data==a[mid1])
        {
            printf("data found");
            found=1;
            break;
        }
        else if (data==a[mid2])
        {
            printf("data found");
            found=1;
            break;
        }
        else if (data<a[mid1])
        {
            l=0;r=mid1-1;

        }
        else if(data>a[mid2])
        {
            l=mid2+1;r=n-1;
        }
        else
        {
            l=mid1+1;r=mid2-1;
        }
    }
        if(found==0)
        {
            printf("element not found");
        }
}

    