#include <string.h>
#include <stdio.h>

struct post
{
    char postalCode[11];
    char mainStreet[100];
    char avnue[100];
    int no;
    int floor;
};
int main()
{
    struct post house;
    printf("Enter Postal code : ");
    scanf("%s", house.postalCode);
    printf("\nEnter Main street: ");
    scanf("%s", house.mainStreet);
    printf("\nEnter Avenue: ");
    scanf("%s", house.avnue);
    printf("\nEnter Number:");
    scanf("%d", &house.no);
    printf("\n Enter Floor");
    scanf("%d", &house.floor);

    printf("\n Address =>\n\tPostalCode : %s\n\tMain Street : %s\n\tAvenue : %s\n\tNumber: %d\n\tFloor: %d\n", 
    house.postalCode, house.mainStreet, house.avnue, house.no, house.floor);
    return 0;
}