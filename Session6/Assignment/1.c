/*

کالا |  قیمت
------------
5000  | 1
------------
2000  | 2
------------
1000  | 3
------------
2500  | 4



برنامه ای بنویسید اپراتور با وارد کردن شماره کالاهای کاربر و تعداد آن فیش خرید آن ها را صادر کند.

1- اپراتور فقط باید تعداد و شماره کالا را وارد کند
2- فیش باید با فرمت مشخصی چاپ شود.
3- فیش باید شامل تمامی جزییات از جمله قیمت هر کالا، مجموع قیمت هر کالا تعداد هر کالا، قیمت کل و تعداد کل باشد
4- در صورتی که مجموع قیمت ها از 100000 بیشتر شد، به مشتری 15% تخفیف دهد.
قیمت قبل و بعد تخفیف نیز چاپ شود.


نکته:
از آرایه استفاده شود
ایرادهای برنامه گذشته تان نباید وجود داشته باشد.
*/
#include <stdio.h>

#define SIZE 4
void printLine();
void calculateAndPrintFactor(const int perItemPrices[4], int itemCount[4]);
int main()
{
    int _continue = 1, code = 0, i = 0, count = 0;
    const int price[SIZE] = {5000, 2000, 1000, 2500};
    int itemCount[SIZE] = {0, 0, 0, 0};
    while (_continue == 1)
    {
        printf("please enter code of item : 1, 2, 3, 4\n");
        scanf("%d", &code);
        if (code <= 4 && code >= 1)
        {
            printf("please enter number of item\n");
            scanf("%d", &count);
            itemCount[code - 1] += count;
        }
        else
        {
            printf("Wrong code!!!\n Try again...\n");
        }

        printf("Do you want to continue? 1 -> yes, other key-> no\n");
        scanf("%d", &_continue);
    }
    calculateAndPrintFactor(price, itemCount);
    return 0;
}

void calculateAndPrintFactor(const int perItemPrices[SIZE], int itemCount[SIZE])
{
    printf("\n\n");
    printf("\t\tMY SHOPPING CENTER\n");
    printf(" \t\tCASH BILL\n");
    printLine();
    printf("CODE\tCOUNT\tIETM PRICE\tTOTAL PRICE\n");
    printLine();
    int totalItem = 0, totalPrice = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (itemCount[i] == 0)
        {
            continue;
        }
        totalItem += itemCount[i];
        totalPrice += itemCount[i] * perItemPrices[i];
        printf("%d\t", i + 1);
        printf("%3d\t", itemCount[i]);
        printf("%4d\t", perItemPrices[i]);
        printf("%15d\n", perItemPrices[i] * itemCount[i]);
    }
    printLine();
    printf("\t %d", totalItem);
    printf(" \t\t\t%d\n", totalPrice);
    if (totalPrice > 100000)
    {
        printLine();
        printf("\t 15\%%");
        printf(" \t\t\t%.0f\n", totalPrice * 0.85);
    }
}

void printLine()
{
    const int line = 50;
    for (int i = 0; i < line; i++)
    {
        printf("_");
    }
    printf("\n");
}