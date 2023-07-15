//Inroduccion a funciones en C.
#include <stdio.h>
#include <stdlib.h>
// prototipo de la funcion
void saludar();

int main(int argc, char *argv[]) {
	//llamando, invocando o utilizando a la funcion "saludar"
	saludar();
	return 0;
	system("PAUSE");
}
void saludar(){
	printf("Hola vienvenido a la programación modular.\n");
}
