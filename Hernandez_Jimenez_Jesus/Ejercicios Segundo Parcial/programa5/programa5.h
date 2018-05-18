#ifndef NUMEROMENOR_H_
#define NUMEROMENOR_H_

#define TAM 10

void imprimirArreglo(void);
int mumeroMenor(void);

void imprimirArreglo(void)
{
  int array[]={23, 66, 78, 43, 1, 23, 45, 78, 90, 100};
  for(int i = 1; i < TAM; i++)
  {
    printf(" %d", array[i]);
  }
}

int numerMenor(void)
{

  int array[]={23, 66, 78, 43, 1, 23, 45, 78, 90, 100};
  int menor = array[0];
  for(int i = 1; i < TAM; i++)
  {
    if(array[i] < menor)
    {
      menor = array[i];
    }
  }

  return menor;
}

#endif
