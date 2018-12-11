#include <stdio.h>

#define RESPONSE_ARRAY_SIZE 99
#define ITEMS_COUNT 9

float mean(int input[]);
int mode(int input[]);
void histogram(int input[]);
// int median( int input[] );
// void bubbleSort( int input[] );

void main(void)
{
    int response[RESPONSE_ARRAY_SIZE] =
        {6, 7, 8, 7, 8, 9, 6, 7, 8, 7,
         8, 9, 6, 7, 8, 7, 8, 9, 5, 6,
         7, 7, 8, 9, 7, 4, 4, 4, 5, 6,
         9, 8, 7, 8, 9, 5, 9, 8, 7, 8,
         9, 3, 9, 8, 7, 8, 9, 8, 9, 7,
         7, 8, 7, 9, 8, 8, 9, 8, 9, 7,
         2, 5, 3, 9, 4, 6, 8, 7, 8, 9,
         2, 5, 3, 8, 7, 1, 6, 5, 7, 8,
         8, 9, 7, 8, 8, 7, 8, 9, 9, 2,
         5, 3, 6, 4, 7, 8, 5, 6, 7};
    float res_mean = mean(response);
    printf("Mean = %f\n", res_mean);

    int res_mode = mode(response);
    printf("Mode = %d\n", res_mode);
    histogram(response);
}

float mean(int input[])
{
    float result = 0.0;
    for (int i = 0; i < RESPONSE_ARRAY_SIZE; i++)
    {
        result += input[i];
    }
    return (float)result / RESPONSE_ARRAY_SIZE;
}

int mode(int input[])
{
    int rate[ITEMS_COUNT] = {0};
    int max = 0;
    int mode = 0;
    for (int i = 0; i < RESPONSE_ARRAY_SIZE; i++)
    {
        rate[input[i] - 1]++;
    }
    for (int i = 0; i < ITEMS_COUNT; i++)
    {
        if (max < rate[i])
        {
            max = rate[i];
            mode = i + 1;
        }
    }
    return mode;
}

void histogram(int input[])
{
    int rate[ITEMS_COUNT] = {0};
    int max = 0;
    int mode = 0;
    for (int i = 0; i < RESPONSE_ARRAY_SIZE; i++)
    {
        rate[input[i] - 1]++;
    }

    for (int i = 0; i < ITEMS_COUNT; i++)
    {
        printf("%d\t| ", i + 1);
        for (int j = 0; j<rate[i]; j++)
        {
            printf(">");
        }
        printf("\n");
    }
}