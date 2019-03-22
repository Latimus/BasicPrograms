//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea 3 califciaciones, desplegar resultados en forma de arbol
//25 sept 2016
//SMMA_C17
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float cal1,cal2,cal3,prom;
	printf("Dame la primer calificacion: ");
	scanf("%f",&cal1);
	printf("Dame la segunda calificacion: ");
	scanf("%f",&cal2);
	printf("Dame la tercera calificacion: ");
	scanf("%f",&cal3);
	prom = (cal1 + cal2 + cal3) / 3;
	if (prom<80)
	{
		if (prom<60)
		{
			if (prom<30)
			{
				printf("Repetir");
			}
			else
			{
				printf("Extraordinario");
			}
		}
		else
		{
			if (prom<70)
			{
				printf("Suficiente");
			}
			else
			{
				printf("Regular");
			}
		}
	}
	else
	{
		if (prom<96)
		{
			if (prom<90)
			{
				printf("Bien");
			}
			else
			{
				printf("Muy bien");
			}
		}
		else
		{
			if (prom<100)
			{
				printf("Excelente");
			}
			else
			{
				printf("Error");
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
