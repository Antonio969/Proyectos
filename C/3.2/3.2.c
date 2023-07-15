#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main(){
	int numeritos[10];
	int n=0;
	for(n=0;n<=9;n++){
		printf("Introduzca el elemento del indice %d del arreglo: ",n);
		scanf("%d",&numeritos[n]);
	}
	for(n=0;n<=9;n++){
		printf("El indice %d tiene un %d\n",n, numeritos[n]);
	}
	return 0;
	system("PAUSE");
}
