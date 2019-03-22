//Manuel Alejandro Sahagun Mendoza	349857
//Programa que lea 3 numeros y desplegar en orden asendente
//25 sept 2016
//SMMA_C14
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int num1,num2,num3;
	printf("Dame el primer numero: ");
	scanf("%d",&num1);
	printf("Dame el segundo nuemro: ");
	scanf("%d",&num2);
	printf("Dame el tercer numero: ");
	scanf("%d",&num3);
	if (num1<num2)
	{
		if (num2<num3)
		{
		printf("\n %d, %d, %d",num1,num2,num3);
		}
		else
		{
			if (num1<num3)
			{
			printf("\n %d, %d, %d",num1,num3,num2);
			}
			else
			{
			printf("\n %d, %d, %d",num3,num1,num2);
			}
		}
		
	}
	else
	{
		if (num1<num3)
		{
			printf("\n %d, %d, %d",num2,num1,num3);
		}
		else
		{
			if (num3<num2)
			{
			printf("\n %d, %d, %d",num3,num2,num1);
			}
			else
			{
			printf("\n %d, %d, %d",num2,num3,num1);
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
