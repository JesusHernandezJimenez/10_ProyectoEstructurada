/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 21/04/2018                              */
/* Fecha de actualización:                                    */
/* Descripción: Programa que convierte de minúsculas a        */
/*              mayúsculas.                                   */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>

const int TAM = 10;

/* Declaración de la función principal */
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
