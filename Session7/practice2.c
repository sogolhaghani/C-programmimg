/*
برنامه ای بنویسید که ابتدا یک رشته وسپس یک کاراکتر را گرفته و
 سپس مشخص کند که این کارکتر چند بار در رشته تکرار شده است
*/

#include <stdio.h>

int const MAX_SIZE = 20;
void main()
{
    char word[MAX_SIZE];
    char compare;
    int count = 0;
    printf("Please Enter a Character :");
    scanf("%c", &compare);
    printf("Please Enter Word max size %d\n", MAX_SIZE);
    scanf("%s", word);
    printf("%s", word);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (word[i] == compare)
        {
            count++;
        }
    }
    
    printf("Character %c repeated %d times\n", compare, count);
}
