#include <stdio.h>
#include <stdlib.h>
/* Definición de constantes */
#define ROW 3 /* Número de filas de la matriz */
#define COL 5 /* Número de columnas de la matriz */
#define MAX 100 /* Rango superior de los datos aleatoreos */

int main(void)
{
  int array[ROW][COL];
  /* Incializar el array con valores enteros aleatoreos  1 - 100*/
  for(int i = 0; i < ROW; i++)  /* Ciclo que controla las filas del array */
  {
    for(int j = 0; j < COL; j++)  /* Ciclo que controla las columnas del array */
    {
      /* Asignación de datos al array*/
      /* Utilizar la función scanf() para solicitar datos al usuario */

      /* Utilizar la función rand() para obtener datos de forma aleatoria */
      /* La función se encuentra definida dentro de la biblioteca stdlib.h */
      array[i][j] = rand() % 100;
    }
  }
  printf("{\n");
  for(int i = 0; i < ROW; i++)
  {
    printf("{");
    for(int j = 0; j < COL; j++)
    {
      printf("%d, ", array[i][j]);
    }
    printf("}\n");
  }
  printf("}\n");
  return 0;
}
