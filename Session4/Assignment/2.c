/*
برنامه ای بنویسید که 20 عدد از ورودی بخواند.
1- مجموع آن ها را حساب کند
2- در صورتی که عدد منفی وارد شود آن را نادیده بگیرد
*/

#include <stdio.h>

int main()
{
    const int TOTAL = 20;
    int result = 1;
    int i= 1 , number = 0;
    printf("The Program wants you enter 20 positive number :\n");

    do{
        printf("please enter positive number(%d): \n",i);
        scanf("%d",&number);
        if(number <0){
            printf("You entered Negative Number\n");
            continue;
        }
        result += number;
        i++;
    }while(i<=TOTAL);
    
    printf("%d\n", result);
    return 0;
}