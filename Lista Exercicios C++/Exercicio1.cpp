#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float raio, volume;

int main () {
	printf("----- Calcular volume de uma Esfera -----\n\n");
	printf("Digite o valor do RAIO da Esfera: ");
	scanf("%f", &raio);
	
	volume = (4 * 3.14 * pow(raio,3)) / 3;
	
	printf("O volume da sua Esfera e: %.2f", volume);
	
	system("pause");
	return 0;
}