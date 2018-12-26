#include <stdio.h>
#include <string.h>

#define SIZE 4
#define LIST_DEFAULT_SIZE 100

struct Item
{
    char name[20];
    int code;
    int numberOfAvailable;
    float price;
};

struct Client
{
    char name[50];
    char mobile[11];
    struct Item itemList[LIST_DEFAULT_SIZE];
};

void printLine();
void calculateAndPrintFactor(struct Client _client);
void initItemList(struct Item itemList[LIST_DEFAULT_SIZE]);
int itemCount(struct Item *itemPointer, int itemCode);
float itemPrice(struct Item *itemPointer, int itemCode);

void main()
{
    struct Item item1 = {"Milk", 1, 10, 5000};
    struct Item item2 = {"Cheese", 2, 10, 2000};
    struct Item item3 = {"Cake", 3, 10, 1000};
    struct Item item4 = {"Cream", 4, 10, 2500};

    int _continue = 1, code = 0, i = 0, count = 0;
    struct Client c;
    initItemList(c.itemList);
    printf("please enter client's name: ");
    scanf("%s", c.name);
    printf("please enter client's mobile number: ");
    scanf("%s", c.mobile);
    while (_continue == 1)
    {

        printf("please enter code of item : 1, 2, 3, 4\n");
        scanf("%d", &code);
        printf("please enter number of tems\n");
        scanf("%d", &count);

        switch (code)
        {
        case 1:
            if (item1.numberOfAvailable == 0)
            {
                printf("%s is not available right now.", item1.name);
            }
            else
            {
                for (int j = 0; j < count; j++)
                {
                    c.itemList[i++] = item1;
                    --item1.numberOfAvailable;
                }
            }
            break;
        case 2:
            if (item2.numberOfAvailable == 0)
            {
                printf("%s is not available right now.", item2.name);
            }
            else
            {
                for (int j = 0; j < count; j++)
                {
                    c.itemList[i++] = item2;
                    --item2.numberOfAvailable;
                }
            }
            break;
        case 3:
            if (item3.numberOfAvailable == 0)
            {
                printf("%s is not available right now.", item3.name);
            }
            else
            {
                for (int j = 0; j < count; j++)
                {
                    c.itemList[i++] = item3;
                    --item3.numberOfAvailable;
                }
            }
            break;
        case 4:
            if (item4.numberOfAvailable == 0)
            {
                printf("%s is not available right now.", item4.name);
            }
            else
            {
                for (int j = 0; j < count; j++)
                {
                    c.itemList[i++] = item4;
                    --item4.numberOfAvailable;
                }
            }
            break;
        default:
            printf("Wrong code\n");
        }

        printf("Do you want to continue? 1 -> yes, other key-> no\n");
        scanf("%d", &_continue);

    }
    calculateAndPrintFactor(c);
}

void calculateAndPrintFactor(struct Client _client)
{
    printf("\n\n");
    printf("\t\tMY SHOPPING CENTER\n");
    printf(" \t\tCASH BILL\n");
    printLine();
    printf("CODE\tCOUNT\tIETM PRICE\tTOTAL PRICE\n");
    printLine();
    int totalItem = 0, totalPrice = 0, perItemCount = 0;
    float perItemPrice = 0.0;
    for (int i = 0; i < SIZE; i++)
    {
        if (itemCount(_client.itemList, i+1) == 0)
        {
            continue;
        }
        perItemCount =itemCount(_client.itemList, i+1);
        perItemPrice =  itemPrice(_client.itemList, i+1);
        totalItem += perItemCount;
        totalPrice += perItemPrice;
        printf("%d\t", i + 1);
        printf("%3d\t", perItemCount);
        printf("%4lf\t",perItemPrice /  perItemCount);
        printf("%15lf\n", perItemPrice);
    }
    printLine();
    printf("\t %d", totalItem);
    printf(" \t\t\t%d\n", totalPrice);
    if (totalPrice > 100000)
    {
        printLine();
        printf("\t 15\%%");
        printf(" \t\t\t%.0f\n", totalPrice * 0.85);
    }
}

void printLine()
{
    const int line = 50;
    for (int i = 0; i < line; i++)
    {
        printf("_");
    }
    printf("\n");
}

int itemCount(struct Item *itemPointer, int itemCode)
{
    int count = 0;
    for (int i = 0; i < LIST_DEFAULT_SIZE; i++)
    {
        if(itemPointer->code == -1 ){
            return count;
        }
        if (itemPointer->code == itemCode)
        {
            count++;
        }
        itemPointer++;
    }
    return count;
}

float itemPrice(struct Item *itemPointer, int itemCode)
{
    float price = 0;
    for (int i = 0; i < LIST_DEFAULT_SIZE; i++)
    {
        if(itemPointer->code == -1 ){
            return price;
        }
        if (itemPointer->code == itemCode)
        {
           price += itemPointer->price;
        }
        itemPointer++;
    }
    return price;
}



void initItemList(struct Item itemList[LIST_DEFAULT_SIZE]){
    for (int i = 0; i < LIST_DEFAULT_SIZE; i++)
    {
        itemList[i].code= -1;
    }
}