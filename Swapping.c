#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
      
    printf("\nBefore swapping: \na=%d and b=%d",a,b);  
 
    a=a+b;
    b=a-b;
    a=a-b; 
    
    printf("\n\nAfter swapping: \na=%d and b=%d",a,b);
    return 0;
}
