//Manuel Alejandro Sahagun Mendoza   349857
//Programa que lea la temperatura en grados centigrados y los convierta a grados Farenheit y Kelvin
//16 sept 2016
//SMMA_C06
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float cent,far,kelv;
	printf("Dame la termperatura en grados centigrados: ");
	scanf("%f",&cent);
	far = cent * (9/5) + 32;
	printf("\n La temperatura en grados Farenheit es: %.2f",far);
	kelv = cent - 273;
	printf("\n La temperatura en grados Kelvin:     %.2f",kelv);
	printf("\n");
	system("pause");
	return 0;
}
