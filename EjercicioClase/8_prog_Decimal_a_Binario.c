/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 24/04/2018                              */
/* Fecha de actualización: 25/04/2018                         */
/* Descripción: Programa que convierte de decimal a binario.  */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>



/* Declaración de la función principal */
int main(void)
{
    int n, entero, i, x, cont = 0;
    int array[100];
    printf("Introduce un número\n");
    scanf("%d", &n);
    entero = n;
    do
    {
        if(entero % 2 == 0)
        {
           array[cont]= 0;
        }
        else
        {
            array[cont] = 1;
        }
        entero = (entero / 2);
        cont += 1;
    } while(entero != 0);

    printf("Realizando la conversión\n\n");
    printf("%d  =  ", n);
    for (i = cont-1; i >= 0; i--)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    return 0;
}
