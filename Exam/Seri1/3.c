#include <stdio.h>

struct ContactInfo
{
    char telephone[30];
    char mobile[30];
    int citycode;
};

int main()
{

    struct ContactInfo ci;
    printf("enter telephone:");
    scanf("%s", ci.telephone);
    printf("enter mobile:");
    scanf("%s", ci.mobile);
    printf("enter citycode:");
    scanf("%d", &ci.citycode);
    printf("\n\n");
    printf(" telephone:");
    printf("%s", ci.telephone);
    printf(" mobile:");
    printf("%s", ci.mobile);
    printf(" citycode:");
    printf("%d", ci.citycode);
    return 0;
}