//Manuel Alejandro Sahagun Mendoza   349857
//Programa que sirva para calcular la formula general
//16 sept 2016
//SMMA_C10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	float va,vb,vc,irt,sr,ixp,ixs;
	printf("Dame la variable |a|: ");
	scanf("%f",&va);
	printf("Dame la variable |b|: ");
	scanf("%f",&vb);
	printf("Dame la variable |c|: ");
	scanf("%f",&vc);
	irt = pow(vb,2) - 4 * va * vc; //Dentro de la raiz
	sr = sqrt(irt);                //Resolucion de raiz
	ixp = (-vb + sr) / (2 * va);   //Raiz con signo positivo
	ixs = (-vb - sr) / (2 * va);   //Raiz con signo negativo
	printf("\n Resultado con raiz positivo: %.2f",ixp);
	printf("\n Resultado con raiz negativo: %.2f",ixs);
	printf("\n");
	system("pause");
	return 0;
}
