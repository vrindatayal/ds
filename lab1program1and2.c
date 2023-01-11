//Program for traversing array elements.

#include<stdio.h>
void main()
{
    int a[6]={0,1,2,3,4,},i,b,c;
    printf("existing array is :");
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nenter the element and position you want to insert \n");
    scanf("%d%d",&b,&c);
    for(i=5;i>=c;i--)
    {
        a[i]=a[i-1];
    }
    a[c-1]=b;
    printf("new array is :");
    for(i=0;i<6;i++)
   {
      printf("%d ",a[i]);
   }
}