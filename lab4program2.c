//Program for Binary search
/* ARRAY SHOULD BE SORTED */

#include<stdio.h>
void main()
{
    int a[10],i,l,r,mid,found=0,n,data;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element you want to search\n ");
    scanf("%d",&data);
    l=0,r=n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==a[mid])
        {
            printf("data found");
            found=1;
            break;
        }
        else if( data<a[mid])
            r=mid-1;
        else 
            l=mid+1;
    }
    if(found==0)
    {
        printf("data not found");
    }
}