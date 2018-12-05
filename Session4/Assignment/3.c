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
2- فیش شامل تعداد کل و مجموع قیمت ها باشد.

3- از 
switch - case 
استفاده شود.
4- در انتها اپراتور مشخص کند کند که دیگر ورودی وجود ندارد.
*/

#include <stdio.h>

int main()
{
    int _continue = 1;
    int code = 0, total_items = 0, total_prise = 0, count = 0;
    while (_continue == 1)
    {
        printf("please enter code of item : 1, 2, 3, 4\n");
        scanf("%d", &code);
        switch (code)
        {
        case 1:
            total_prise += 5000;
            break;
        case 2:
            total_prise += 2000;
            break;
        case 3:
            total_prise += 1000;
            break;
        case 4:
            total_prise += 1500;
            break;
        default:
            printf("Wrong code!!!\n Try again...\n");
            continue;
        }
        printf("please enter number of item\n");
        scanf("%d", &count);
        total_items += count;
        printf("Do you want to continue? 1 -> yes, other key-> no\n");
        scanf("%d",&_continue);
    }
    printf("total items:\t%d\ntotal price\t%d (Riaal)\n",total_items,total_prise);

    return 0;
}