#ifndef DATOSLIBRO_H_
#define DATOSLIBRO_H_

#define TAM_TITLE 25
#define NAME_AUTOR 25

void datosLibro(void);

struct Libro
{
  char titulo[TAM_TITLE];
  char autor[NAME_AUTOR];
  int paginas;
};

void datosLibro(void)
{
  struct Libro libro =
  {
    "Cien Años de Soledad",
    "Gabriel García Márquez",
    512
  };

  printf("Titulo del Libro: %s\n", libro.titulo);
  printf("Autor           : %s\n", libro.autor);
  printf("Paginas         : %d\n", libro.paginas);
}
#endif
