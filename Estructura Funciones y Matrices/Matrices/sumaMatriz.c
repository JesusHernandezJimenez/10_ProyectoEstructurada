#include <stdio.h>
#include <stdbool.h>    /* Valores booleanos */


#define ROW 10
#define COL 10

bool validarSumaMatriz(int, int, int ,int);
void LeerDatosMatriz(int matriz[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);
void sumarMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizresultado[ROW][COL], int fila, int col);

int main(void)
{
  int filaA, colA;
  int filaB, colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizresultado[ROW][COL];

  printf("\nIntroduce la fila de la matriz A: ");
  scanf("%d", &filaA);
  printf("\nIntroduce la columna de la matriz A: ");
  scanf("%d", &colA);

  printf("\nIntroduce la fila de la matriz B: ");
  scanf("%d", &filaB);
  printf("\nIntroduce la columna de la matriz B: ");
  scanf("%d", &colB);

  if(validarSumaMatriz(filaA, colA, filaB, colB))
  {
    LeerDatosMatriz(matrizA, filaA, colA);
    LeerDatosMatriz(matrizB, filaB, colB);

    imprimirMatriz(matrizA, filaA, colA);
    imprimirMatriz(matrizB, filaB, colB);

    sumarMatriz(matrizA, matrizB, matrizresultado, filaA, colB);
    printf("\nEl resultado de la suma: \n");

    imprimirMatriz(matrizresultado, filaA, colB);

  }else{
    printf("\nNO puede realizar la suma de matrices\n");
  }
  return 0;
}

bool validarSumaMatriz(int filaA, int colA, int filaB ,int colB)
{
  if((filaA == filaB) && (colA == colB))
  {
    return true;
  }

  return false;

}

void LeerDatosMatriz(int matriz[ROW][COL], int fila, int col)
{
  printf("\n\n");

  for(int i = 0; i < fila; i++)
  {
    for(int x = 0; x < col; x++)
    {
      printf("Introduce el elemento [%d][%d]:", i, x);
      scanf("%d", &matriz[i][x]);
    }
  }
}

void imprimirMatriz(int matriz[ROW][COL], int fila, int col)
{
  printf("\n\n");

  for(int i = 0; i < fila; i++)
  {
    printf("|");
    for(int x = 0; x < col; x++)
    {
      printf(" %d ", matriz[i][x]);

    }
    printf("|\n");
  }
}

void sumarMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizresultado[ROW][COL], int fila, int col)
{
  for(int i = 0; i < fila; i++)
  {
    for(int x = 0; x < col; x++)
    {
      matrizresultado[i][x] = (matrizA[i][x] + matrizB[i][x]);
    }
  }
}
