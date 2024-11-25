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

    switch(option_akm){
        case 'A':
        case 'a':
            result_akm = a_akm + b_akm;
            printf("Addition Of A = %d And B = %d Gives Result %d !!!\n\n", a_akm, b_akm, result_akm);
            break;

        case 'S':
        case 's':
            if(a_akm >= b_akm){
                result_akm = a_akm - b_akm;
                printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n", b_akm, a_akm, result_akm);
            }
            else{
                result_akm = b_akm - a_akm;
                printf("Subtraction Of B = %d From A = %d Gives Result %d !!!\n\n", a_akm, b_akm, result_akm);
            }
            break;

        case 'M':
        case 'm':
            result_akm = a_akm * b_akm;
            printf("Multiplication Of A = %d And B = %d Gives Result %d !!!\n\n", a_akm, b_akm, result_akm);
            break;

        case 'D':
        case 'd':
            printf("Enter Option In Character : \n\n");
            printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");
            printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");

            printf("Enter Option : ");
            option_division_akm = getch();

            printf("\n\n");

            switch(option_division_akm){
                case 'Q':
                case 'q':
                case '/':
                    if(a_akm >= b_akm){
                        result_akm = a_akm / b_akm;
                        printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", a_akm, b_akm, result_akm);
                    }
                    else{
                        result_akm = b_akm / a_akm;
                        printf("Division Of A = %d By B = %d Gives Quotient = %d !!!\n\n", b_akm, a_akm, result_akm);
                    }
                break;

                case 'R':
                case 'r':
                case '%':
                    if(a_akm >= b_akm){
                        result_akm = a_akm % b_akm;
                        printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", a_akm, b_akm, result_akm);
                    }
                    else{
                        result_akm = b_akm % a_akm;
                        printf("Division Of A = %d By B = %d Gives Remainder = %d !!!\n\n", b_akm, a_akm, result_akm);
                    }

                break;

                default : 
                    printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_division_akm);
                    break;
            }
            break;

        default:
            printf("Invalid Character %c Entered For Division !!! Please Try Again...\n\n", option_akm);
    }

    printf("Switch Case Block Complete !!!\n");

    return (0);

}