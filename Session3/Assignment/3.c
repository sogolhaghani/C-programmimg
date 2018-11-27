/*
برنامه ای بنویسید که 5  عدد از کاربر دریافت کند و از بین آن ها مشخص کند دومین کوچکترین وارد شده کدام است و همچنین به کاربر بگوید که این عدد چندمین عدد ورودی کاربر است.

خروجی را سه بار آزمایش کنید :
1- اعداد به ترتیب صعودی وارد شوند.
2- اعداد به ترتیب نزولی وارد شوند.
3- اعداد با ترتیب های مختلف وارد شوند.


از متغیر ثابت در برنامه استفاده شود.

*/


#include <stdio.h>

int main(){

    int const TOTAL = 5;
    int input = 0, min1 = 0, min2=0, index_min1 =0, index_min2 = 0;
    printf("Please Enter 5 integer number\n");
    scanf("%d",&input);
    min1 = input;
    index_min1 = 1;
    scanf("%d",&input);
    if(input <min1){
        min2 = min1;
        index_min2 = index_min1;
        min1 = input;
        index_min1 = 2;
    }else{
        min2 = input ;
        index_min2 = 2;
    }
   
    for(int i = 3 ; i <= TOTAL ; i++){
        scanf("%d",&input);
        if(input < min1){
            min2 = min1;
            index_min2 = index_min1;
            min1 = input;
            index_min1 = i;
        }else if(input < min2){
            min2 = input ;
            index_min2 = i;
        }
    }

    printf("Minimum second number is %d \n", min2);
    printf("It is the %d you entered\n", index_min2);
    return 0;
}