/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 22/04/2018                              */
/* Fecha de actualización:                                    */
/* Descripción: Programa que convierte de a mayúsculas        */
/*              minúsculas.                                   */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>

#define TAM 10

/* Declaración de la función principal */
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
