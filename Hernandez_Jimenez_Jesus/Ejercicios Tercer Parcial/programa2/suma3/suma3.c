/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcula una sumatoria donde el   */
/*              usuario establece el limite.                  */
/*------------------------------------------------------------*/




#include <stdio.h>

#include "suma3.h"

int main(void)
{
  int n;
  printf("Ingresa el limite de la sumatoria: ");
  scanf("%d", &n);
  printf("La sumatoria es: %d\n", sumatoriaTres(n));
  return 0;
}
