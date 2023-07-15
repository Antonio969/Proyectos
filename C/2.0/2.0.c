#//Estructura Ciclo do while
/*
Realizar un programa utilizando do while
Preguntar: ¿Tomarte  un tequilita? (S,N)
El priograma debera repetirse  mientras la respuesta sea S
Contar la cantidad de tequilitas ingeridos
Al final mostrar un mensaje de acuerdo a la cantidad de tequilitas 
Entre 1 y 3, "Te vas sobrio de la fiesta"
Entre 4 y 7,  "Te vas un poco mareado de la fiesta"
Entre  8 y 12, "Te vas ebrio de la fiesta"
Entre 13 y 16, "Hiciste un show y te hecharon"
Entre 17 o mas, "Eres el anfitrion ahora te aguantas"
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	char tequilita[1];
	int tequilas=0;
	printf("UwU-----Bienvenido a la fiesta------UwU\n");
	do{
		printf("¿Te gustaria tomarte un tequilita?\n");
		tequilita[0]=getch();
		if(tequilita[0]=='S'||tequilita[0]=='s'){
			tequilas++;
		}
	//	printf("Tequilitas %d\n",tequilas);
	}while(tequilita[0]=='S'|| tequilita[0]=='s');
	if(tequilas>=1 && tequilas<=3){
		printf("Te vas sobrio de la fiesta\n");
	}else if(tequilas>=4 && tequilas<=7){
		printf("Te vas un poco mareado de la fiesta\n");
	}else if(tequilas>=8 && tequilas<=12){
		printf("Te vas hebrio de la fiesta\n");
	}else if(tequilas>=13 && tequilas<=16){
		printf("Hiciste un show y te hecharon de la fiesta\n");
	}else if(tequilas>=17){
		printf("Eres el anfitrion, ahora te aguantas.\n");
	}else{
		printf("Felicidades sabes divertirte sin intoxicarte\n");
	}
	return 0;
	system("PAUSE");
}
