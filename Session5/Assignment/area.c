//برنامه ای بنویسید که از کاربر مختصات
// n
// نقطه را دریافت کند و محیط
// ضلعی n
// را محاسبه کند.
// خروجی با 3 و 4 نقطه بررسی شود.
#include <math.h>
#include <stdio.h>

double calculateDistance(int x1, int y1, int x2, int y2);

void main()
{
    int curr_x = 0, curr_y = 0, prev_x = 0, prev_y = 0, first_x = 0, first_y = 0, total = 0;
    int const MIN_NUMBER_COIRDINATE_POINT = 3;
    double environment = 0.0;
    int _continue = 1;
    do
    {
        total++;
        printf("Please Enter (%d) Coordinates (X , Y)\n", total);
        scanf("%d%d", &curr_x, &curr_y);

        if (total == 1)
        {
            prev_x = curr_x;
            prev_y = curr_y;
            first_x = curr_x;
            first_y = curr_y;
            continue;
        }

        float distance = calculateDistance(prev_x, prev_y, curr_x, curr_y);
        environment += distance;
        prev_x = curr_x;
        prev_y = curr_y;
        if (total >= MIN_NUMBER_COIRDINATE_POINT)
        {
            printf("Do you want to continue? 1 -> yes, other key-> no\n");
            scanf("%d", &_continue);
        }

    } while (_continue == 1);
    float distance = calculateDistance(first_x, first_y, curr_x, curr_y);
    environment += distance;
    printf("Environment of %d point is %.2lf\n",total, environment);
}

double calculateDistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}