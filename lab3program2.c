//Program for Matrix Subtraction

#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],n,m,i,j,c[10][10];
    printf("enter array size of 1st matrix :");
    scanf("%d",&n);
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        
    }
    printf("enter array size of 2nd matrix :");
    scanf("%d",&m);
    printf("enter array elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }   
    }
    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
              c[i][j]=a[i][j]-b[i][j];
            }
            printf("\n");
        }
      
    }

     for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
              printf("%d ",c[i][j]);
            }
            printf("\n");
        }
      
    
}