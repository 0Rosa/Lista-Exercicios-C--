#include <stdlib.h>
#include <stdio.h>

int vida, a, m, d;

int vidaDias (int a, int m, int d) {
	int vida = (a * 365) + (m * 30) + d ;
	
	return vida;
}

int main() {
	printf("----- Ano/Mes/Dia para Dias -----\n");
    printf(" Digite o Ano Mes Dia de vida da pessoa. ");
	scanf("%i %i %i", &a, &m, &d);
   	
   	vidaDias(a, m, d);
   	
   	printf(" A pessoa ja viveu %i dias.\n");
   	
   	system("pause");
   	return 0;
}