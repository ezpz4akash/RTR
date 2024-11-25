#include <stdio.h>
int main(void){
    //variable declarations
    char option_akm, ch_akm = '\0';

    //code
    printf("\n\n");

    printf("Once The Infinite Loop Begins, Enter Q' or 'q' To Quite The Infinite For Loop : \n\n");

    do{
        do{
            printf("\n");
            printf("In Loop...\n");
            ch_akm = getch();
        }while(ch_akm != 'Q' && ch_akm != 'q');

        printf("\n\n");
        printf("EXITING USER CONTROLLED INFINITE LOOP...");

        printf("\n\n");
        printf("DO YOU WANT TO BEGIN USER CONTROLLED INFINITE LOOP AGAIN? ... (Y/y - Yes, Any Other Keys - No) : ");
        option_akm = getch();
    }while(option_akm == 'Y' || option_akm == 'y');

    return (0);
}