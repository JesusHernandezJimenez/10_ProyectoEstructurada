#ifndef SUMATORIA_H_
#define SUMATORIA_H_

int sumatoriaTres(int);

int sumatoriaTres(int n)
{
  int suma = 0;
  for(int i = 1; i <= n; i++)
  {
    suma = suma + ( i * i);
  }

  return suma;
}

#endif
