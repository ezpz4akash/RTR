#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm;

    //code
    printf("\n\n");

    printf("Printing Even Numbers From 0 to 100 : \n\n");

    for(i_akm = 0; i_akm <= 100; i_akm++){
        if(i_akm % 2 != 0){
            continue;
        }
        else{
            printf("\t%d\n", i_akm);
        }
    }

    printf("\n\n");

    return (0);
}