#include <stdio.h>
int main()
{
    int a[3][3];
    int *b=&a;
    int i,j,sum=0;
    printf("Enter 9 elements for 3x3 matrix : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             scanf("%d",(b+i*3+j));
        }
    }
    printf("Entered matrix is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d ",*(b+i*3+j));
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
         if(i==j)
         sum=sum+*(b+i*3+j);
        }
    }
    printf("Sum of all diagonal elements is : %d",sum);
   return 0;
}
