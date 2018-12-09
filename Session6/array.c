#include <stdio.h>

void main()
{
    int n[10]; /* n is an array of 10 integers */
    int i;     /* counter */

    /* initialize elements of array n to 0 */
    for (i = 0; i < 10; i++)
    {
        n[i] = 0; /* set element at location i to 0 */
    }             /* end for */

    printf("%s%13s\n", "Element", "Value");
    /* output contents of array n in tabular format */

    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    } /* end for */

    int other[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    // int other[] = {32, 27, 64, 18, 95, 14};

    printf("%s%13s\n", "Element", "Value");
    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, other[i]);
    }

    int other_1[10] = {5};
    printf("%s%13s\n", "Element", "Value");
    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, other_1[i]);
    }
}