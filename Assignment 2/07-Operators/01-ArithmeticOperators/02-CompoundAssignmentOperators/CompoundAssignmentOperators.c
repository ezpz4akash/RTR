#include <stdio.h>

int main(void){

    //variable declaration
    int a_akm;
    int b_akm;
    int x_akm;

    //code
    printf("\n\n");
    printf("Enter A Number : ");
    scanf("%d", &a_akm);

    printf("\n\n");
    printf("Enter Another Number : ");
    scanf("%d", &b_akm);

    printf("\n\n");

    x_akm = a_akm;
    a_akm += b_akm;
    printf("Addition Of A = %d and B = %d Gives %d.\n", x_akm, b_akm, a_akm);

    x_akm = a_akm;
    a_akm -= b_akm;
    printf("Subtraction Of A = %d and B = %d Gives %d.\n", x_akm, b_akm, a_akm);

    x_akm = a_akm;
    a_akm *= b_akm;
    printf("Multiplication Of A = %d and B = %d Gives %d.\n", x_akm, b_akm, a_akm)

    x_akm = a_akm;
    a_akm /= b_akm;
    printf("Division Of A = %d and B = %d Gives Quotient %d.\n", x_akm, b_akm, a_akm);

    x_akm = a_akm;
    a_akm %= b_akm;
    printf("Division Of A = %d and B = %d Gives Remainder %d.\n", x_akm, b_akm, a_akm);

    printf("\n\n");

    return (0);
    
}