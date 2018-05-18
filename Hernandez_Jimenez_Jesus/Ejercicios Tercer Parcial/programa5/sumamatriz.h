#ifndef SUMA_MATRIZ_H_
#define SUMA_MATRIZ_H_

#define TAM_MATRIZ 3

void sumaMatriz(void);

void sumaMatriz(void)
{
  int matriz[TAM_MATRIZ][TAM_MATRIZ]={{2, 0, 1},
                                      {3, 0, 0},
                                      {5, 1, 1},
                                      };

  int matriz2[TAM_MATRIZ][TAM_MATRIZ]={{1, 0, 1},
                                       {1, 2, 1},
                                       {1, 1, 0},
                                      };

  int matrizresultante[TAM_MATRIZ][TAM_MATRIZ];

  for(int i = 0; i < TAM_MATRIZ; i++)
  {
    for(int x = 0; x < TAM_MATRIZ; x++)
    {
      matrizresultante[i][x]=(matriz[i][x] + matriz2[i][x]);
      printf(" %d", matrizresultante[i][x]);
    }
    printf("\n");
  }

}

#endif
