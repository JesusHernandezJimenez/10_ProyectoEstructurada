/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 16/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que calcula la capacidad de un tanque*/
/*------------------------------------------------------------*/



#include <stdio.h>
#include "volumen.h"


int main(void)
{
  float largo, ancho, altura;

  printf("CAPACIDAD DEL TANQUE\n");

  printf("Proporciona los siguientes datos\n");
  printf("Largo: ");
  scanf("%f", &largo);
  printf("Ancho: ");
  scanf("%f", &ancho);
  printf("Altura: ");
  scanf("%f", &altura);

  printf("La capacidad del tanque es de: %2.2f litros\n", capacidadtanque(altura, largo, ancho));
  return 0;
}
