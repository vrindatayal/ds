//Program for Bubble Sort
/* no of passes =n-1 */
// no of comaprison should be dcrease as no of passes increases

#include<stdio.h>
void main()
{
    int i,j,a[10],flag=0,t,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");

    // array input ke liye loop 
    for(i=0;i<n;i++)     
    {
        scanf("%d",&a[i]);
    }

    //for sorting 
    for(i=0;i<n-1;i++)
    { flag=0;                    // flag isliye use kiya kyuki agr kam pass me hi array sort ho jaye to aag eke pass chalne ka koi fayada nahi hai isliye flag se pata chl jayega ki array sort hua ki nahi 
        for(j=0;j<n-1-i;j++)     // j-1-i islye kiya kyuki jab pata hai ki last elements sort ho gaye to kya fayada
        {
          if(a[j]>a[j+1])
          {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            flag=1;
          }
        } 
        if(flag==0)
        break;     
    }
    printf("sorted array is:\n");
    for (i=0;i<n;i++)
    printf("%d\n",a[i]);

}