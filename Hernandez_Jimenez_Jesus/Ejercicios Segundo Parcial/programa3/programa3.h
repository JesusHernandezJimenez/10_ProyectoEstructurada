#ifndef CONVERSION_H_
#define CONVERSION_H_

#define TAM 10

void convertirMayMin(void);

void convertirMayMin()
{
  char array[TAM]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

  printf("Imprimiendo el primer arreglo\n");
  for(int i = 0; i < TAM; i++)
  {
    printf(" %c", array[i]);
  }

  printf("\nImprimiendo el arreglo convertido\n");
  for(int i = 0; i < TAM; i++)
  {
    array[i] = array[i] + 32;
    printf(" %c", array[i]);
  }
}

#endif
