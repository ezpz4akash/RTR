#include <stdio.h>
#include <conio.h>

int main(void){
    //variable declarations
    int a_akm, b_akm;
    int result_akm;

    char option_akm, option_division_akm;

    //code
    printf("\n\n");

    printf("Enter Value For 'A' : ");
    scanf("%d", &a_akm);

    printf("Enter Value For 'B' : ");
    scanf("%d", &b_akm);

    printf("Enter Option In Character : \n\n");
    printf("'A' or 'a' For Addition : \n");
    printf("'S' or 's' For Subtraction : \n");
    printf("'M' or 'm' For Multiplication : \n");
    printf("'D' or 'd' For Division : \n");

    printf("Enter Option : ");
    option_akm = getch();

    printf("\n\n");

    if(option_akm == 'A' || option_akm == 'a'){
        result_akm = a_akm + b_akm;
        printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", a_akm, b_akm, result_akm);
    }
    else if(option_akm == 'S' || option_akm == 's'){
        if(a_akm >= b_akm){
            result_akm = a_akm - b_akm;
            printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n", b_akm, a_akm, result_akm);
        }
        else{
            result_akm = b_akm - a_akm;
            printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n", a_akm, b_akm, result_akm);
        }
    }
    else if(option_akm == 'M' || option_akm == 'm'){
        result_akm = a_akm * b_akm;
        printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", a_akm, b_akm, result_akm);
    }
    else if(option_akm == 'D' || option_akm == 'd'){
        printf("Enter Option In Character : \n\n");
        printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
        printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

        printf("Enter Option : ");
        option_division_akm = getch();

        printf("\n\n");

        if(option_division_akm == 'Q' || option_division_akm == 'q' || option_division_akm == '/'){
            if(a_akm >= b_akm){
                result_akm = a_akm / b_akm;
                printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", a_akm, b_akm, result_akm);
            }
            else{
                result_akm = b_akm / a_akm;
                printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", b_akm, a_akm, result_akm);
            }
        }
        else if(option_division_akm == 'R' || option_division_akm == 'r' || option_division_akm == '%'){
            if(a_akm >= b_akm){
                result_akm = a_akm % b_akm;
                printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", a_akm, b_akm, result_akm);
            }
            else{
                result_akm = b_akm % a_akm;
                printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", b_akm, a_akm, result_akm);
            }
        }
        else{
            printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division_akm);
        }
    }
    else
        printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_akm);


    printf("If - Else If - Else Ladded Complete !!!\n");

    return (0);

}