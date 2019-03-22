//Manuel Alejandro Sahagun Mendoza   349857
//Programa que lea una unidad de peso en gramos y convertir a libras y onzas
//16 sept 2016
//SMMA_C07
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	float gram,libr,oz;
	printf("Dame la unidad de peso en gramos: ");
	scanf("%f",&gram);
	libr = gram * 0.0022;
	printf("\n El peso en libras es:          %.4f",libr);
	oz = gram * 0.035;
	printf("\n El equivalente en onzas es :   %.4f",oz);
	printf("\n");
	system("pause");
	return 0;
}
