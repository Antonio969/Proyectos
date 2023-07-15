//Funcion sin paso a parametros.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//creando los prototipos de las funciones.
void chalan_Mezclero();
void chalan_Tabiquero();
//programa principal main "maistro"
int main(int argc, char *argv[]) {
	printf("Soy el maistro y necesito mezcla\n");
	chalan_Mezclero();
	printf("________________________________________________________________________\n");
	printf("Soy el maistro y necesito tabiques\n");
	chalan_Tabiquero();
	return 0;
	system("PAUSE");
}
//desarrollando a las funciones "chalanes"
void chalan_Mezclero(){
	int botes=0, conta=0; //variable local
	printf("Cuantos botes de mezcla necesita? \n");
	scanf("%d",&botes);
	for(conta=1; conta<=botes;conta++){
			printf("Soy el chalan mezclero, llevando el bote numero %d\n",conta);
			Sleep(1000);
	}
	printf("Servido maistro\n");
}
void chalan_Tabiquero(){
	int tabiques=0, contador=0;
	printf("Cuantos tabiques necesita?\n");
	scanf("%d",&tabiques);
	for(contador=1; contador<=tabiques;contador++){
			printf("Soy el chalan tabiquero, llevando el tabique numero %d\n",contador);
			Sleep(1000);
	}
	printf("Servido maistro\n");
}

