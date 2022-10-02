#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int a, b, c;
float delta, x1, x2;

int main () {
	printf("----- Calculadora de Formula de Bhaskara -----\n\n");
	
	printf("Digite as notas(a b c): ");
    scanf("%i %i %i", &a, &b, &c);
    
    delta = (pow(b,2) - (4 * a * c));
    
    x1 = -b + sqrt(delta);
	x2 = +b + sqrt(delta);
	
	if (x1 > 0.0 && x2 > 0.0) {
		printf(" Delta = %.1f\n X1 = %.1f\n X2 = %.1f\n", delta, x1, x2);
	}
	else if (delta == 0.0) {
		printf(" Delta = %.1f\n X = %.1f\n", delta, x1);
	}
	else {
		printf(" Delta = %.1f\n", delta);
	}
	
	system("pause");
	return 0;
}