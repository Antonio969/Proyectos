#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nom[20];
	char apellidop[20];
	char apellidom[20];
	printf("¿Cómo te llamas? ");
	scanf("%s",&nom);
	scanf("%s",&apellidop);
	scanf("%s",&apellidom);
	printf("Hola %s %s %s",nom, apellidop, apellidom);
	return 0;
	system("PAUSE");
}
