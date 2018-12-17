#include <stdio.h>

int cubeByValue(int n);
void cubeByReference(int *nPtr);

void main()
{
    int y = 5;
    int *yPtr;
    yPtr = &y;

    printf("%d\n", *yPtr);
    // printf( "%d", yPtr );    Compile Error
    printf("%p\n", yPtr);
    printf("%p\n", &y);

    // Call By value VS Call By Reference

    int number = 5;
    int resultByValue = cubeByValue(number);
    printf("number after 'cubeByValue' is :\t %d:\n", number);                   // print 5
    printf("return function value :\t %d\n", resultByValue); //print 125

    cubeByReference(&number);
    printf("number after 'cubeByReference' is :\t %d:\n", number);  
}

int cubeByValue(int n)
{
    n = n * n * n;
    return n;
}

void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}