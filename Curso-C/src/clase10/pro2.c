#include<stdio.h>
struct persona{
  char nombre[20];
  int edad;
}alumno1,alumno2;

void main(){
  fgets(alumno1.nombre,20,stdin);
  scanf("%d",&alumno1.edad);
  getchar();
  printf("Su nombre es: ");
  fputs(alumno1.nombre,stdout);
  printf("Su edad es: ");
  printf("%d\n",alumno1.edad);
  
  fgets(alumno2.nombre,20,stdin);
  scanf("%d",&alumno2.edad);
  getchar();
  printf("Su nombre es: ");
  fputs(alumno2.nombre,stdout);
  printf("Su edad es: ");
  printf("%d\n",alumno2.edad);
}
