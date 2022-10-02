#include <stdio.h>
#include <stdlib.h>

int n;
bool positivo = false;

int negativoPositivo(int n) {

    if(n > 0) {
        return positivo = true;
	}
    else if(n < 0) {
        return positivo = false;
	}
}

int main() {

    printf("----- Checar Numero Positivo ou Negativo -----\n");
    printf(" Digite um numero: ");
    scanf("%i",&n);

    negativoPositivo(n);
    
    if (n == 0) {
		printf("O numero %i e NEUTRO.\n", n);
	}
    else if (positivo == true) {
    	printf("O numero %i e POSITIVO.\n", n);
	}
	else if(positivo == false) {
		printf("O numero %i e NEGATIVO.\n", n);
	}

	system("pause");
    return 0;
}