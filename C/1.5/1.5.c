//Condicional if multiple o anidada.
/*
Los músicos se catalogan según el número de canciones y partituras que tengan así:
Entre 7 y 10 canciones y ninguna partitura "Músico naciente".
Entre / y 10 canciones y una partitura o más "Músico estelar".
Más de 10 canciones y ms de % partiruras "Músico consagrado" en cualquier otro caso 
es un "Músico en formación" 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nom[30];
	int canciones = 0, partituras = 0;
	printf("Programa que define que tipo de Músico eres\n");
	printf("Ingresa tu nombre: ");
	scanf("%s",&nom);
	printf(" Hola %s, contesta las siguientes preguntas:\n",nom);
	printf("¿Cuántas canciones has escrito? ");
	scanf("%d",&canciones);
	printf("¿Cuántas partituras tienes? ");
	scanf("%d",&partituras);
	if(canciones>=7 && canciones <=10 && partituras==0){
		printf("%s eres un Músico naciente.",nom);
	}else{
		if(canciones>=7 && canciones <=10 && partituras>=1){
			printf("%s eres un Músico estelar.",nom);
		}else{
			if(canciones>=10 && partituras>5){
				printf("%s eres un Músico consagrado.",nom);
			}else{
				printf("%s eres un Músico en formación.",nom);
			}
		}
	}
	
	return 0;
}
