//Otro programa de condicional if anidado
/*
En una escuela se aplican diferentes filtros para poder ser aceptados, el primer filtro es que el alumno X debe tener conocimeintos básicos de programación,
segundo filtro, conocimientos básicos de matemáticas , tercer filtro, que le guste crear música, ultimo filtro, que quiera estudiar ingeniería quimica ó
ingeniería en sistemas computacionales.
El programa deberá infromando cuando no logre pasar el filtro,  al final cuando logre pasa los 4 filtros le indicará que ha sido aceptado,
En el otro caso le deberá  informar que se que do a un flitro de pasar.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nom[20];
	int prog=0 ,mate=0,musica = 0, carrera=0;
	printf("Ingresa tu nombre: ");
	scanf("%s",&nom);
	printf("Hola %s, contesta las siguientes preguntas: \n",nom);
	printf("Tienes conocimientos basicos en programacion (0 para No, 1 para Si)? ");
	scanf("%d",&prog);
	if(prog!=1){
		printf("%s, no pasate el primer filtro, no desistas e intenta de nuevo.\n",nom);
	}else{
		printf("%s pasate el primer filtro\n",nom);
		printf("Tienes conociemientos basicos de matematicas (0 para No, 1 para Si)?");
		scanf("%d",&mate);
		if(mate!=1){
			printf("%, no pasate el segundo filtro, no desistas y sigue intentando.\n ",nom);
		}else{
			printf("%s pasate el segundo filtro\n",nom);
			printf("Te gusta crear musica (0 para No, 1 para Si)?");
			scanf("%d",&musica);
			if(musica!=1){
			printf("%, no pasate el tercer filtro, no desistas y sigue intentando.\n ",nom);
		    }else{
				printf("%s pasate el tercer filtro\n",nom);
	        	printf("Carreras que ofrecemos?\n");
	        	printf("1. Licenciatura en Derecho\n");
	        	printf("2. Ingenieria quimica\n");
	        	printf("3. Ingenieria en sistemas computacionales\n");
	        	printf("4. Licenciatura en progrmacaion\n");
	        	printf("Que carrera quieres estudiar?");
	        	scanf("%d",&carrera);
	        	if(carrera==2 || carrera==3){
	        		printf("Felicitaciones %s has sido aceptado, bienvenido",nom);
				}else{
					printf("%s estuviste a un filtro de ser aceptado",nom);
				}
			}
		}
	}
	return 0;
	system("PAUSE");
}
