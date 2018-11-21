#include <stdio.h>

int main(){
   
    const int total = 50;

    int i = 0 , j = 1 , m = 0;

    while ( i < total){
        printf("%d \t", i);
        i++;
    }
    printf("\n");

/**********************Not Recommended For using*************************/
    while ( m < total)
        m += 5;
    
    printf("m = %d \n", m);    

/**********************Not Recommended For using*************************/
    // while( 2 ){
    //      printf("Print for ever ....");
    // }

// /***********************************************************************/    

    while( j < total){
        printf("%d \t", j);
        if( j == 20){
            printf(" \n j is equal to 20 \n");
            break;
        } 
        j *= 2;

    }
    printf(" j = %d \n", j);

 /***********************************************************************/  

    float st = 2.1 , av = 1;

    while(av < total){
        av *= st;
        st++;
    }
    printf("av = %f , st = %f \n", av, st);

 /***********************************************************************/  

    do{
        printf("i = %d --> from do -while", i);
    }while(i<total);
// ?
    while(i<total){
         printf("i = %d from while", i);
    }


 /***************************Continue****************************/  
    int k = 2 ;
    while(k < total){
        k-- ;
        if(k ==10) {
            continue;
        }
        k += 3;
    }

    return 0;
}



