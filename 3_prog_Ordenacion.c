/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de creación: 15/04/2018                              */
/* Fecha de actualización: 15/04/2018                         */
/* Descripción: Programa que ordena un arreglo de forma       */
/*              ascendente.                                   */
/*------------------------------------------------------------*/



/* Declaración de bibliotecas */
#include <stdio.h>



/* Declaración de la función principal */
int main(void)
{
  int aux, arreglo[10], i, j;
  for (i = 0; i < 9; i++)                                                                 /* Se utiliza el ciclo para rellenar el arreglo */
  {
    printf("Introduce el número %d\n", i+1);
    scanf("%d", &arreglo[i]);
  }
  for (i = 0; i < 9; i++)
  {
    for (j = i + 1; j < 9; j++)
    {
      if(arreglo[i] > arreglo[j])                                                        
      {
        aux = arreglo[j];
        arreglo[j] = arreglo[i];
        arreglo[i] = aux;
      }
    }
  }
  printf("El arreglo ordenado de forma ascendente queda de la siguiente manera:\n");
  for (i = 0; i < 9; i++)
  {
    printf("%d\n", arreglo[i]);
  }
  return 0;
}
