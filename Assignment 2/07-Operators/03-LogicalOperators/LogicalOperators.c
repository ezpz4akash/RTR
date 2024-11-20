#include <stdio.h>

int main(void){
    //variable declarations
    int a_akm;
    int b_akm;
    int c_akm;
    int result_akm;

    //code
    printf("\n\n");
    printf("Enter First Integer : ");
    scanf("%d", &a_akm);

    printf("\n\n");
    printf("Enter Second Integer : ");
    scanf("%d", &b_akm);

    printf("\n\n");
    printf("Enter Third Integer : ");
    scanf("%d", &c_akm);

    printf("\n\n");
    printf("If Answer = 0, It Is FALSE\n");
    printf("If Answer = 1, It Is TRUE\n\n");

    result_akm = (a_akm <= b_akm) && (b_akm != c_akm);
    printf("LOGICAL AND (&&) : Answer is TRUE (1) If And Only If BOTH Conditions Are TRUE. The Answer is FALSE (0), If Any One Or Both Conditions Are False\n\n");
    printf("A = %d Is Less Than Or Equal To B = %d AND B = %d Is NOT Equal To C = %d \t Answer = %d\n\n", a_akm, b_akm, b_akm, c_akm, result_akm);

    result_akm = (b_akm >= a_akm) || (a_akm == c_akm);
    printf("LOGICAL OR (||) : Answer is FALSE (0) If And Only If BOTH Conditions Are FALSE. The Answer is TRUE (1), If Any One Or Both Conditions Are True\n\n");
    printf("Either B = %d Is Greater Than Or Equal to A = %d OR A = %d is Equal To C = %d \t Answer = %d\n\n", b_akm, a_akm, a_akm, c_akm, result_akm);

    result_akm = !a_akm;
    printf("A = %d And Using Logical NOT (!) Operator On A Gives Result = %d\n\n", a_akm, result_akm);

    result_akm = !b_akm;
    printf("B = %d And Using Logical NOT (!) Operator On B Gives Result = %d\n\n", b_akm, result_akm);

    result_akm = !c_akm;
    printf("C = %d And Using Logical NOT (!) Operator On C Gives Result = %d\n\n", c_akm, result_akm);

    result_akm = (!(a_akm <= b_akm) && !(b_akm != c_akm));
    printf("Using Logical NOT (!) On (a_akm <= b_akm) AND Also On (b_akm != c_akm) And then AND-ing them Afterwards Gives Result = %d\n", result_akm);

    printf("\n\n");

    result_akm = !((b_akm >= a_akm) || (a_akm == c_akm));
    printf("Using Logical NOT(!) On Entire Logical Expresion (b_akm >= a_akm ) || (a_akm == c_akm) Gives Result = %d\n", result_akm);

    printf("\n\n");

    return (0);
    
}