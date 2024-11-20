#include <stdio.h>

int main(void){
    //variable declarations
    int age_akm;

    //code
    printf("\n\n");
    printf("Enter Age : ");
    scanf("%d", &age_akm);
    if(age_akm >= 18){
        printf("You Are Eligible For Voting!!!\n\n");
    }

    return (0);
}