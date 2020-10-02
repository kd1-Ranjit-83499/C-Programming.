#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m;
    system("color fd");
    printf("Enter your marks: \n");
    scanf("%d",&m);
    
    if(m>=85)
        {
        system("color fa");
        printf("Grade A");
        }
    else if(m>=70)
        {
        system("color fa");
        printf("Grade B");
        }
    else if(m>=55)
        {
            system("color fa");
        printf("Grade C");
        }
    else if(m>=40)
        {
            system("color fa");
        printf("Grade D");
        }
    else if(m<40)
        {
           system("color fc");
        printf("Grade F");
        }
    return 0;
}
