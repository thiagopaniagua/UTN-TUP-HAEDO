#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){


    char PASS[20];



    do{
        printf("\nINGRESE LA CONTRASE�A PARA AVANZAR : ");
        gets(PASS);
        if(strcmp(PASS, "THIAGO") != 0)
            printf("\nCONTRASE�A INCORRECTA, POR FAVOR INTENTE NUEVAMENTE");

    }
        while( strcmp(PASS, "THIAGO") != 0);


    if(strcmp(PASS, "THIAGO") == 0)
    {
        printf("\nCONTRASE�A CORRECTA!");
    }

    getch();
    return 0 ;
}



