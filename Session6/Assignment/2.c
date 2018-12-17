/*
‫‪:‬‬ ‫کند‬ ‫مشخص‬ ‫را‬ ‫زیر‬ ‫موارد‬ ‫درپایان‬ ‫و‬ ‫گرفته‬ ‫را‬ ‫نفر‬ 20 ‫اسمهاي‬ ‫که‬ ‫بنویسید‬ ‫اي‬ ‫برنامه‬
‫نام چند نفر از آنها -
sara
است‬ ‫ ‬‬


‫چند نام 5 حرفی وجود دارد ‫‪-‬‬


چندتا از اسامی با حرف‫‪- 
a
شروع می شوند ‬ 
‬‬
- طولانی ترین اسم را نمایش دهد
*/
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int const TOTAL = 20;

int isSaraEntered(char name[MAX_SIZE]);
int findNameLength(char name[MAX_SIZE]);
int isStartWithA(char firstLetter);

int main()
{
    char name[MAX_SIZE];
    char nameWithMaxLength[MAX_SIZE];
    int max = 0;
    int fiveSizeCount = 0;
    int saraCount = 0;
    int aCount = 0;

    for (int i = 0; i < TOTAL; i++)
    {
        printf("Please Enter name (%d) :", i+1);
        scanf("%s", name);
        printf("\n");

        if (isSaraEntered(name) == 1)
        {
            saraCount++;
        }

        if (isStartWithA(name[0]) == 1)
        {
            aCount++;
        }

        int size = findNameLength(name);
        if (size == 5)
        {
            fiveSizeCount++;
        }
        if (size > max)
        {
            max = size;
            strcpy(nameWithMaxLength, name);
        }
    }
    printf("Sara Count : %d \n", saraCount);
    printf("Name Start with A, Count : %d \n", aCount);
    printf("max length %d, name is : %s \n", max, nameWithMaxLength);

    return 0;
}

int isSaraEntered(char name[MAX_SIZE])
{
    if (name[0] == 's' && name[1] == 'a' && name[2] == 'r' && name[3] == 'a' && name[4] == '\0')
    {
        return 1;
    }
    return 0;
}

int findNameLength(char name[MAX_SIZE])
{
    int i = 0, count = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int isStartWithA(char firstLetter)
{
    if (firstLetter == 'a')
    {
        return 1;
    }
    return 0;
}