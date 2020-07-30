#include <stdio.h>

int lcm(int, int);

int main()
{
    int a, b, ans;
    int prime[100];

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    ans = lcm(a, b);
    printf("LCM of %d and %d is %d\n", a, b, ans);
    return 0;
}

int lcm(int a, int b)
{
    static int com = 1;

    if (com % a == 0 && com % b == 0)
    {
        return com;
    }
    com++;
    lcm(a, b);
    return com;
}
