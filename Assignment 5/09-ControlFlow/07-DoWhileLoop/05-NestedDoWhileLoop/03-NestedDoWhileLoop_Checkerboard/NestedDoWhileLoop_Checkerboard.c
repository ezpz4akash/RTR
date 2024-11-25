#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm, c_akm;

    //code
    printf("\n\n");

    i_akm = 0;
    do{
        j_akm = 0;
        do{
            c_akm = ((i_akm & 0x8) == 0) ^ ((j_akm & 0x8) == 0);

            if(c_akm == 0)
                printf("  ");
            if(c_akm == 1)
                printf("* ");

            j_akm++;
        }while(j_akm < 64);
        printf("\n\n");
        i_akm++;
    }while(i_akm < 64);

    return (0);
}