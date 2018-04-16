#include <stdio.h>
int main(void)
{
  int numeros[] = {9, 2 ,5, 7, 4, 5, 8, 6, 3};
  int i, j, aux;
  for (i = 0; i < 9; i++)
  {
    for (j=i+ 1; j < 9; j++)
    {
      if (numeros[i] > numeros[j])
      {
        aux = numeros[j];
        numeros[j] = numeros[i];
        numeros[i] = aux;
      }
    }
  }
  for (i = 0; i < 9; i++)
  {
    printf("%d\n", numeros[i]);
  }
  return 0;
}
