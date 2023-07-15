//Estructuras ciclicas o interativas
/*Utilizando la estructura ciclica while, muestre todos los numeros del 1 al 100
así como su suma de ellos*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(int argc, char *argv[]) {
	int cont=0, acum=0, n, m, par=0, impar=0;
	printf("Diginte un entero no negativo: ");
	scanf("%d",&n);
	while(cont<=n){
		printf("numero, %d y la suma con los anteriores es: %d\n",cont,m);
		acum+=cont;
		cont+=1;
		m=acum+cont;
		if(cont%2!=0){
			par+=1;
		}else{
			impar+=1;
		}
		Sleep(10);
	}
	printf("La suma de todos los numeros es %d, existen %d numeros pares y %d numeros impares\n",acum,par,impar);
	return 0;
	system("PAUSE");
}
