#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <mi libreria.h>//Para usarala se puede copiar la ubicacion del archivo o pegarla en la carpeta include correspondiente al entorno de desarrollo
int main(){
	float n1=10.0, n2=998.9;
	printf("La suma de %f con %f es %f\n",n1,n2,sumar(n1,n2));
	printf("La resta de %f con %f es %f\n",n1,n2,restar(n1,n2));
	printf("La multiplicacion de %f con %f es %f\n",n1,n2,multiplicar(n1,n2));
	printf("La division de %f con %f es %f\n",n1,n2,dividir(n1,n2));
	return 0;
	system("PAUSE");
}
