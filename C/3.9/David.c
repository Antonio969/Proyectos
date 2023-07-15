//leer los elementos de una matriz nxm(1-40) y multiplicarla por un escalar (vector)
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m=1;
	printf("Introduzca el orden de la matriz cuadrada: ");
	scanf("%d",&n);
//	printf("Introduzca el numero de columnas: ");
//	scanf("%d",&m);
	int matriz[n][n];
//	int matrizr[n][m];
	int indicef=0, indicec=0;
//	int vector[n];
//	printf("ingresando los datos de la matriz\n");
	for(indicef=0; indicef<n;indicef++){//para las filas
		for(indicec=1;indicef<indicec;indicec++){
		//	printf("Ingresa el elemento de la posicion [%d][%d]\n",indicef,indicec);
		//	scanf("%d",&matriz[indicef][indicec]);
		 matriz[indicef][indicec]=m++;
		}
	}
/*	printf("Ingresando los datos del vector:\n");
	for(indicec=0;indicec<n;indicec++){
		printf("Ingresa el elemento de la posicion [%d]: ",indicec);
		scanf("%d",&vector[indicec]);
	}*/
	printf("Mostrando datos de la matriz\n");	
	for(indicef=0; indicef<m;indicef++){
		for(indicec=0;indicec<n;indicec++){
			printf("[%d]",matriz[indicef][indicec]);
		}
		printf("\n");
	}
/*	printf("Mostrando datos de el vector\n");
	for(indicec=0;indicec<n;indicec++){
			printf("[%d]",vector[indicec]);
	}
	for(indicef=0; indicef<m;indicef++){
		for(indicec=0;indicec<n;indicec++){
			matrizr[indicef][indicec]=matriz[indicef][indicec]*vector[indicec];
		}
	}
	printf("\nMostrando datos de la matriz resultante\n");	
	for(indicef=0; indicef<m;indicef++){
		for(indicec=0;indicec<n;indicec++){
			printf("[%d]",matrizr[indicef][indicec]);
		}
		printf("\n");
	}*/
	return 0;
	system("PAUSE");
}
	
