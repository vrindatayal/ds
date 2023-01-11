//Program for Selection Sort
/* sorting using two sub arrays lekin sorted sub array me koi element nahi hota hai */
//  1st step--or isme sabse chote element ko 1 place elementb se swap krdete hai 
// 2nd step--fir 2 element  ko reference maan ke chote elemnt dhunte hai (( linear search use hoga isme ))
// NO OF PASS = N-1 HOTE HAI USE 

#include<stdio.h>
void main()
{
    int i,j,a[10],n,min,t;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");

    // array input ke liye loop 
    for(i=0;i<n;i++)     
    {
        scanf("%d",&a[i]);
    }

    // for sorting 
      for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
         }
      if(min!=i)
      { 
        t=a[i];
        a[i]=a[min];
        a[min]=t;
      }
    }
    printf("sorted array is:\n");
    for (i=0;i<n;i++)
    printf("%d\n",a[i]);
  

}