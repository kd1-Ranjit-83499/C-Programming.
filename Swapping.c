#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    system("color fd");
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    
    printf("\nBefore swapping: \na=%d and b=%d",a,b);  
 
    a=a+b;
    b=a-b;
    a=a-b; 
    system("color f1");
    printf("\n\nAfter swapping: \na=%d and b=%d",a,b);
    return 0;
}
