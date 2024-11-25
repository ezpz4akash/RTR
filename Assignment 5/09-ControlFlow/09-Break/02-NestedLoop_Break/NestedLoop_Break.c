#include <stdio.h>
#include <conio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm;

    //code
    printf("\n\n");

    for(i_akm = 1; i_akm <= 20; i_akm++){
        for(j_akm = 1; j_akm <= 20; j_akm++){
            if(j_akm > i_akm){
                break;
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    return (0);
}