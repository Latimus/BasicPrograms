//Manuel Alejandro Sahagun Mendoza   349857
//Programa que pida la cantidad de articulos y precio por unidades. Desplegar Subtotal, IVA y total
//15 sept 2016
//SMMA_C02
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float art,pre,subt,tot,iva;
	printf("Dame la cantidad de articulos: ");
	scanf("%f",&art);
	printf("Dame el precio del articulo:   ");
	scanf("%f",&pre);
	subt = art * pre;
	iva = subt * .16;
	tot = subt + iva;
	printf("\n Subtotal:  %.2f",subt);
	printf("\n IVA 0.16%:   %.2f",iva);
	printf("\n           =======");
	printf("\n Total:     %.2f",tot);
	printf("\n");
	system("pause");
		return 0;
}
