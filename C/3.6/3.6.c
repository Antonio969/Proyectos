//Mostrar datos de una matriz
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	int numeritos[3][3]={1,2,3,1,2,3,4,5,6,};
	int indicefilas=0, indicecol=0;
	for(indicefilas=0; indicefilas<3;indicefilas++){//para las filas
		for(indicecol=0;indicecol<3;indicecol++){
			printf("[%d]",numeritos[indicefilas][indicecol]);
		}
		printf("\n");
	}
	return 0;
	system("PAUSE");
}
