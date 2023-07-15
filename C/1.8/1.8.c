//Ejercicio donde se utiliza switch e if
#include <stdio.h>
#include <stdlib.h>
int main(){
	char nom[30], opcion[1];
	int horas=0;
	printf("Ingresa tu nombre: ");
	gets(nom);
	printf("Menu de actividades\n");
	printf("D. Dormir\n");
	printf("T. Trabajar\n");
	printf("E. Estudiar\n");
	printf("%s, que deseas hacer?\n ",nom);
	opcion[0]=getch();
	switch(opcion[0]){
		case 'D':
		case 'd':
			printf("%s, Cuantas horas desas dormir?\n",nom);
			scanf("%d",&horas);
			if(horas>=1 && horas<=4){
				printf("%s, %d son pocas para dormir pero se sobrevive.\n",nom,horas);
			} else if(horas>4 && horas<=8){
				printf("%s, %d son el promedio para dormir de un ser humano.\n",nom,horas);
			}else if(horas>8){
				printf("%s, %d son demaciadas para dormir, duermes mas de lo que vives.\n",nom,horas);
			}else{
				printf("%s, no se puede vivir sin dormir\n",nom);
			}
		break;
		case 'E':
		case 'e':
			printf("%s, Cuantas horas desas estudiar?\n",nom);
			scanf("%d",&horas);
			if(horas<=0){
				printf("%s, mejor ponte a trabajar.\n",nom);
			}else if(horas>=1 && horas<=7){
				printf("%s, eres un estudiante promedio.\n",nom);
			}else {
				printf("%s, eres un nerd.\n",nom);
			}
			break;
		case 'T':
		case 't':
			printf("%s, Cuantas horas desas trabajar?\n",nom);
			scanf("%d",&horas);
			if(1<=horas && horas<=8){
				printf("%s, eres un trabajdor normal.\n",nom);
			}else if(horas>=9 && horas<=12){
				printf("%s, eres un supertrabajdor.\n",nom);
			}else if(horas>12) {
				printf("%s, no tienes vida social, pero seguramente algun dia seras millonario.\n",nom);
			}else{
				printf("%s,  o eres el dueño de la empresa o eres un holgazan.\n",nom);
			}
			break;
			default:
				printf("%s, busca un proposito en la vida v:.\n");
	}
	
	retunr0:
	system("PAUSE");
}
