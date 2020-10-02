#include<stdio.h>
#include<stdlib.h>

int Prime(int,int);

int main()
{

    int num,prime;
    system("color fd");
    printf("Enter any number: ");
    scanf("%d",&num);

    prime = Prime(num,num/2);

    if(prime==1)
    {
        system("color f3");
        printf("%d is a prime number",num);
    }
    else
    {
        system("color f1");
        printf("%d is not a prime number",num);
    }

    return 0;
}

int Prime(int num,int i)
{

    if(i==1)
        return 1;
    else
    {
        if(num%i==0)
            return 0;
        else
            Prime(num,i-1);
    }
}
