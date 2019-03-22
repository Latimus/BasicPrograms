//Manuel Alejandro Sahagun Mendoza   349857
//Programa que sirva para calcular el area de un trapecio
//15 sept 2016
//SMMA_C03
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float bama,bame,alt,area;
	printf("Dame la medida de la base mayor: ");
	scanf("%f",&bama);
	printf("Dame la medida de la base menor: ");
	scanf("%f",&bame);
	printf("Dame la medida de la altura:     ");
	scanf("%f",&alt);
	area = ((bama + bame) / 2) * alt;
	printf("\n El area es: %.2f",area);
	printf("\n");
	system("pause");
	return 0;
}
