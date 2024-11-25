#include <stdio.h>

int main(void){
    //variable declarations
    int a_akm;

    //code
    printf("\n\n");
    a_akm = 5;
    if(a_akm){
        printf("if-block 1 : 'A' Exists And Has Value = %d !!!\n\n", a_akm);
    }

    a_akm = -5;
    if(a_akm){
        printf("if-block 2 : 'A' Exists And Has Value = %d !!!\n\n", a_akm);
    }

    a_akm = 0;
    if(a_akm){
        printf("if-block 3 : 'A' Exists And Has Value = %d !!!\n\n", a_akm);
    }

    printf("All Three if-statements Are Done !!!\n\n");

    return (0);
}