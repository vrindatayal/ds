//program for Linear Search

#include<stdio.h>
void main()
{
    int a[10],i,found=0,n,data;
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the data you want to find in the array\n");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
       if(a[i]==data)
       {
        printf("data found at :%d position",i+1);
        found=1;
        break;
       }
    }
       if(found==0)
       {
        printf("data not found");
       }

 }
