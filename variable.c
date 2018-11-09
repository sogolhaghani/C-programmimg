#include <stdio.h>
// #include <limits.h>
int main()
{
   printf("Hello, World! \n");

// Naming Example
    int _int;
    int a;
    int int1;
//  Complie Error
    /* int #a;
    / int .a;  */

// Default Value
    int defInt;     
    char defChar;
    double defDouble;
    float defFloat;

    printf("Defalt value for type int : %d \n",defInt);
    // printf("Defalt value for type char : %c \n",defChar);
    printf("Defalt value for type double : %f \n",defDouble);
    printf("Defalt value for type float: %f \n",defFloat);

// Notice : It's Better to initilize them all the Time

    // Assignment
    defInt = 0;
    defChar = 'a';
    defFloat = 0.0;
    defDouble = 0.0;

    printf("Initialized value for type int : %d \n",defInt);
    printf("Initialized value for type char : %c \n",defChar);
    printf("Initialized value for type double : %f \n",defDouble);
    printf("Initialized value for type float: %f \n",defFloat);


    int i = 0, j =0;
    printf("Initialized value for i: %d \n", i);
    printf("Initialized value for j: %d \n", j);

    // assing to double, float, char

    int b,c,d = 0; //?
    printf("value of C : %d \n", c);


// Signed and Unsigned
    int unsigned uInt = 12;
    printf("Initialized value for uInt: %u \n", uInt);
    uInt = -8888;
    printf("assigned value for uInt: %u \n", uInt);
    // UINT_MAX from limits.h
    // printf("Maximum Unsigned int : %u" , UINT_MAX);

    // assing to double, float, char

// Long & short 

    // short double shDouble = 555.2;
    short int shInt = 12300;
    printf("value of  shInt : %d \n", shInt);
    

// Read Data from input
    int intA =0;
    int floatA =0.0;

    printf("Please Enter int value ...\n");
    scanf("%d",&intA );
    printf("You enter %d\n",intA);


   return 0;

}

