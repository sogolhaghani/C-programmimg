/*
تمامی زیر مجموعه های یکی، دوتایی و سه تایی از مجموعه 
{1,2,3,4,5,6,7,8,9,10,11}
را در خروجی چاپ کنید.

از متغیر ثابت در برنامه استفاده شود.

*/


#include <stdio.h>

int main(){

    const int total = 11;
    printf("*** One member***\n");
    for (int i = 1; i <= total ; i++) {
        printf("{%d}",i);
        if(i != total){
            printf(",\t");
        }else{
            printf("\n");
        }
    }


    printf("*** Two member***\n");
    for (int i = 1; i <= total ; i++) {
        for(int j = i+1; j <= total ; j++){
            printf("{%d , %d}",i,j);
            if(j != total){
                printf(",\t");
            }
        }
        printf("\n");
    }   

    printf("*** Three member***\n");
    for (int i = 1; i <= total ; i++) {
        for(int j = i+1; j <= total ; j++){
            for(int k = j+1; k <= total ; k++){
                printf("{%d , %d , %d}", i, j, k);
                if(k != total){
                    printf(",\t");
                }
            }
           if(j != total && j != total -1){
                printf(",\t");
            }
        }
        printf("\n");
    } 


    return 0;
}