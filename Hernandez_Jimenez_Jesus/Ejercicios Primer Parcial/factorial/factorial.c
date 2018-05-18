/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcula el factorial del número  */
/*              proporcionado por el usuario.                 */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "factorial.h"


int main(void)
{
  int n;

  printf("Ingresa un número\n");
  scanf("%d", &n);
  printf("\nEl factorial de %d es: %d\n\n", n, factorial(n));
  return 0;
}
