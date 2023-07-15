#include <stdio.h>
#include <stdlib.h>
int main(){
	int tamanio=0, indice=0, nuevo=0;
	char resp[1];
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
	do{
		system("cls");
		printf("Deseas modificar tu vector (S/N)?");
		resp[0]=getch();
		if(resp[0]=='S'||resp[0]=='s'){
			printf("\nIngresa el indice del elemento a modificar: \n");
			scanf("%d",&indice);
			if(indice>=0 && indice<tamanio){
				printf("En el indice %d actualmente hay un %d",indice, numeritos[indice]);
				printf("\nIngresa el nuevo elemento: ");
				scanf("%d",&nuevo);
				numeritos[indice]=nuevo;
				printf("Ahora el arreglo es: \n");
				for (indice=0;indice<=tamanio-1;indice++){
				printf("El valor que ocntiene el indice %d es: %d\n",indice,numeritos[indice]);
				}	
			}else{
				printf("El indice ingrsado no existe\n");
			}
			system("PAUSE");
		}
	}while(resp[0]=='S'||resp[0]=='s');
	return 0;
	system("PAUSE");
}
