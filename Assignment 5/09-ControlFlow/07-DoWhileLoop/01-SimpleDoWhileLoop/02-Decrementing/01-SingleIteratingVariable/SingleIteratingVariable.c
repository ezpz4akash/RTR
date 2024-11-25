#include <stdio.h>
int main(void){
    //variable declarations
    int i_akm;

    //code
    printf("\n\n");

    printf("Printing Digits 10 to 1 : \n\n");

    i_akm = 10;
    do{
        printf("\t%d\n", i_akm);
        i_akm--;
    } while(i_akm >= 1);

    printf("\n\n");

    return (0);
}