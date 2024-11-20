#include <stdio.h>

int main(void){
    //variable declarations
    int a_akm = 5;
    int b_akm = 10;

    //code
    printf("\n\n");

    printf("A = %d\n", a_akm);
    printf("A = %d\n", a_akm++);
    printf("A = %d\n", a_akm);
    printf("A = %d\n\n", ++a_akm);

    printf("B = %d\n", b_akm);
    printf("B = %d\n", b_akm--);
    printf("B = %d\n", b_akm);
    printf("B = %d\n\n", --b_akm);

    return (0);
}