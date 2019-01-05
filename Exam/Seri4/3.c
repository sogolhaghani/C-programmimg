#include <stdio.h>

struct Account
{
    char name[30];
    char telephone[8];
    float cash;
};

int main()
{
    int n = 0;
    printf("Enter Number of Account : ");
    scanf("%d", &n);
    struct Account acc[n];
    for (int i = 0; i < n; i++)
    {
        printf("please Enter (%d) Account information : => ", (i+1));
        printf("\nEnter name : => ");
        scanf("%s", acc[i].name);
        printf("\nEnter Telephone : => ");
        scanf("%s", acc[i].telephone);
        printf("\nEnter Cash : => ");
        scanf("%f", &acc[i].cash);
    }
    printf("******\tEmpty Account\t***********\n");
    for (int i = 0; i < n; i++)
        if (acc[i].cash == 0)
        {
            printf("Name : %s\t%s\n", acc[i].name,acc[i].telephone);
        }
    return 0;
}
