//Estructuras y registros
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct datos{
	char nombre[40];
	int edad;
	float promedio;
}alumno1,alumno2;
int main(){
	printf("Ingresa el nombre del alumno 1: ");
	gets(alumno1.nombre);
	fflush(stdin);
	printf("Ingresa la edad del alumno 1: ");
	scanf("%d",&alumno1.edad);
	printf("Ingresa el promedio del lumno 1: ");
	scanf("%f",&alumno1.promedio);
	fflush(stdin);
	printf("Ingresa el nombre del alumno 2: ");
	gets(alumno2.nombre);
	fflush(stdin);
	printf("Ingresa la edad del alumno 2: ");
	scanf("%d",&alumno2.edad);
	printf("Ingresa el promedio del lumno 2: ");
	scanf("%f",&alumno2.promedio);
	printf("Mostrando los datos de los alumnos\n");
	printf("_____________________________________\n");
	printf("Alumno #1\n");
	printf("Nombre: %s\n",alumno1.nombre);
	printf("Edad: %d\n",alumno1.edad);
	printf("Promedio: %.2f\n",alumno1.promedio);
	printf("Alumno #2\n");
	printf("Nombre: %s\n",alumno2.nombre);
	printf("Edad: %d\n",alumno2.edad);
	printf("Promedio: %.2f\n",alumno2.promedio);
	return 0;
	system("PAUSE");
}
