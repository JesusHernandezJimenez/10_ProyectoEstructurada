#ifndef SUMA_H_
#define SUMA_H_

int suma(void);

int suma(void)
{
  int sumatoria = 0;
  for(int i = 1; i <= 100; i++)
  {
    sumatoria =  sumatoria + i;
  }
  return sumatoria;
}

#endif
