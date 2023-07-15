//Estructuras y registros
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct datos{
	char nombre[40];
	int edad;
	float promedio;
}alumnos[3];
void capturar(){
	int indice=0;
	for(indice=0;indice<3;indice++){
	fflush(stdin);
	printf("Ingresa el nombre del alumno %d: ",(indice+1));
	gets(alumnos[indice].nombre);
	fflush(stdin);
	printf("Ingresa la edad del alumno %d: ",(indice+1));
	scanf("%d",&alumnos[indice].edad);
	printf("Ingresa el promedio del alumno %d: ",(indice+1));
	scanf("%f",&alumnos[indice].promedio);
	fflush(stdin);
	}
	system("PAUSE");
}
void mostrartodos(){
	int indice=0;
	printf("Mostrando los datos de los alumnos\n");
	for(indice=0;indice<3;indice++){
	printf("_____________________________________\n");
	printf("Alumno #%d\n",(indice+1));
	printf("Nombre: %s\n",alumnos[indice].nombre);
	printf("Edad: %d\n",alumnos[indice].edad);
	printf("Promedio: %.2f\n",alumnos[indice].promedio);	
	}
	system("PAUSE");
}
void buscaredad(){
	int ed, indice,encontrado=0;
	printf("Ingresa la edad a buscar: ");
	scanf("%d",&ed);
	for(indice=0;indice<3;indice++){
		if(alumnos[indice].edad==ed){
			encontrado=1;
			printf("____________________________________\n");
			printf("Alumno #%d\n",(indice+1));
			printf("Nombre: %s\n",alumnos[indice].nombre);
			printf("Nombre: %d\n",alumnos[indice].edad);
			printf("Nombre: %.2f \n",alumnos[indice].promedio);
		}
	}
	if(encontrado==0){
		printf("Se dio de baja el alumno con la edad %d\n",ed);
	}
	system("PAUSE");
}
void buscarpromedio(){
	int indice,encontrado=0;
	float prom;
	printf("Ingresa el promedio a buscar: ");
	scanf("%f",&prom);
	for(indice=0;indice<3;indice++){
		if(alumnos[indice].promedio==prom){
			encontrado=1;
			printf("____________________________________\n");
			printf("Alumno #%d\n",(indice+1));
			printf("Nombre: %s\n",alumnos[indice].nombre);
			printf("Nombre: %d\n",alumnos[indice].edad);
			printf("Nombre: %.2f \n",alumnos[indice].promedio);
		}
	}
	if(encontrado==0){
		printf("Se dio de baja el alumno con el promedio %.2f\n",prom);
	}
	system("PAUSE");
}
void salir(){
	printf("Programa finalizado\n");
}
void menu(){
	int opcion=0;
	do{
		system("cls");
		printf("Menu de opcions: \n");
		printf("1. Captura de alumnos\n");
		printf("2. Mostrar todos los alumnos\n");
		printf("3. Buscar alumno(s) por edad\n");
		printf("4. Buscar alumno(s) por promedio\n");
		printf("5. Salir\n");
		printf("Slelecciona una opcion:\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				capturar();
			break;	
			case 2:
				mostrartodos();
			break;
			case 3:
				buscaredad();
			break;
			case 4:
				buscarpromedio();
			break;
			case 5:
				salir();
			break;
		}
	}while(opcion!=5);
	system("PAUSE");
}

int main(){
	menu(); 
	return 0;
	system("PAUSE");
}
