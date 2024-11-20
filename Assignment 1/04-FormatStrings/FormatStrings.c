#include <stdio.h>
int main(void){
    //code

    printf("\n\n");
    printf("*******************************");
    printf("\n\n");

    printf("Hello World!!! \n\n");

    int a_akm = 13;
    printf("Integer Decimal Value of a_akm = %d\n", a_akm);
    printf("Integer Octal Value of a_akm = %o\n", a_akm);
    printf("Integer Hexadecimal Value of a_akm (Hexadecimal Letters in Lower Case) = %x\n", a_akm);
    printf("Integer Hexadecimal Value of a_akm (Hexadecimal Letters in Upper Case) = %X\n\n", a_akm);

    char ch_akm = 'A';
    printf("Character ch_akm = %c\n", ch_akm);
    char str_akm[] = "Astromedicomp's Real Time Rendering Batch";
    printf("String str_akm = %s\n\n", str_akm);

    long num_akm = 30121995L;
    printf("Long Integer num_akm = %ld\n\n", num_akm);

    unsigned int b_akm = 7;
    printf("Unsigned Integer b_akm = %u\n\n", b_akm);

    float f_num_akm = 3012.1995f;
    printf("Floating Point Number With Just %%f f_num_akm = %f\n", f_num_akm);
    printf("Floating Point Number With %%4.2f f_num_akm = %4.2f\n", f_num_akm);
    printf("Floating Point Number With %%6.5f f_num_akm = %6.5f\n\n", f_num_akm);

    double d_pi_akm = 3.14159265358979323846;
    printf("Double Precision Floating Point Number Without Exponential = %g\n", d_pi_akm);
    printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", d_pi_akm);
    printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n\n", d_pi_akm);
    printf("Double Hexadecimal Value Of d_pi_akm (Hexadecimal Letters In Lower Case) = %a\n", d_pi_akm);
    printf("Double Hexadecimal Value Of d_pi_akm (Hexadecimal Letter In Upper Case) = %A\n\n", d_pi_akm);

    printf("********************************\n");
    printf("\n\n");

    return (0);
}