#include <stdio.h>
int main()
{
    int sum = 0, a = 1 , b = 2, c = 5;
    float avgF = 0.0;
    int avgI = 0;

    sum = a + b + c;
    avgF = (float)sum / 3;
    avgI = sum / 3;
    printf("Sum : %d \n", sum);
    printf("AvgF : %f \n", avgF);
    printf("AvgI : %d \n", avgI);

    // Precedence
    printf("Test 1 : %d\n", a+b+c / 3);
    printf("Test 2 : %d\n", a+b+(c / 3));
    printf("Test 3 : %d\n", a+ (b+c) / 3);

    printf("Test 4 : %d\n", a* (b+c) / 3); 
    printf("Test 5 : %d\n", a* b+c / 3); 
    printf("Test 6 : %d\n", -a* b+c / 3); 


// ++ --
    printf("before a++ : %d\n" , a++);
    printf("after a++ : %d\n" , a);

    printf("before ++a : %d\n" , ++a);
    printf("after ++a : %d\n" , a);

// Do with --     

    return 0;
}
