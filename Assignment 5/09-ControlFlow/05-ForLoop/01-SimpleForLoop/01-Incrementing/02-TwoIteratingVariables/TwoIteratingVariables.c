#include <stdio.h>
int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    printf("Printing Digits 1 to 10 and 10 to 100 : \n\n");

    for(i_akm = 1, j_akm = 10; i_akm <= 10, j_akm <= 100; i_akm++, j_akm = j_akm + 10){
        printf("\t %d \t %d\n", i_akm, j_akm);
    }

    printf("\n\n");

    return (0);
}