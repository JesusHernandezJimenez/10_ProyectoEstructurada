#ifndef NUMEROMAYOR_H_
#define NUMEROMAYOR_H_

#define TAM 10

void imprimirArreglo(void);
int mumeroMayor(void);

void imprimirArreglo(void)
{
  int array[]={23, 66, 78, 43, 1, 23, 45, 78, 90, 100};
  for(int i = 1; i < TAM; i++)
  {
    printf(" %d", array[i]);
  }
}

int numerMayor(void)
{

  int array[]={23, 66, 78, 43, 1, 23, 45, 78, 90, 100};
  int mayor = array[0];
  for(int i = 1; i < TAM; i++)
  {
    if(array[i] > mayor)
    {
      mayor = array[i];
    }
  }

  return mayor;
}

#endif
