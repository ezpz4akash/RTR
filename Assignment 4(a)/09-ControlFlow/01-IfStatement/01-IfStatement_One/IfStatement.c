#include <stdio.h>

int main(void){
    //variable declarations
    int a_akm, b_akm, p_akm;

    //code
    a_akm = 9;
    b_akm = 30;
    p_akm = 30;

    printf("\n\n");

    if(a_akm < b_akm){
        printf("A Is Less Than B !!!\n\n");
    }

    if(b_akm != p_akm){
        printf("B Is NOT Equal To P !!!\n\n");
    }

    printf("Both Comparisons Have Been Done !!\n\n");

    return (0);
}