//Estructura ciclica for
/*
Ejemplo de un auto de carreras
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[]) {
	int vueltas=0, n, m, v=0;
	printf("A partir de que vuelta comienza? ");
	scanf("%d",&m);
	printf("¿Cuantas vueltas dara el automovil? ");
	scanf("%d",&n);
	printf("A que velocidad viaja el auto?(a menor cifra mayor velocidad)");
	scanf("%d",&v);
	for(vueltas=m; vueltas<=(n+m); vueltas++ ){
		printf("Vuelta # %d\n",vueltas);
		Sleep(v);
	}
	return 0;
	system("PAUSE");
}
