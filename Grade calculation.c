#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks: \n");
    scanf("%d",&m);
    
    if(m>=85)
        {
            printf("Grade A");
        }
    else if(m>=70)
        {
            printf("Grade B");
        }
    else if(m>=55)
        {
            printf("Grade C");
        }
    else if(m>=40)
        {
            printf("Grade D");
        }
    else if(m<40)
        {
            printf("Grade F");
        }
    return 0;
}
