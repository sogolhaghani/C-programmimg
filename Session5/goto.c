#include <stdio.h>

int main()
{

    int x = 1;
// clrscr();
loop1:
    x++;
    if (x < 100)
    {
        goto loop1;
    }
    printf("Maximum value of x is %d", x);

    return 0;
}