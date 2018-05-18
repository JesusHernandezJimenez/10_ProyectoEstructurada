#ifndef SUMATORIA_H_
#define SUMATORIA_H_

#define SUBINDICE 0

int sumatoriaDos(int);

int sumatoriaDos(int n)
{
  int suma = SUBINDICE;

  for(int i = SUBINDICE + 1; i<= n; i++)
  {
    suma = suma + i;
  }

  return suma;
}

#endif
