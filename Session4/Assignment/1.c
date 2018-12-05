/*
برنامه ای بنویسید که حاصل ضرب اعداد فرد از 1 تا 50  را محاسبه کند.
از دستور 
continue 
استفاده کنید.
*/

#include <stdio.h>

int main()
{
    const int TOTAL = 50;
    float result = 1;

    for(int i = 1 ; i<= TOTAL ; i++){
        if(i%2 == 0){
            continue;
        }
        result *= i;
    }
    
    printf("%.0f\n", result);
    return 0;
}