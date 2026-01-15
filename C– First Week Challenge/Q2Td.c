#include <stdio.h>

int main()
{

    int FirstNum = 38;
    int SecNum = 125;

    printf("%%d : %d \n ", FirstNum);       // decimal
    printf("%%i : %i  \n ", FirstNum);      // integer
    printf("%%o : %o \n ", FirstNum);       // ocatal
    printf("%%x : %x \n ", FirstNum);       // hex
    printf("%%X : %X \n ", FirstNum);       // hex upp
    printf("%%c : %c \n \n \n ", FirstNum); // ASSCI

    printf("%%d : %d \n ", SecNum);
    printf("%%i : %i  \n ", SecNum);
    printf("%%o : %o \n ", SecNum);
    printf("%%x : %x \n ", SecNum);
    printf("%%X : %X \n ", SecNum);
    printf("%%c : %c \n ", SecNum);
}