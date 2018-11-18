#include <stdio.h>

int main(){

    int x = 0 , y = 5;
    float f = 0.0 , w = -0.2;

    if( x == y ){
        printf ("X and Y are equal to %d \n" , x);
    }

    if( x > y ){
        printf ("X is greater than Y \n" );
    }

    if( x < y ){
        printf ("X is less than Y \n");
    }

    if( x != y ){
        printf ("x and y are not equal. X = %d , Y = %d \n" , x , y);
    }

    if( x >= y ){
        printf ("X is greater than or equal Y \n");
    }

    if( x <= y ){
        printf ("X is less than or equal Y \n");
    }

/**********************Not Recommended For using*************************/
    if( x <= y )
        printf ("X is less than or equal Y \n");
       

/***************************************************************/
// Is float value equal to int value ? 
    if( x == f ){
        printf ("x and f are equal \n");
    }

/***************************************************************/
// Local VS Global Varibale 
    if( x == f ){
        float t = 1.854;
        t = f + t;
        printf("t : %f \n", t);
    }
    // printf("t : %f", t);

/******************** IF ElSE ************************/
    double mm = 5896.2325;

    if ( mm < w ){
        mm++;
    }else if( mm == w){
        mm--;
    }else{
        mm = 0;
    }
    printf(" mm : %f \n",mm);




    return 0;
}