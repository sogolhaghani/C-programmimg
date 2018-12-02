
#include <stdio.h>

int fact(int x);

int main()
{
    int x = 5;
    printf("fact of %d is %d", x, fact(x));
    return 0;
}

int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x * fact(x - 1);
}