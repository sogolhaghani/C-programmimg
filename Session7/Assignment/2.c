/*
برنامه ای بنویسید که آرایه ای از رشته ایجاد کند.
مثال : 
{"apple", "banana", "peach", "lemon"}

سپس این رایه را بتوجه به طول رشته مرتب کند و در خروجی چاپ نماید.
*/

#include <stdio.h>
#include <string.h>

#define SIZE 4

#define STRING_MAX_SIZE 50

void initList(char listPtr[SIZE][STRING_MAX_SIZE]);
void sortByLength(char listPtr[SIZE][STRING_MAX_SIZE]);
void printArray(char listPtr[SIZE][STRING_MAX_SIZE]);
int main()
{
    char list[SIZE][STRING_MAX_SIZE];
    initList(list);
    sortByLength(list);
    printArray(list);
}

void initList(char listPtr[SIZE][STRING_MAX_SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nPlease Enter Name : ");
        scanf("%s", listPtr[i]);
    }
}
void printArray(char listPtr[SIZE][STRING_MAX_SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n%s", listPtr[i]);
    }
}

void sortByLength(char listPtr[SIZE][STRING_MAX_SIZE])
{

    char temp[STRING_MAX_SIZE];
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (strlen(listPtr[i]) > strlen(listPtr[j]))
            {
                strcpy( temp,listPtr[i]);
                strcpy( listPtr[i],listPtr[j]);
                strcpy(listPtr[j],temp);
            }
        }
        
    }
}
