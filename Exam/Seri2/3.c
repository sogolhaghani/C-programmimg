#include <stdio.h>
#define SIZE 2
struct Employee
{
    char name[30];
    char jobtitle[30];
    float salary;
    int yearExp;
};

int main()
{

    int n, i;

    struct Employee emp[SIZE];

    for (i = 0; i < SIZE; i++)
    {

        printf("Enter eleman's name => ");
        scanf("%s", emp[i].name);
        printf("\nEnter eleman's jobtitle => ");
        scanf("%s", emp[i].jobtitle);
        printf("\nEnter eleman's salary => ");
        scanf("%f", &emp[i].salary);
        printf("\nEnter eleman's amount of experiment =>");
        scanf("%d", &emp[i].yearExp);
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("Employee %d ->\n\tName : %s\n\tJobTitle :%s\n\tSalary :%f\n\tWork experience :%d\n\n",
        (i+1),
        emp[i].name,
        emp[i].jobtitle,
        emp[i].salary,
        emp[i].yearExp);
    }

    return 0;
}
