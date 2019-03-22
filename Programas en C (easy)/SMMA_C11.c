//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea 3 numeros y desplegar cual es el mayor
//22 sept 2016
//SMMA_C11
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int num1,num2,num3;
	printf("Dame el primer numero: ");
	scanf("%d",&num1);
	printf("Dame el segundo numero: ");
	scanf("%d",&num2);
	printf("Dame el tercer numero: ");
	scanf("%d",&num3);
	if (num1>num2)
	{
		if (num1>num3)
		{
			printf("\n El primer numero es mayor: %d",num1);
		}
		else
		{
			printf("\n El tercer numero es mayor: %d",num3);
		}
	}
	else
	{
		if (num2>num3)
		{
			printf("\n El segundo numero es mayor: %d",num2);
		}
		else
		{
			printf("\n El tercer numero es mayor: %d",num3);
		}
	}	
	printf("\n");
	system("pause");
	return 0;
}
