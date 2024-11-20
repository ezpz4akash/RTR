#include <stdio.h>

int main(void){

    //function prototypes
    void PrintBinaryFormOfNumber(unsigned int);

    //variable declarations
    unsigned int a_akm;
    unsigned int b_akm;
    unsigned int result_akm;

    //code
    printf("\n\n");
    printf("Enter An Integer = ");
    scanf("%u", &a_akm);

    printf("\n\n");
    printf("Enter Another Integer = ");
    scanf("%u", &b_akm);

    printf("\n\n\n\n");
    result_akm = a_akm | b_akm;
    printf("Bitwise OR-ing Of \nA = %d (decimal) and B = %d (Decimal) gives result %d (Decimal). \n\n", a_akm, b_akm, result_akm);

    PrintBinaryFormOfNumber(a_akm);
    PrintBinaryFormOfNumber(b_akm);
    PrintBinaryFormOfNumber(result_akm);

    return (0);
}

void PrintBinaryFormOfNumber(unsigned int decimal_number_akm){
    //variable declarations
    unsigned int quotient_akm, remainder_akm;
    unsigned int num_akm;
    unsigned int binary_array_akm[8];
    int i_akm;

    //code
    for(i_akm = 0; i_akm < 8; i_akm++)
        binary_array_akm[i_akm] = 0;

    printf("The Binary Form Of The Decimal Integer %d Is\t=\t", decimal_number_akm);
    num_akm = decimal_number_akm;
    i_akm = 7;
    while(num_akm != 0){
        quotient_akm = num_akm / 2;
        remainder_akm = num_akm % 2;
        binary_array_akm[i_akm] = remainder_akm;
        num_akm = quotient_akm;
        i_akm--;
    }

    for(i_akm = 0; i_akm < 8; i_akm++)
        printf("%u", binary_array_akm[i_akm]);

    printf("\n\n");
}