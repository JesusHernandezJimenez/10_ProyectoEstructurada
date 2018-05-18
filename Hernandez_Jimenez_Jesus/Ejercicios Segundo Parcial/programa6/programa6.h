#ifndef SUMATORIA_H_
#define SUMATORIA_H_

#define TAM 5
int sumaDiagonal(void);
void imprimirArreglo(void);

void imprimirArreglo(void)
{
  int arreglo[TAM][TAM]={{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};

  for(int i = 0; i < TAM; i++)
  {
    for(int x = 0; x < TAM; x++)
    {
        printf("%-5d", arreglo[i][x]);
    }
    printf("\n");
  }
}

int sumaDiagonal(void)
{
  int suma = 0;
  int arreglo[TAM][TAM]={{1, 2, 3, 4, 5},
                         {6, 7, 8, 9, 10},
                         {11, 12, 13, 14, 15},
                         {16, 17, 18, 19, 20},
                         {21, 22, 23, 24, 25}};
  for(int i = 0; i < TAM; i++)
  {
    for(int x = 0; x < TAM; x++)
    {
      if( i == x)
      {
        suma = suma + arreglo[i][x];
      }
    }
  }

  return suma;
}

#endif
