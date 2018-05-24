#include <stdio.h>
#include <stdbool.h>    /* Valores booleanos */


#define ROW 10
#define COL 10

bool validarMultiplicacionMatriz(int, int);
void LeerDatosMatriz(int matriz[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);
void multiplicaMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizResultado[ROW][COL], int filaA, int colB);

int main(void)
{
  int filaA, colA;
  int filaB, colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizResultado[ROW][COL];

  printf("\nIntroduce la fila de la matriz A: ");
  scanf("%d", &filaA);
  printf("\nIntroduce la columna de la matriz A: ");
  scanf("%d", &colA);

  printf("\nIntroduce la fila de la matriz B: ");
  scanf("%d", &filaB);
  printf("\nIntroduce la columna de la matriz B: ");
  scanf("%d", &colB);

  if(validarMultiplicacionMatriz(filaB, colA))
  {
    LeerDatosMatriz(matrizA, filaA, colA);
    LeerDatosMatriz(matrizB, filaB, colB);

    imprimirMatriz(matrizA, filaA, colA);
    imprimirMatriz(matrizB, filaB, colB);

    multiplicaMatriz(matrizA, matrizB, matrizResultado, filaA, colA);
    printf("\nEl resultado de la multipliación: \n");

    imprimirMatriz(matrizResultado, filaA, colB);

  }else{
    printf("\nNO puede realizar la multipliación de matrices\n");
  }
  return 0;
}

bool validarMultiplicacionMatriz(int filaB, int colA)
{
  if((colA == filaB))
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

void multiplicaMatriz(int matrizA[ROW][COL], int matrizB[ROW][COL], int matrizResultado[ROW][COL], int colA, int filaB)
{
  for(int i = 0; i < filaB; i++)
  {
    for(int j = 0; j < colA; j++)
    {
      int suma = 0;
      for(int k = 0; k <filaB; k++)
      {
        suma = suma +( matrizA[i][k] * matrizB[k][j]);
      }
      matrizResultado[i][j] = suma;
    }
  }

}
