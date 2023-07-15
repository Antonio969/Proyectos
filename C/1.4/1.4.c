//Condicional if doble.
/*
/*Un vendedor necesita saber en base al nombre  de un producto y la cantidad de este producto,
 ¿Cuánto va a cobrar por la venta , y cuanto dará de cambio a su cliente segun la cantidad recibida?
Si la cantidad recibida es mayor o igual al total, regresarle su cambio.
Si NO informarle que no le alcanza para realizar su compra.
*/
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
	printf("Usted paga por %.1f %s de %s $%.2f \n",cantidad, medida, nomProd, total);//usar modificadores de formato .n en el especificador
	printf("Recibi: ");
	scanf("%f",&recibi);
	//Aqui se modifica.
	if(recibi>=total)
	{
		cambio = recibi - total;
		printf("Su cambio es $%.2f\n",cambio);//modificador en el espicificador
		printf("Gracias por su compra!");
	}else{
		printf("Lo siento, no te alcanza para realizar tu compra! u.u\n");
	}
	return 0;
	sistem("PAUSE");
}
