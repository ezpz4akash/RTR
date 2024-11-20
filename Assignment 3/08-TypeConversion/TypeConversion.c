#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm;
    char ch_01_akm, ch_02_akm;

    int a_akm, result_int_akm;
    float f_akm, result_float_akm;

    int i_explicit_akm;
    float f_explicit_akm;

    //code
    printf("\n\n");

    //INTERCONVERSION AND IMPLICIT TYPE CASTING BETWEEN char and int TYPES

    i_akm = 70;
    ch_01_akm = i_akm;
    printf("I = %d\n", i_akm);
    printf("Character 1 (after ch_01_akm = i_akm) = %c\n\n", ch_01_akm);

    ch_02_akm = 'Q';
    j_akm = ch_02_akm;
    printf("Character 2 = %c\n", ch_02_akm);
    printf("J (after k_akm = ch_02_akm) = %d\n\n", j_akm);

    //IMPLICIT CONVERSION OF int To float
    a_akm = 5;
    f_akm = 7.8f;

    result_float_akm = a_akm + f_akm;
    printf("Integer a_akm = %d AND Floating Point Number %f Added Gives Floating Point Sum = %f\n\n", a_akm, f_akm, result_float_akm);

    result_int_akm = a_akm + f_akm;
    printf("Integer a = %d And Floating Point Number %f Added Gives Integer Sum = %d\n\n", a_akm, f_akm, result_int_akm);

    //EXPLICIT TYPE CASTING USING CAST OPERATOR
    f_explicit_akm = 30.121995f;
    i_explicit_akm = (int)f_explicit_akm;
    printf("Floating Point Number Which Will Be Type Casted Explicitly = %f\n", f_explicit_akm);
    printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", f_explicit_akm, i_explicit_akm);

    return (0);
}