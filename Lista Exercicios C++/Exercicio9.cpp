#include <stdio.h>
#include <stdlib.h>

int n;
bool par = false;

int imparPar(int n) {

    if(n % 2 == 0) {
        return par = true;
	}
    else {
        return par = false;
	}
}

int main() {

    printf("----- Checar Numero Par ou Impar -----\n");
    printf(" Digite um numero: ");
    scanf("%i",&n);

    imparPar(n);
    
    if (n == 0) {
		printf("O numero %i e NEUTRO.\n", n);
	}
    else if (par == true) {
    	printf("O numero %i e PAR.\n", n);
	}
	else if(par == false) {
		printf("O numero %i e Impar.\n", n);
	}

	system("pause");
    return 0;
}