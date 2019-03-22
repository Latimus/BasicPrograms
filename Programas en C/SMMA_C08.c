//Manuel Alejandro Sahagun Mendoza   349857
//Programa que lea el precio de un articulo con IVA incluido, cantidad de articulos, desplegar subtotal, IVA y total
//16 sept 2016
//SMMA_C08
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float art,pre,subt,tot,iva;
	printf("Dame la cantidad de articulos: ");
	scanf("%f",&art);
	printf("Dame el precio del articulo:   ");
	scanf("%f",&pre);
	tot = pre * art;
	subt = tot / 1.16;
	iva= subt * .16;
	printf("\n Subtotal:  %.2f",subt);
	printf("\n IVA 0.16%:  %.2f",iva);
	printf("\n            =====");
	printf("\n Total:     %.2f",tot);
	printf("\n");
	system("pause");
	return 0;
}
