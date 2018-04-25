/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 24/04/2018                              */
/* Fecha de actualización: 25/04/2018                         */
/* Descripción: Programa que convierte de binario a decimal.  */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>
#include <math.h>



/* Declaración de la función principal */
int main(void)
{
    int array[100], cont, result = 0;
    printf("Proporciona la cantidad de digitos del número binario\n");
    scanf("%d", &cont);
    printf("Introduce el número binario (un digito a la vez)\n");
    for(int i = 0; i < cont ; i++)
    {
        scanf("%d", &array[i]);
        result = result + (array[i]* pow(2, i));
    }
    printf("Realizando la conversión\n\n");
    printf("Binario\t\tDecimal\n");
    for(int i = cont-1; i >= 0 ; i--)
    {
        printf("%d", array[i]);
    }
    printf("\t  =\t%d\n", result);
    return 0;
}
