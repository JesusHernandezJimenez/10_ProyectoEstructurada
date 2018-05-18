/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcula la combinación de los    */
/*              valores ingresados por el usuario.            */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "combinacion.h"

int main(void)
{
  int n, r;
  long long int combinacion;

  printf("COMBINACIONES\n");
  printf("Introduce los valores de n y r\n");
  printf("n: ");
  scanf("%d", &n );
  printf("r: ");
  scanf("%d", &r );

  printf("\nLa combinación de %dC%d = %d", n, r, (factorial(n))/(factorial(n-r) * factorial(r)));

  return 0;
}
