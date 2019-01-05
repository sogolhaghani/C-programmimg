#include <stdio.h>
int a_n(int n);

int main()
{
    int x=0;
    printf("Enter N : ");
    scanf("%d", &x);
    printf("\nThe Result is %d\n", a_n(x));
    return 0;
}

int a_n(int n)
{
    if (n <= 1)
    {
        return n + 1;
    }

    else
    {
        return 6 * a_n(n - 1) - 9 * a_n(n - 2);
    }
}