#include <stdio.h>

/* الگوی تابع
    خروجی از نوع int
    ورودی یک متغیر از نوع int
 */
int square(int x);
void power(int x, int y);
int cube(int x);

// متغیر سراسری قایل استفاده در همه توابع
int x = 10;

int main()
{
    for (int x = 1; x <= 10; x++)
    {
        printf("%d\t", square(x)); /* function call */
    }
    printf("\n");
    power(5, 2);
    printf("\n");
    printf("%d", cube(2));

    return 0;
}

/* تعریف تابه
    خروجی از نوع int
    ورودی یک متغیر از نوع int

*/
int square(int y)
{
    return y * y; /* خروجی از نوع int */
} /* انتهای تعریف تابع*/

void power(int x, int y)
{
    int power = 1;
    for (int i = 0; i < y; i++)
    {
        power *= x;
    }
    printf("%d", power);
}

int cube(int y)
{
    // int x = y * y * y ;
    x = y * y * y;
    return x;
}

/********************ERRORs**************************/

//void power(int x, int y)
// {
//     int power = 1;
//     for (int i = 0; i < y; i++)
//     {
//         power *= x;
//     }
//     printf("%d", power);
//     return power;
// }

// int square(int y)
// {
//      y * y;
// }

// void power(int x, y)
// {
//     int power = 1;
//     for (int i = 0; i < y; i++)
//     {
//         power *= x;
//     }
//     printf("%d", power);
//     return power;
// }

// void power(int x, int y)
// {
//     int x = 1;
//     for (int i = 0; i < y; i++)
//     {
//         x *= x;
//     }
//     printf("%d", x);
// }

// void power(int x, int y)
// {
//     int power = 1;
//     for (int i = 0; i < y; i++)
//     {
//         power *= power;
//     }
//     printf("%d", power);

//     int square(int y)
//     {
//         return y * y;
//     }
// }
