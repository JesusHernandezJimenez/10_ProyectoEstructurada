/*------------------------------------------------------------*/
/* Autor: Hern�ndez Jim�nez Jes�s                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creaci�n: 21/04/2018                              */
/* Fecha de actualizaci�n:                                    */
/* Descripci�n: Programa que convierte de min�sculas a        */
/*              may�sculas.                                   */
/*------------------------------------------------------------*/



/* Declaraci�n de bibliotecas */
#include <stdio.h>

const int TAM = 10;

/* Declaraci�n de la funci�n principal */
int main()
{
    char array[TAM];
    gets(array);
    for(int i = 0; i < TAM ; i++)
    {
        if (array[i] >= 97 && array[i] <= 122)
        {
            array[i] = array[i] - 32;
            printf("%C ", array[i]);
        }
    }
    printf("\n");
     return 0;
}
