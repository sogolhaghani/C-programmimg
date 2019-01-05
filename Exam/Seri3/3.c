#include <stdio.h>

#define STR_MAX_LEN 20
#define LIST_SIZE 2

struct Car
{
    char name[STR_MAX_LEN];
    int year;
    float price;
    char type[STR_MAX_LEN];
};

int main()
{
    struct Car carList[LIST_SIZE];
    printf("Please fill Car information:\n");
    for (int i = 0; i < LIST_SIZE; i++)
    {
        printf("%d_ Name => ", (i + 1));
        scanf("%s", carList[i].name);

        printf("\n%d_ Year => ", (i + 1));
        scanf("%d", &carList[i].year);

        printf("\n%d_ price => ", (i + 1));
        scanf("%f", &carList[i].price);

        printf("\n%d_ Type (Savari, otobous, Kamion) => ", (i + 1));
        scanf("%s", carList[i].type);
    }
    printf("\nCars information:\n");

        for (int i = 0; i < LIST_SIZE; i++)
    {
        printf("%d_ \n\tName => %s \n\tYear => %d\n\tPrice => %f (T)\n\tType => %s\n", (i + 1),carList[i].name,carList[i].year,carList[i].price,carList[i].type);
    }
}