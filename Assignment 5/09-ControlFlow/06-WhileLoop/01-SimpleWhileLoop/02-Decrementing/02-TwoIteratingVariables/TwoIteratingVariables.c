#include <stdio.h>
int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    printf("Printing Digits 10 to 1 and 100 to 10 : \n\n");

    i_akm = 10;
    j_akm = 100;
    while(i_akm >= 1, j_akm >= 10){
        printf("\t %d \t %d\n", i_akm, j_akm);
        i_akm--;
        j_akm = j_akm - 10;
    }

    printf("\n\n");

    return (0);
}