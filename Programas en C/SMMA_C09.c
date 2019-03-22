//Manuel Alejandro Sahagun Mendoza   349857
/*Don Juan tiene un terreno en forma rectangular y  desea saber el costo de instalar malla perimetral y cesped artificial.
El precio de metro lineal de malla ya instala de es $496.00 y de $218.00 el metro cuadrado de cesped. ¿Cuanto gastara don Juan? */
//16 sept 2016
//SMMA_C09
#include <stdio.h>
#include <stdlib.h>
#define MALL 496.00
#define CESP 218.00

int main(int argc, char *argv[]) 
{
	float base,alt,are,peri,tma,tcs,tot;
	printf("Dame las medidas del terreno: ");
	printf("\nPrimero el largo: ");
	scanf("%f",&base);
	printf("Ahora el ancho:   ");
	scanf("%f",&alt);
	are = base * alt;
	peri = (base * 2) + (alt * 2);
	tma = peri * MALL;
	tcs = are * CESP;
	tot = tma + tcs;
	printf("\nPrecio de la malla por metro lineal:    %.2f",MALL);
	printf("\nPrecio del metro cuadrado de cesped:    %.2f",CESP);
	printf("\nTotal por la malla instalada:         %.2f",tma);
	printf("\nTotal por el cesped:                  %.2f",tcs);
	printf("\n                                     =========");
	printf("\n El total a pagar es:                %.2f",tot);
	printf("\n");
	system("pause");
	return 0;
}
