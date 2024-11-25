#include <stdio.h>
int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    printf("Printing Digits 1 to 10 and 10 to 100 : \n\n");

    i_akm = 1;
    j_akm = 10;
    do{
        printf("\t %d \t %d\n", i_akm, j_akm);
        i_akm++;
        j_akm = j_akm + 10;
    }while(i_akm <= 10, j_akm <= 100);

    printf("\n\n");

    return (0);
}