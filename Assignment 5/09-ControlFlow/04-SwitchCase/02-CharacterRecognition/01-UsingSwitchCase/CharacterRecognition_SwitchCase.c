#include <stdio.h>
#include <conio.h>

#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void){
    //variable declarations
    char ch_akm;
    int ch_value_akm;

    //code
    printf("\n\n");
    
    printf("Enter Character : ");
    ch_akm = getch();

    printf("\n\n");

    switch(ch_akm){
        case 'A':
        case 'a':

        case 'E':
        case 'e':

        case 'I':
        case 'i':

        case 'O':
        case 'o':

        case 'U':
        case 'u':

            printf("Character \'%c\' Entered By You, Is A VOWEL CHARACTER From The English Alphabet !!!\n\n", ch_akm);
            break;

        default:
            ch_value_akm = (int)ch_akm;

            if((ch_value_akm >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value_akm <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value_akm >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value_akm <= CHAR_ALPHABET_LOWER_CASE_ENDING)){
                printf("Character \'%c\' Entered By You, Is A CONSONANT CHARACTER From The English Alphabet !!!\n\n", ch_akm);
            }
            else if(ch_value_akm >= CHAR_DIGIT_BEGINNING && ch_value_akm <= CHAR_DIGIT_ENDING){
                printf("Character \'%c\' Entered By You, Is A DIGIT CHARACTER!!!\n\n", ch_akm);
            }
            else{
                printf("Character \'%c\' Entered By You, Is A SPECIAL CHARACTER!!!\n\n", ch_akm);
            }
            break;
    }

    printf("Switch Case Block Complete !!!\n");

    return (0);
}