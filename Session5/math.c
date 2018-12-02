#include <math.h>
#include <stdio.h>


int main()
{
    //square root of x
    int x = sqrt(900.0); // 30.0
    
    printf("%d", x);
    
    
    
    // exponential function e x
    exp(1.0); //is 2.718282
    exp(2.0); // is 7.389056

    //natural logarithm of x (base e)
    log(2.718282); // is 1.0
    log(7.389056); // is 2.0

    //logarithm of x (base 10)
    log10(1.0);   //is 0.0
    log10(10.0);  //is 1.0
    log10(100.0); // is 2.0

    //  absolute value of x
    fabs(13.5);  //is 13.5
    fabs(0.0);   //is 0.0
    fabs(-13.5); // is 13.5

    //  rounds x to the smallest integer not less than x
    ceil(9.2);  //is 10.0
    ceil(-9.8); // is -9.0

    // rounds x to the largest integer not greater than x
    floor(9.2);  //is 9.0
    floor(-9.8); //is -10.0

    //  x raised to power y (x^y )
    pow(2, 7);  //is 128.0
    pow(9, .5); //is 3.0

    // remainder of x/y as a floating-point number
    fmod(13.657, 2.333); //is 1.992

    sin(0.0); // is 0.0
    cos(0.0); // is 1.0
    tan(0.0); // is 0.0

    return 0;

}
