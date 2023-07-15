//fuenciones con retorno de un valor
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
void menu();
float potencia(float numero, float potencia);
float promediar(float c1, float c2,float c3);
int ebriedad(int tequilas);
void salir();
int main(int argc, char *argv[]) {
	menu();
	return 0;
	system("PAUSE");
}
void menu(){
	int opcion=0, tequilas=0, estado=0;
	float base=0.0, p=0.0, c1=0.0,c2=0.0,c3=0.0;
	do{
		system("cls");
		printf("1. Elevar a una potencia un numero.\n");
		printf("2. Promediar tres calificaciones\n");
		printf("3. Alcoholimetro.\n");
		printf("4. salir\n");
		printf("Que deseas hacer?\n");
		scanf("%d",&opcion);
		switch(opcion){
			case 1: 
			printf("Ingresa la base: \n");
			scanf("%f",&base);
			printf("Ingresa la potencia: \n");
			scanf("%f",&p);
				potencia(base, p);
				printf("El %.2f elevado a %.2f es: %.2f\n",base, p, potencia(base,p));
			system("PAUSE");
			break;
			case 2: 
				printf("Ingrese la primer calificacion: \n");
				scanf("%f",&c1);
				printf("Ingrese la segunda calificacion: \n");
				scanf("%f",&c2);
				printf("Ingrese la tercera calificacion: \n");
				scanf("%f",&c3);
				printf("El prmedio de %.2f, %f y %.2f es: %.2f\n",c1,c2,c3,promediar(c1,c2,c3));
			system("PAUSE");
			break;
			case 3:
				printf("Cuantos tequilas te tomaste? \n");
				scanf("%d",&tequilas);
				estado= ebriedad(tequilas);
				if(estado==0){
					printf("Excelente, sigue asi");
				}else if(estado==1){
					printf("Que mal, tu te vas pero tu auto se queda");
				}else if(estado==3){
					printf("Que pesimo, tu te vas al torito y tu auto al corralon");
				}else{
					printf("TE vas al reclusorio norte\n");
				}
				system("PAUSE");
			break;
			case 4:
				 salir();
			break;
			default:
				printf("No se reconoce la opcion...\n");
		 	}
		}while(opcion!=4);
}
float potencia(float numero, float potencia){
	float resultado=0;
	resultado = pow(numero,potencia);
	return resultado;
}
float promediar(float c1, float c2, float c3){
	return (c1+c2+c3)/3;
}
int ebriedad(int tequilas){
	int valor=0;
	if(tequilas>=1 && tequilas <=3){
		valor=1;
	}else if(tequilas>=4 && tequilas <=8){
		valor=2;
	}else if(tequilas>=9){
		valor=3;
	}else{
		valor=0;
	}
	return valor;
}void salir(){
	printf("Programa finalizado");
}
