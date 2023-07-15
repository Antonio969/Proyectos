//Estructuura condicional if simple.
/*Un vendedor necesita saber en base al nombre  de un producto y la cantidad de este producto,
 ¿Cuánto va a cobrar por la venta , y cuanto dará de cambio a su cliente segun la cantidad recibida?
Si la cantidad recibida es mayor o igual al total, regresarle su cambio*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nomProd[20], medida[12];
	float precio = 0.0, cantidad = 0.0, recibi=0.0, total = 0.0;
	float cambio = 0.0;
	printf("Nombre del Producto: ");
	scanf("%s",&nomProd);
	printf("Unidad de medida: ");
	scanf("%s",&medida);
	printf("Precio: ");
	scanf("%f",&precio);
	printf("Cantidad: ");
	scanf("%f",&cantidad);
	total = precio * cantidad;
	printf("Usted paga por %f %s de %s $%f \n",cantidad, medida, nomProd, total);
	printf("Recibi: ");
	scanf("%f",&recibi);
	//Aqui se modifica.
	if(recibi>=total)
	{
		cambio = recibi - total;
		printf("Su cambio es $%f\n",cambio);
		printf("Gracias por su compra!");
	}
	return 0;
	sistem("PAUSE");
}
