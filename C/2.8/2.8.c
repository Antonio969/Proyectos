#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
 int main(){
 	int numero=0, numusuario=0, aciertos=0, errores=0, i=0;
 	srand(time(NULL)); //generando la semilla
 	for (i=0;i<5;i++){
 		numero = 1+rand()%(51-1);//generando un numero aleatorio entre 1-100
 		printf("Adivina que numero estoy pensando entre 1 y 100? \n");
 		scanf("%d",&numusuario);
 		if(numusuario==numero){
 			printf("Correcto acertaste!...\n");
 			aciertos++;
		 }else{
		 	printf("Error, pero estuviste cerca...\n");
		 	errores++;
		 }
		 printf("Tus aciertos fueron: %d\n",aciertos);
		 printf("Tus errores fueron: %d\n",errores);
	 }
 //	numero = 1+rand()%(51-1);//generando un numero aleatorio entre 1-50
 //	printf("%d",numero);
 	return 0;
 	system("PAUSE");
 }

