#include <stdio.h>

int main(void){
    //variable declarations
    int i_akm, j_akm, c_akm;

    //code
    printf("\n\n");
    for(i_akm = 0; i_akm < 64; i_akm++){
        for(j_akm = 0; j_akm < 64; j_akm++){
            c_akm = ((i_akm & 0x8) == 0) ^ ((j_akm & 0x8) == 0);

            if(c_akm == 0)
                printf("  ");
            if(c_akm == 1)
                printf("* ");
        }
        printf("\n\n");
    }

    return (0);
}