//Manuel Alejandro Sahagun Mendoza   349857
//Programa que lea 4 numeros y realize las 4 operaciones basicas y desplegue el resultado
//15 sept 2016
//SMMA_C01
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	float num1,num2,num3,suma,resta,mult,div;
	printf("Dame el primer numero:  ");
	scanf("%f",&num1);
	printf("Dame el segundo numero: ");
	scanf("%f",&num2);
	printf("Dame el tercer numero:  ");
	scanf("%f",&num3);
	suma = num1 + num2 + num3;
	printf("\n La suma de los numeros es:            %.2f",suma);
	resta = num1 - num2 - num3;
	printf("\n La resta de los numeros es:          %.2f",resta);
	mult = num1* num2 * num3;
	printf("\n La multiplicacion de los numeros es:  %.2f",mult);
	div = num1 / num2 / num3;
	printf("\n La division de los numero es:         %.2f",div);
	printf("\n");
	system("pause");
	return 0;
}
