#include <stdio.h>
void printCharacters(char *sPtr);
int main(void)
{
    char string[] = "print characters of a string";
    printf("The string is:\n");
    printCharacters(string);
    printf("\n");
    return 0;
}
void printCharacters(char *sPtr)
{
    for (; *sPtr != '\0'; sPtr++)
    {
        printf("%c ", *sPtr);
    }
}