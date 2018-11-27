#include <stdio.h>

int main()
{
    int input = 0, month = 1, day = 0;
    printf("Please Enter number between 1 and 365 \n");
    scanf("%d", &input);
    if (input > 0 && input < 366)
    {
        while (month <= 12)
        {
            if (month <= 6)
            {
                if (input <= 31)
                {
                    day = input;
                    break;
                }
                else
                {
                    input = input - 31;
                    month++;
                }
            }
            else if (month <= 11)
            {
                if (input <= 30)
                {
                    day = input;
                    break;
                }
                else
                {
                    input = input - 30;
                    month++;
                }
            }
            else
            {
                day = input;
                break;
            }
        }
        printf(" day = %d , month = %d\n", day, month);
    }else{
        printf("Invalid Input \n");
    }
    return 0;
}