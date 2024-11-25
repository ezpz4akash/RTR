#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    i_akm = 1;
    do{
        printf("i = %d\n", i_akm);
        printf("----------\n\n");

        j_akm = 1;
        do{
            printf("\tj = %d\n", j_akm);
            j_akm++;
        }while(j_akm <= 5);

        i_akm++;
        printf("\n\n");
    }while(i_akm <= 10);

    return (0);
}