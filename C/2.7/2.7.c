//biblioteca math.h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	float x=0, c=0;
	double d=0;
	int a=0,b=0;
	printf("Introduzca un numero real: \n");
	scanf("%f",&x);
	printf("Introduzca otro numero real: \n");
	scanf("%f",&c);
	printf("Introduzca un tercer numero real: \n");
	scanf("%lg",&d);
	printf("Introduzca un numero entero: \n");
	scanf("%d",&a);
	printf("Introduzca otro numero entero: \n");
	scanf("%d",&b);
	printf("%.2f su redondeo hacia arriba es: %.2f\n",x,ceil(x));
	printf("%.2f su redondeo hacia abajo es: %.2f\n",c,floor(c));
	printf("%.2lg su  valor absoluto es es: %.2lg\n",d,fabs(d));
	printf("el residuo de %d / %d es: %.2d\n",a,b,fmod(a,b));
	printf("el residuo de %d / %d es: %.2d\n",b,a,fmod(b,a));	
	printf("%.2f elevado a %.2f es: %.2f\n",x,c,pow(x,c));
	printf("La raiz cuadrada de %d es: %.2f\n",a,sqrt(a));
	printf("Funciones trigonometricas usuales\n");
	printf("El coseno de %.2f, en radianes es: %.2f\n",d,cos(d));
	printf("El seno de %.2f, en radianes es: %.2f\n",d,sin(d));
//tan(x), acos(x), asin(x), atan(x) utilizando los valores correspondientes a cada dominio de la funcion respectiva. 
	return 0;
	system("PAUSE");
}
