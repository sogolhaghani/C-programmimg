#include <stdio.h>
#include <string.h>

struct city
{
    char name[20];
    long int latitude;
    long int longitude;
};

struct province
{
    char name[20];
    int numberOfCities;
    struct city cityList[20];
};
void printCity(struct city);
void main()
{
    struct province tehran;
    strcpy(tehran.name, "Tehran");
    tehran.numberOfCities = 5;

    struct city tehranCity = {"Tehran", 50, 1501};
    struct city rey = {"Rey", 50, 1901};
    struct city shemiran = {"Shemiran", 500, 11501};
    struct city abali = {"Abali", 70, 1201};
    struct city pardis = {"Pardis", 90, 1561};

    tehran.cityList[0] = tehranCity;
    tehran.cityList[1] = rey;
    tehran.cityList[2] = shemiran;
    tehran.cityList[3] = pardis;
    tehran.cityList[4] = abali;

    printf("Province Name : %s\n", tehran.name);
    printf("Number of Cities : %d\n", tehran.numberOfCities);
    printf("Cities information :\n");

    for (int i = 0; i < tehran.numberOfCities; i++)
    {
        // printf("\tCity Name : %s\n", tehran.cityList[i].name);
        // printf("\tlatitude : %ld,\t longitude : %ld\n", tehran.cityList[i].latitude, tehran.cityList[i].longitude);
        
        printCity(tehran.cityList[i]);
    
    }
}

void printCity(struct city)
{
    printf("\tCity Name : %s\n", city.name);
    printf("\tlatitude : %ld,\t longitude : %ld\n", city.latitude, city.longitude);
}