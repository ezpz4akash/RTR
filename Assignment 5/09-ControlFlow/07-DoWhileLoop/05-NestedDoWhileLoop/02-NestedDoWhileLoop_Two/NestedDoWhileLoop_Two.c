#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm, k_akm;

    //code
    printf("\n\n");

    i_akm = 1;
    do{
        printf("i = %d\n", i_akm);
        printf("----------\n\n");

        j_akm = 1;
        do{
            printf("\tj = %d\n", j_akm);
            printf("\t----------\n\n");

            k_akm = 1;
            do{
                printf("\t\tk=%d\n", k_akm);
                k_akm++;
            }while(k_akm <= 3);

            printf("\n\n");
            j_akm++;
        }while(j_akm <= 5);

        printf("\n\n");
        i_akm++;
    }while(i_akm <= 10);
    
    return (0);
}