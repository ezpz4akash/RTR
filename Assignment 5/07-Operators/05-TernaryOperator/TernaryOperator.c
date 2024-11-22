#include <stdio.h>

int main(void){
    //variable declarations
    int a_akm, b_akm;
    int p_akm, q_akm;
    char ch_result_01_akm, ch_result_02_akm;
    int i_result_01_akm, i_result_02_akm;

    //code
    printf("\n\n");

    a_akm = 7;
    b_akm = 5;
    ch_result_01_akm = (a_akm > b_akm) ? 'A' : 'B';
    i_result_01_akm = (a_akm > b_akm) ? a_akm : b_akm;
    printf("Ternary Operator Answer 1 ----- %c and %d.\n\n", ch_result_01_akm, i_result_01_akm);

    p_akm = 30;
    q_akm = 30;
    ch_result_02_akm = (p_akm != q_akm) ? 'P' : 'Q';
    i_result_02_akm = (p_akm != q_akm) ? p_akm : q_akm;
    printf("Ternary Operator Answer 2 ----- %c and %d.\n\n", ch_result_02_akm, i_result_02_akm);

    printf("\n\n");

    return (0);
}