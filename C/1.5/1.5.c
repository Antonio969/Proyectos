//Condicional if multiple o anidada.
/*
Los m�sicos se catalogan seg�n el n�mero de canciones y partituras que tengan as�:
Entre 7 y 10 canciones y ninguna partitura "M�sico naciente".
Entre / y 10 canciones y una partitura o m�s "M�sico estelar".
M�s de 10 canciones y ms de % partiruras "M�sico consagrado" en cualquier otro caso 
es un "M�sico en formaci�n" 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nom[30];
	int canciones = 0, partituras = 0;
	printf("Programa que define que tipo de M�sico eres\n");
	printf("Ingresa tu nombre: ");
	scanf("%s",&nom);
	printf(" Hola %s, contesta las siguientes preguntas:\n",nom);
	printf("�Cu�ntas canciones has escrito? ");
	scanf("%d",&canciones);
	printf("�Cu�ntas partituras tienes? ");
	scanf("%d",&partituras);
	if(canciones>=7 && canciones <=10 && partituras==0){
		printf("%s eres un M�sico naciente.",nom);
	}else{
		if(canciones>=7 && canciones <=10 && partituras>=1){
			printf("%s eres un M�sico estelar.",nom);
		}else{
			if(canciones>=10 && partituras>5){
				printf("%s eres un M�sico consagrado.",nom);
			}else{
				printf("%s eres un M�sico en formaci�n.",nom);
			}
		}
	}
	
	return 0;
}
