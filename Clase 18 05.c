#include <stdlib.h>
#include <stdio.h>

int cargaParalela(char nombres[30], int edades[],int dni[]){
  char control = 's';
  int i = 0;
  while(control =='s'&&i<dim){
    printf("Ingrese nombre\n" );
    fflush(stdin);
    scanf("%s\n",&nombres[i] );
    printf("Ingrese la edad de %s\n",nombres[i] );
    fflush(stdin);
    scanf("%i",&edades[i] );
    printf("Ingrese el DNI de %s\n",&nombres[i] );
    i++;
    printf("Desea continuar? s/n\n" );
    fflush(stdin);
    scanf(" %c",&control );
  }
  return i;
}

//Estructuras de Datos
//Forma 1
typedef struct{
  char nombre[30];
  int edad;
  int dni;
}Persona;

//Forma 2
struct Persona{
  char nombre[30];
  int edad;
  int dni;
};

void cargaEstructura(Persona *p){
  scanf("%s",&p.nombre );
  gets((*p).nombre);
}

int main() {
  char nombres[100][30];
  int edades[100];
  int dni[100];
  int validos;
  Persona personas[100];

  //Arreglos Paralelos
  validos = cargaParalela(nombres,edades,dni);
  //mostrarArreglos(nombre,edad,dni);//Hacer

  //Estructuras de Datos
  typedef unsigned long int enorme;
  unsigned long int variableGrande;
  enorme variableGrande;
  //El typedef se define fuera del main.

  Persona p1={"Juan",25,35748322};//Declaracion e inicializacion de variable segun forma 1
  struct Persona p;//Declaracion de variable segun forma 2
  Persona personas[100];//Forma 1
  printf("%s\n",p1.nombre);
  printf("%s\n", personas[0].nombre);
  personas[0].edad = 15;





  return 0;
}
