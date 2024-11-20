#include <stdio.h>

int main(void){

    //variable declarations
    int a_akm;
    int b_akm;
    int result_akm;

    //code
    printf("\n\n");
    printf("Enter A Number : ");
    scanf("%d", &a_akm);

    printf("\n\n");
    printf("Enter Another Number : ");
    scanf("%d", &b_akm);

    printf("\n\n");

    result_akm = a_akm + b_akm;
    printf("Addition Of A = %d And B = %d Gives %d. \n", a_akm, b_akm, result_akm);

    result_akm = a_akm - b_akm;
    printf("Subtraction Of A = %d And B = %d Gives %d. \n", a_akm, b_akm, result_akm);

    result_akm = a_akm * b_akm;
    printf("Multiplication Of A = %d And B = %d Gives %d. \n", a_akm, b_akm, result_akm);

    result_akm = a_akm / b_akm;
    printf("Division Of A = %d And B = %d Gives Quotient %d. \n", a_akm, b_akm, result_akm);

    result_akm = a_akm % b_akm;
    printf("Division Of A = %d And B = %d Gives Remainder %d. \n", a_akm, b_akm, result_akm);

    printf("\n\n");

    return (0);
}