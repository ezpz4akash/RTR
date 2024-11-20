#include <stdio.h>

int main(void){
    //variable declarations
    int a_akm;
    int b_akm;
    int result_akm;

    //code
    printf("\n\n");
    printf("Enter One Integer : ");
    scanf("%d", &a_akm);

    printf("\n\n");
    printf("Enter Another Integer : ");
    scanf("%d", &b_akm);

    printf("\n\n");
    printf("If Answer = 0, It Is FALSE\n");
    printf("If Answer = 1, It Is TRUE\n\n");

    result_akm = (a_akm < b_akm);
    printf("(a_akm < b_akm) A = %d Is Less Than B = %d \t Answer = %d\n", a_akm, b_akm, result_akm);

    result_akm = (a_akm > b_akm);
    printf("(a_akm > b_akm) A = %d Is Greater Than B = %d \t Answer = %d\n", a_akm, b_akm, result_akm);

    result_akm = (a_akm <= b_akm);
    printf("(a_akm <= b_akm) A = %d Is Less Than Or Equal To B = %d \t Answer = %d\n", a_akm, b_akm, result_akm);

    result_akm = (a_akm >= b_akm);
    printf("(a_akm >= b_akm) A = %d Is Greater Than Or Equal To B = %d \t Answer = %d\n", a_akm, b_akm, result_akm);

    result_akm = (a_akm == b_akm);
    printf("(a_akm == b_akm) A = %d Is Equal To B = %d \t Answer = %d\n", a_akm, b_akm, result_akm);

    result_akm = (a_akm != b_akm);
    printf("(a_akm != b_akm) A = %d Is NOT Equal To B = %d \t Answer = %d\n", a_akm, b_akm, result_akm);

    return (0);
    
}