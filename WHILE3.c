#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){


    char PASS[20];



    do{
        printf("\nINGRESE LA CONTRASEŅA PARA AVANZAR : ");
        gets(PASS);
        if(strcmp(PASS, "THIAGO") != 0)
            printf("\nCONTRASEŅA INCORRECTA, POR FAVOR INTENTE NUEVAMENTE");

    }
        while( strcmp(PASS, "THIAGO") != 0);


    if(strcmp(PASS, "THIAGO") == 0)
    {
        printf("\nCONTRASEŅA CORRECTA!");
    }

    getch();
    return 0 ;
}



