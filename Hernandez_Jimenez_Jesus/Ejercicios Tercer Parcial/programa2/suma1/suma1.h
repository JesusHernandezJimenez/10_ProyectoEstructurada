#ifndef SUMATORIA_H_
#define SUMATORIA_H_

int sumatoriaUno(int, int);

int sumatoriaUno(int m, int n)
{
  int suma = m;
  int resta = 0;
  for(int i = m; i<= n; i++)
  {
    suma = suma + i;
  }

  for(int i = 0; i <= m; i++)
  {
    resta = resta + i;
  }

  suma = suma - resta;
  return suma;
}

#endif
