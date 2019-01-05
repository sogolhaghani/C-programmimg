/*
با استفاده از ساختمان نوع داده 
integer
با قابلیت ذخیره عدد ۱۰۰ رقمی را داشته باشد.
علامت عدد را نیز در خود نگه دارد.

توسط این ساختمان تابع  جمع و تفریق نیز پیاده سازی شود.
علامت در نظر گرفته شود.
در صورتی که جمع سرریز شود اخطار اعلام کند.

*/
#define MAX_SIZE 100

#include <stdio.h>

struct MyInteger
{
    int sign;
    int arrNumber[MAX_SIZE];
};
struct MyInteger init();
struct MyInteger convert(char numStr[]);
int convertCharToInt(char _charNum);
struct MyInteger sumWithoutSign(struct MyInteger a, struct MyInteger b);
struct MyInteger subWithoutSign(struct MyInteger a, struct MyInteger b);
struct MyInteger sum(struct MyInteger a, struct MyInteger b);
struct MyInteger sub(struct MyInteger a, struct MyInteger b);
int isBigger(struct MyInteger a, struct MyInteger b);
void printMyInteger(struct MyInteger number);
void main()
{
    char input[MAX_SIZE + 1];

    printf("Please enter Your First integer number : ");
    scanf("%s", input);
    struct MyInteger a = convert(input);
    printf("Please enter Your second integer number : ");
    scanf("%s", input);
    struct MyInteger b = convert(input);

    struct MyInteger sumResult = sum(a, b);
    struct MyInteger subResult = sub(a, b);
    printf("\nSum : ");
    printMyInteger(sumResult);
    printf("\nSub : ");
    printMyInteger(subResult);
    printf("\n");
}

    /*
    این تابع رشته ورودی را تبدیل به ساختمان داده می‌کند. 
    اعداد با توجه به ارزششان در از انتهای آرایه پر می شود. در این صورت اگر تعداد ارقام ار تعداد خانه های ارایه کمتر باشد، در خانه های پر ارزش صفر قرار داده شده است.
    */
struct MyInteger convert(char numStr[])
{
    struct MyInteger number = init();
    int str_len = 0;
    while (numStr[str_len] != '\0')
    {
        str_len++;
    }
    int j = MAX_SIZE - 1;
    for (int i = str_len - 1; i > 0; i--)
    {
        number.arrNumber[j--] = convertCharToInt(numStr[i]);
    }
    switch (numStr[0])
    {
    case '+':
        number.sign = 1;
        break;
    case '-':
        number.sign = (-1);
        break;
    default:
        number.sign = 1;
        number.arrNumber[j] = convertCharToInt(numStr[0]);
    }
    return number;
}

    /*
    این تابع کارکتر حرف را به عدد تبدیل می‌کند.
    */
int convertCharToInt(char _charNum)
{
    switch (_charNum)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    case '0':
        return 0;
    default:
        return -1;
    }
}
/*
جمع دو عدد علامت دار
*/
struct MyInteger sum(struct MyInteger a, struct MyInteger b)
{
    struct MyInteger result;
    if ((a.sign == 1 && b.sign == 1) || (a.sign == (-1) && b.sign == (-1)))
    {
        result = sumWithoutSign(a, b);
        result.sign = a.sign;
    }
    else
    {
        if (isBigger(a, b) == 1)
        {
            result = subWithoutSign(a, b);
            result.sign = a.sign;
        }
        else
        {
            result = subWithoutSign(b, a);
            result.sign = b.sign;
        }
    }
    return result;
}

/*
تفریق دو عدد علامت دار
*/
struct MyInteger sub(struct MyInteger a, struct MyInteger b)
{
    struct MyInteger result;

    if ((a.sign == 1 && b.sign == -1) || (a.sign == (-1) && b.sign == 1))
    {
        result = sumWithoutSign(a, b);
        result.sign = a.sign;
    }
    else
    {
        if (isBigger(a, b) == 1)
        {
            result = subWithoutSign(a, b);
            result.sign = a.sign;
        }
        else
        {
            result = subWithoutSign(b, a);
            result.sign = b.sign*(-1);
        }
    }

    return result;
}
/*
بررسی اینکه کدام عدد بزرگ است.
در صورتی که اولی از دومی بزرگتر باشد عدد 1 و در صورتی که کوچکتر باشد عدد -1 و در صورتی که هر دو مساوی باشند صفر را برمیگرداند.
*/
int isBigger(struct MyInteger a, struct MyInteger b)
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (a.arrNumber[i] == b.arrNumber[i])
            continue;
        if (a.arrNumber[i] > b.arrNumber[i])
            return 1;
        return -1;
    }
    return 0;
}
/*
چاپ عدد
*/
void printMyInteger(struct MyInteger number)
{
    int i = 0;
    while (number.arrNumber[i] == 0 && i < MAX_SIZE)
    {
        i++;
    }
    if(i== MAX_SIZE){
        printf("0");
        return;
    }


    char charSign;
    if (number.sign == -1)
    {
        charSign = '-';
    }
    else
    {
        charSign = '+';
    }
    printf("%c", charSign);

   
    for (int j = i; j < MAX_SIZE; j++)
    {
        printf("%d", number.arrNumber[j]);
    }
    
}
/*
خانه‌های آرایه با صفر مقدار دهی اولیه شده است.
*/
struct MyInteger init()
{
    struct MyInteger number;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        number.arrNumber[i] = 0;
    }
    number.sign = 1;
    return number;
}
/*
این تابع دو عدد را بدون در نظر گرفتن علامت جمع می‌کند. 
*/
struct MyInteger sumWithoutSign(struct MyInteger a, struct MyInteger b)
{
    struct MyInteger result;

    int carry = 0;
    for (int i = MAX_SIZE - 1; i >= 0; i--)
    {
        int temp = a.arrNumber[i] + b.arrNumber[i] + carry;
        carry = temp / 10;
        result.arrNumber[i] = temp % 10;
        if (i == 0 && temp > 9)
        {
            printf("Overflow Happend");
        }
    }
    return result;
}
/*
این تابع عدد 
a
را از 
b
کم میکند. 
فرض این است که همواره عدد 
a
از 
b
بزرگتر است.
*/
struct MyInteger subWithoutSign(struct MyInteger a, struct MyInteger b)
{
    struct MyInteger result;
    for (int i = MAX_SIZE - 1; i >= 0; i--)
    {
        if (a.arrNumber[i] < b.arrNumber[i])
        {
            int j = i;
            if(a.arrNumber[j] < b.arrNumber[j]){
                if(a.arrNumber[j] == 0){
                    a.arrNumber[j] = 10;
                    j--;
                    while(a.arrNumber[j] == 0){
                        a.arrNumber[j] = 9;
                        j--;
                    }
                a.arrNumber[j]--;
                }
            }
        }
        result.arrNumber[i] = a.arrNumber[i] - b.arrNumber[i];

    }
    return result;
}
