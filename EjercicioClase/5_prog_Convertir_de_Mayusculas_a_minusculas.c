/*------------------------------------------------------------*/
/* Autor: Hern�ndez Jim�nez Jes�s                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creaci�n: 22/04/2018                              */
/* Fecha de actualizaci�n:                                    */
/* Descripci�n: Programa que convierte de a may�sculas        */
/*              min�sculas.                                   */
/*------------------------------------------------------------*/



/* Declaraci�n de bibliotecas */
#include <stdio.h>

#define TAM 10

/* Declaraci�n de la funci�n principal */
int main(void)
{
    int i;
    char array[TAM];
    gets(array);
    for(i = 0; i < TAM; i++)
    {
        if(array[i] >= 65 && array[i] <= 90)
        {
            array[i] = array[i] + 32;
            printf("%C ", array[i]);
        }
    }
    printf("\n");
    return 0;
}
