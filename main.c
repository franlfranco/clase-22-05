#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nombre[30];
  int matricula;
}Alumno;

void insertarOrdenadoStruct(Alumno arr[], int ult, Alumno dato){
  int i = ult;
  while(i>=0&&arr[i].matricula>dato.matricula){//En este caso ordenamos por matricula, si quisiera ordenar por nombre, deberia hacer: strcmpi(arr[i].nombre,dato.nombre)
    arr[i+1]=arr[i];
    i--;
  }
  arr[i+1]=dato;
}

void ordenacionInsercionStruct(Alumno alumnos[], int validos){
  for(int i=0;i<validos-1,i++){
    insertarOrdenadoStruct(alumnos,i,alumno[i+1]);
  }
}

void insertarOrdenado(char nombres[][30],int matriculas[],int ult, int mat, char nombre[]){
  int i =ult;

  while(i>=0&&matricula[i]>mat){
    matriculas[i+1] = matriculas[i];
    strcpy(nombres[i+1],nombre[i]);
    i--;
  }
  matriculas[i+1]=mat;
  strcpy(nombre[i+1],nombre);
}

void ordenarInsercion(char nombres[][30],int matriculas[],int validos){
  for(int i=0;i<validos;i++){
    char aux[30];
    strcpy(aux,nombre[i+1]);
    insertarOrdenado(nombres, matriculas,i,matriculas[i+1],aux)
  }
}

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

int main(int argc, char const *argv[]) {
  char nombres[20][30];
  int matriculas[20];
  int validos;
  //validos = cargaParalela
  ordenarInsercion(nombres,matriculas,validos);


  return 0;
}
