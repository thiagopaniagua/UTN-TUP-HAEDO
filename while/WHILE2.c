#include <stdio.h>
#include <stdlib.h>

int main(){


    int PASS;

    printf("\nINGRESE LA CONTRASEŅA PARA AVANZAR : ");
    scanf("%d", &PASS);

    if(PASS != 123)
    {
      do{
            printf("\nCONTRASEŅA INCORRECTA, POR FAVOR INTENTE NUEVAMENTE");
            printf("\nCONTRASEŅA : ");
            scanf("%d", &PASS);
        }
        while( PASS != 123);
    }

    if(PASS == 123)
    {
        printf("\nCONTRASEŅA CORRECTA!");
    }

    getch();
    return 0 ;
}



