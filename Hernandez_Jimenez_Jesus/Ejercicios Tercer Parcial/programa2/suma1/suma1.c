/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcula una sumatoria donde el   */
/*              usuario establece el subindice y el limite.   */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "suma1.h"

int main(void)
{
  int m, n;
  printf("Ingresa el subindice de la sumatoria (Recuerde que m != 0): ");
  scanf("%d", &m);
  printf("Ingresa el limite de la sumatoria: ");
  scanf("%d", &n);
  printf("La sumatoria es: %d\n", sumatoriaUno(m, n));

  return 0;
}
