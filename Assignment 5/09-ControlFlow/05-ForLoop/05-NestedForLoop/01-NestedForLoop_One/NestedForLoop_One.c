#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    for(i_akm = 1; i_akm <= 10; i_akm++){
        printf("i = %d\n", i_akm);
        printf("----------\n\n");

        for(j_akm = 1; j_akm <= 5; j_akm++){
            printf("\tj = %d\n", j_akm);
        }

        printf("\n\n");
    }

    return (0);
}