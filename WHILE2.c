#include <stdio.h>
#include <stdlib.h>

int main(){


    int PASS;

    printf("\nINGRESE LA CONTRASE�A PARA AVANZAR : ");
    scanf("%d", &PASS);

    if(PASS != 123)
    {
      do{
            printf("\nCONTRASE�A INCORRECTA, POR FAVOR INTENTE NUEVAMENTE");
            printf("\nCONTRASE�A : ");
            scanf("%d", &PASS);
        }
        while( PASS != 123);
    }

    if(PASS == 123)
    {
        printf("\nCONTRASE�A CORRECTA!");
    }

    getch();
    return 0 ;
}



