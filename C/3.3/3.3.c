#include <stdio.h>
#include <stdlib.h>
int main(){
	int tamanio=0, indice=0;
	printf("De que tamaño quieres que sea tu vector? ");
	scanf("%d",&tamanio);
	int numeritos[tamanio];
	for(indice=0;indice<tamanio;indice++){
		printf("Ingresa el elemento del indice %d: ",indice);
		scanf("%d",&numeritos[indice]);
	}
	for (indice=0;indice<=tamanio-1;indice++){
		printf("El valor que ocntiene el indice %d es: %d\n",indice,numeritos[indice]);
	}
	return 0;
	system("PAUSE");
}
