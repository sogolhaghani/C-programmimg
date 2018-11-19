#include <stdio.h>

int main(){
   
    const int total = 50;
    // total++;
//  #define PI 3.14;
/***********************************************************************/ 


    int i = 0 , j = 1;

    for (i ; i < total; i++){
        printf("%d \t", i);
    }
    printf("\n");

// ?
    for (i ; i < total; i++){
        printf("Do you think this line is printed");
    }

/**********************Not Recommended For using*************************/
    for (i ; i < total; i++)
        printf("%d \t", i);
    
    printf("\n");    


/**********************Recommended*************************/
    for(int k = 0; k < total; k++){
         printf("%d \t", k);
    }
    printf("\n");    
//  ?    
//  printf("\n %d \n", k);


/**********************Not Recommended For using*************************/
    // for(; ; ){
    //      printf("Print for ever ....");
    // }

/***********************************************************************/    

    for(j = 0; j < total; j+=2){
        printf("%d \t", j);
        if( j == 20){
            printf(" j is equal to 20 \n");
            break;
        } 
    }
    printf(" j = %d \n", j);

    return 0;
}
