#include <stdlib.h>
#include <stdio.h>
int main (){
	int avion[10]={0,0,0,0,0,0,0,0,0,0};
	int clase=0, asiento=0, indice=0;
	int contclase1=0,contclase2=0;
	char fin[12]={'P','R','O','G','R','A','M','A',' ','F','I','N'};
	do{
		printf("Aerolineas ACME\n");
		printf("1. Primera clase.\n");
		printf("2. Segunda clase.\n");
		printf("3. Salir.\n");
		printf("En que clase desaeas viajar? ");
		scanf("%d",&clase);
		switch(clase){
			case 1:
				if(contclase1==5&& contclase2==5){
					printf("El avion ya esta lleno, espera al siguiente vuelo\n");
				}else{
					for(asiento=0;asiento<5;asiento++){
						if(contclase1==5){
							printf("La primera clase ya esta llena. \n");
							break;
						}else{
							if(avion[asiento]==0){
								avion[asiento]=1;
								printf("su asiento es %d en primra clase\n",asiento+1);
								contclase1++;
								break;
							}
						}
					}
				}
				printf("El avion hasta el momento esta asi: \n");
				printf("\n_________________________________________________\n");
				for(asiento=0;asiento<10;asiento++){
					printf("[%d]",avion[asiento]);
				}
				printf("\n_________________________________________________\n");
			break;
			case 2:
				if(contclase1==5&& contclase2==5){
				printf("El avion ya esta lleno, espera al siguiente vuelo\n");
				}else{
					for(asiento=5;asiento<10;asiento++){
						if(contclase2==5){
							printf("La segunda clase ya esta llena. \n");
							break;
						}else{
							if(avion[asiento]==0){
								avion[asiento]=1;
								printf("su asiento es %d en segunda clase\n",asiento+1);
								contclase2++;
								break;
							}
						}
					}
				}
				printf("El avion hasta el momento esta asi: \n");
				printf("\n___________________________________________________\n");
				for(asiento=0;asiento<10;asiento++){
					printf("[%d]",avion[asiento]);
				}
				printf("\n___________________________________________________\n");
			break;
			case 3:
				for(indice=0;indice<=12;indice++){
					printf("%c",fin[indice]);
					Sleep(200);
				}
			break;
		}
		
	}while(clase!=3);
	return 0;
	system("PAUSE");
}
