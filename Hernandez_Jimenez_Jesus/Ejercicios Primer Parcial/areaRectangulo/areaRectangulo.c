/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcual el área de un rectangulo.*/
/*------------------------------------------------------------*/



#include <stdio.h>
#include "rectangulo.h"


int main(void)
{
  float base, altura;
  printf("Introduce las medidas del terreno\n");
  printf("Largo: ");
  scanf("%f", &base);
  printf("Ancho: ");
  scanf("%f", &altura);

  printf("\nEl area del terreno es de: %2.2f\n", areaterreno(base, altura));
  return 0;
}
