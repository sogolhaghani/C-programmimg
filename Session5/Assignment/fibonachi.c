// برنامه ای بنویسید که به صورت بازگشتی دنباله فیبوناچی را حساب کند
//  0,1,1,2,3,5,8,13,21,34,55,89,144, ...

#include <stdio.h>

int fibonachi(int x);

int main()
{
    int x = 5;
    printf("fibonachi of %d is %d", x, fibonachi(x));
    return 0;
}

int fibonachi(int x){
    if(x == 1 || x == 0){
        return 1;
    }
    return fibonachi(x - 1) + fibonachi(x-2);

}