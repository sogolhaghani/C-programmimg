#include <stdio.h>

void main(void)
{
    char string1[] = "first";
    // char string1[] = { 'f', 'i', 'r', 's', 't', '\0' };

    int count = 0;
    while (string1[count] != '\0')
    {
        count++;
    }
    printf("size of the first string is : %d", count);

    char string2[20];
    scanf("%s", string2);

    printf("%s\n", string2);

    /************ Necessary Headers and Functions ************/
    // #include <string.h>
    char str1[500], str2[500];
    gets(str1);
    // scanf("%s",str);
    puts(str1);
    strcmp(str1, str2);
    strcat(str1, str2);
}