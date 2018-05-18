#ifndef OPERACIONES_H_
#define OPERACIONES_H_

#define TAM 10

void copiarArreglo(void);

void copiarArreglo(void)
{
  int arreglo1[]={1, 2, 3, 4 ,5, 6 , 7, 8 ,9 ,10};
  int arreglo2[TAM];

  printf("Imprimiendo el primer arreglo\n");
  for(int x = 0; x < TAM; x++)
  {
    printf(" %d,", arreglo1[x]);
    arreglo2[x] = arreglo1[x];
  }

  printf("\nImprimiendo el segundo arreglo\n");

  for(int x = 0; x < TAM; x++)
  {
    printf(" %d,", arreglo2[x]);
  }
}

#endif
