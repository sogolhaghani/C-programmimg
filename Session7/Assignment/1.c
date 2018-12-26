/*
با استفاده از اشاره‌گر، تابع و آرایه برنامه جستجو بنویسید:
در این برنامه تنها یک آرایه تعریف شود.
مقادیر داخل ارايه از طریق یک تابع به صورت فراخوانی با ارجاع از کاربر گرفته شود و پر شود 
در تابع دیگر که باز نیز به صورت فراخوانی با ارجاع هست عمل جستجو انجام شود.
در صورتی که عدد مورد نظر پیدا شد عدد 1 و در غیر این صورت عدد صفر را برگرداند.
آرایه 15 عضوی باشد.
*/

#include <stdio.h>

#define SIZE 15

void initList(int *listPtr);
int linearSearch(int *listPtr, int *searchItemPtr);
int main()
{
    int list[SIZE];
    int searchItem;
    initList(list);
    printf("\nPlease Enter number to search : ");
    scanf("%d", &searchItem);
    int found = linearSearch(list, &searchItem);
    if(found == 1){
        printf("item exist");
    }else{
        printf("Oops. Item not found");
    }
    return 0;
}

void initList(int *listPtr){
    for(int i=0; i< SIZE; i++){
        printf("\nPlease Enter number : ");
        scanf("%d", listPtr);
        listPtr++;
    }
}
int linearSearch(int *listPtr, int *searchItemPtr){
    for(int i=0; i< SIZE; i++){
       if(*listPtr == *searchItemPtr){
           return 1;
       }
       listPtr++;
    }
    return 0;
}
