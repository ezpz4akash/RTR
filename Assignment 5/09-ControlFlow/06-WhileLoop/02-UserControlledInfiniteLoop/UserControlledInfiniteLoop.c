#include <stdio.h>
int main(void){
    //variable declarations
    char option_akm, ch_akm = '\0';

    //code
    printf("\n\n");

    printf("Once The Infinite Loop Begins, Enter Q' or 'q' To Quite The Infinite For Loop : \n\n");
    printf("Enter 'Y', 'y' To Initiate User Controlled Infinite Loop : ");

    printf("\n\n");
    option_akm = getch();
    if(option_akm == 'Y' || option_akm == 'y'){
        while(1){
            printf("In Loop...\n");
            ch_akm = getch();
            if(ch_akm == 'Q' || ch_akm == 'q')
                break;
        }

        printf("\n\n");
        printf("EXITING USER CONTROLLED INFINITE LOOP...");
        printf("\n\n");
    }
    else
        printf("You Must Press 'Y' or 'y' To Initiate The User Controlled Infinite Loop... Please Try Again...\n\n");

    return (0);
}