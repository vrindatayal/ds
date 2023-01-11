//Program for Insertion Sort
/* sorting by using method of divison of array into two subarrays */

#include<stdio.h>
void main()
{
    int i,j,t,n,a[10];
    printf("enter size of array\n");
    scanf("%d",&n); 
    printf("enter array elements\n");   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++) 
    {
        
        j=i+1;      
        while(j>0&&a[j-1]>a[j])  
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t; 
            j--;
        }
    }
        
        for(i=0;i<n;i++)
        printf("sorted array is : %d\n",a[i]);

}