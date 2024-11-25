#include <stdio.h>
#include <conio.h>

int main(void){
    //variable declarations
    int i_akm;
    char ch_akm;

    //code
    printf("\n\n");
    
    printf("Printing Even Numbers From 1 to 100 For Every User Input. Exiting The Loop When Users Enters Character 'Q' or 'q' : \n\n");
    printf("Enter Character 'Q' or 'q' to Exit Loop : \n\n");

    for(i_akm = 1; i_akm <= 100; i_akm++){
        printf("\t%d\n", i_akm);
        ch_akm = getch();
        if(ch_akm == 'Q' || ch_akm == 'q'){
            break;
        }
    }

    printf("\n\n");
    printf("EXITING LOOP...");
    printf("\n\n");
}