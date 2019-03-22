//Manuel Alejandro Sahagun Mendoza   349857
//Programa que lea 4 calificaciones y desplegar el promedio
//16 sept 2016
//SMMA_C05
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float cal1,cal2,cal3,cal4,prom;
	printf("Dame la primera calificacion: ");
	scanf("%f",&cal1);
	printf("Dame la segunda calificacion: ");
	scanf("%f",&cal2);
	printf("Dame la tercera calificacion: ");
	scanf("%f",&cal3);
	printf("Dame la cuarta calificacion:  ");
	scanf("%f",&cal4);
	prom = (cal1 + cal2 + cal3 + cal4) / 4;
	printf("\n La calificacion final es: %.2f",prom);
	printf("\n");
	system("pause");
	return 0;
}
