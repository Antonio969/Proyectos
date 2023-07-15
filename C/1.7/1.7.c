//Estructura switch
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int dia=0;
	char mes[1];
	printf("Ingresa un numero del 1 al 7: ");
	scanf("%d",&dia);
	switch(dia){
		case 1:
			printf("El dia numero %d es Domingo\n",dia);
		break;
		case 2:
			printf("El dia numero %d es Lunes\n",dia);
		break; 
		case 3:
			printf("El dia numero %d es Martes \n",dia);
		break;
		case 4:
			printf("El dia numero %d es Miercoles\n",dia);
		break;
		case 5:
			printf("El dia numero %d es Jueves\n",dia);
		break;
		case 6:
			printf("El dia numero %d es Viernes\n",dia);
		break;
		case 7:
			printf("El dia numero %d es Sabado\n",dia);
		break;
		default:
			printf("No ingresaste un numero entre 1 y 7");
	}
	printf("Ingresa una lentra entre:\n");
	printf("E,F,M,A,m,J,j,a,S,O,N,D\n");
	mes[0]=getch();//tambien se puede utilizar scanf("%s",mes); con el indicador %s
	switch(mes[0]){
		case 'E':
			printf("El mes es Enero\n");
		break;
		case 'F':
			printf("El mes es Febrero\n");
		break;
		case 'M':
			printf("El mes es Marzo\n");
		break;
		case 'A':
			printf("El mes es Abril\n");
		break;
		case 'm':
			printf("El mes es Mayo\n");
		break;
		case 'J':
			printf("El mes es Junio\n");
		break;
		case 'j':
			printf("El mes es Julio\n");
		break;
			case 'a':
			printf("El mes es Agosto\n");
		break;
		case 'S':
			printf("El mes es Septiembre\n");
		break;
		case 'O':
			printf("El mes es Octubre\n");
		break;
			case 'N':
			printf("El mes es Noviembre\n");
		break;
		case 'D':
			printf("El mes es Diciembre\n");
		break;
		default:
			printf("No ingrasaste una letra de las especificadas...");
	}
	return 0;
	system("PAUSE");
}
