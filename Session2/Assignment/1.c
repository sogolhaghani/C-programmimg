// برنامه ای بنویسید که محیط و مساحت دایره را با دریافت شعاع از ورودی محاسبه کند.
// شعاع دایره با مقادیر مختلفی از جمله 
// double 
// و 
//  float
// نیز امتحان شود. 


#include <stdio.h>

int main(){

/*********************Calculate with float Value***************************/
    float radius_f= 0. , area_f = 0.0 , circumference_f = 0.0;
    const float PI = 3.14;
    printf("Please Enter value for Radius : \n");
    scanf("%f", &radius_f);

    circumference_f = 2 * radius_f * PI ;
    area_f = radius_f * radius_f * PI ;

    printf("Circumference = %f\n",circumference_f );
    printf("Area = %f\n",area_f );
/*********************Calculate with Double Value***************************/
    double radius_d = 0.0, area_d = 0.0 , circumference_d = 0.0;


    printf("Please Enter value for Radius : \n");
    scanf("%lf", &radius_d);

    circumference_d = 2 * radius_d * PI ;
    area_d = radius_d * radius_d * PI ;

    printf("Circumference = %lf\n",circumference_d );
    printf("Area = %lf\n",area_d );    

    return 0;
}
