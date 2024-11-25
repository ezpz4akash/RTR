#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    i_akm = 1;
    while(i_akm <= 10){
        printf("i = %d\n", i_akm);
        printf("----------\n\n");

        j_akm = 1;
        while(j_akm <= 5){
            printf("\tj = %d\n", j_akm);
            j_akm++;
        }

        i_akm++;
        printf("\n\n");
    }

    return (0);
}