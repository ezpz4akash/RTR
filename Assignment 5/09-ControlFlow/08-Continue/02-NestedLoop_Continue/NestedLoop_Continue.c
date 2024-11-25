#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    printf("Outer Loop Prints Odd Numbers Between 1 and 10 \n\n");
    printf("Inner Loop Prints Even Number Between 1 and 10 For Every Odd Number Printed By Outer Loop. \n\n");

    for(i_akm = 1; i_akm <= 10; i_akm++){
        if(i_akm % 2 != 0){
            printf("i = %d\n", i_akm);
            printf("----------\n");

            for(j_akm = 1; j_akm <= 10; j_akm++){
                if(j_akm % 2 == 0){
                    printf("\tj = %d\n", j_akm);
                }
                else{
                    continue;
                }
            }
            printf("\n\n");
        }
        else{
            continue;
        }
    }

    printf("\n\n");

    return (0);
}