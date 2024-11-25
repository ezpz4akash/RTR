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
        printf("Entering First if-block...\n\n");
        printf("A Is Less Than B !!!\n\n");
    }
    else{
        printf("Entering First else-block...\n\n");
        printf("A Is NOT Less Than B !!!\n\n");
    }

    printf("First if-else Pair Done !!!\n\n");

    printf("\n\n");
    if(b_akm != p_akm){
        printf("Entering Second if-block...\n\n");
        printf("B Is NOT Equal To P !!!\n\n");
    }
    else{
        printf("Entering Second else-block...\n\n");
        printf("B Is Equal To P !!!\n\n");
    }

    printf("Second if-else Pair Done!!!\n\n");

    return (0);
}