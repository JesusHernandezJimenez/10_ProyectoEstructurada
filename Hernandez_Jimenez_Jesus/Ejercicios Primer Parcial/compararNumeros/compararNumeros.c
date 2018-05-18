/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que determina el número mayor, menor */
/*              de tres números proporcionados por el usuario */
/*              además indica si son iguales.                 */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "comparar.h"

int main(void)
{
  int n1, n2, n3;
  printf("Introduce tres número: \n");
  scanf("%d\n%d\n%d", &n1, &n2, &n3);
  if(n1 == n2 && n1 == n3)
  {
    printf("Los números son iguales\n");
  }
  else
  {
    printf("El número mayor es: %d\n", numeroMayor(n1, n2, n3));
    printf("El número menor es: %d\n", numeroMenor(n1, n2, n3));
  }
  return 0;
}
