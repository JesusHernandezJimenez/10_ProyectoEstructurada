#ifndef COMBINACIONES_H_
#define COMBINACIONES_H_

long factorial(int);

long factorial(int n)
{
  long factorial = 1;
  int cont = 1;
  for (int i = 1; i <= n; i++)
  {
      factorial = factorial * cont;
      cont += 1;
  }

  return factorial;
}

#endif
