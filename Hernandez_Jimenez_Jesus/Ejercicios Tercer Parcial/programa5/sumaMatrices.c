/*------------------------------------------------------------*/
/* Autor: Hernández Jiménez Jesús                             */
/* E-mail: jesushernandezjimenez1998@gmail.com                */
/* Fecha de Creación: 17/05/2018                              */
/* Fecha de Actualización:                                    */
/* Descripción: Programa que realiza la suma de dos matrices. */
/*------------------------------------------------------------*/



#include <stdio.h>
#include "sumamatriz.h"


int main(void)
{
  int matriz[TAM_MATRIZ][TAM_MATRIZ]={{2, 0, 1},
                                      {3, 0, 0},
                                      {5, 1, 1},
                                      };

  int matriz2[TAM_MATRIZ][TAM_MATRIZ]={{1, 0, 1},
                                       {1, 2, 1},
                                       {1, 1, 0},
                                      };
  printf("SUMA DE MATRICES\n");
  printf("\nMatriz (A)\n");
  for(int i = 0; i < TAM_MATRIZ; i++)
  {
    for(int x = 0; x < TAM_MATRIZ; x++)
    {
      printf(" %d",matriz[i][x]);
    }
    printf("\n");
  }

  printf("\nMatriz (B)\n");
  for(int i = 0; i < TAM_MATRIZ; i++)
  {
    for(int x = 0; x < TAM_MATRIZ; x++)
    {
      printf(" %d",matriz2[i][x]);
    }
    printf("\n");
  }

  printf("\nLa suma entre la Matriz A y la Matriz B da como resultado la Matriz C\n");
  sumaMatriz();
  return 0;
}
