//Manuel Alejandro Sahagun Mendoza   349857
//Programa que calcule el area de un cilindro
//15 sept 2016
//SMMA_C04
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main(int argc, char *argv[]) 
{
	float rad,alt,area;
	printf("Dame el radio de la base:    ");
	scanf("%f",&rad);
	printf("Dame la altura del cilindro: ");
	scanf("%f",&alt);
	area = PI * (rad * rad) * alt;
	printf("\n El area del cilindro es: %.2f",area);
	printf("\n");
	system("pause");
	return 0;
}
