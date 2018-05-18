#ifndef ALUMNO_H_
#define ALUMNO_H_

#define TAM_NOM 10

void datosAlumno(void);
struct Alumno
{
  char nombre[TAM_NOM];
  int edad;
  float peso;
};

void datosAlumno(void)
{
  struct Alumno alumno =
  {
    "Alberto",
    19,
    67.89
  };
  printf("Nombre del alumno: %s\n", alumno.nombre);
  printf("Edad             : %d\n", alumno.edad);
  printf("Peso(Kg)         : %2.2f\n", alumno.peso);
}


#endif
