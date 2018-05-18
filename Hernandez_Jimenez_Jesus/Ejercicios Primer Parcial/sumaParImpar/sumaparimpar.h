#ifndef SUMAPARIMPAR_H_
#define SUMAPARIMPAR_H_

void numerosParImpar(void);
int sumaPar(void);
int sumaImpar(void);

int sumaImpar(void)
{
  int suma = 0;
  for(int i = 1; i <= 100; i++)
  {
    if((i % 2) != 0)
    {
      suma = suma + i;
    }
  }

  return suma;
}

int sumaPar(void)
{
  int suma = 0;
  for(int i = 1; i <= 100; i++)
  {
    if((i % 2) == 0)
    {
      suma = suma + i;
    }
  }

  return suma;
}

void imprimir(void)
{
  for(int i = 1; i <= 100; i++)
  {
    printf("%d\n", i);
  }
}

#endif
