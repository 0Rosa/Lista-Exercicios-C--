#include <stdio.h>
#include <stdlib.h>

int i, n, soma;
bool ePerfeito = false;

int verificaNumPerfeito(int n) {

    for(i = 1; i <= n/2; i++) {
        if(n % i == 0)
            soma += i;
    }
    if(soma == n) {
        return ePerfeito = true;
	}
    else {
        return ePerfeito = false;
	}
}

int main() {
    int n;

    printf("----- Checar Numero Perfeito -----\n");
    printf(" Digite um numero para verificar se o mesmo e perfeito ou nao: ");
    scanf("%i",&n);

    verificaNumPerfeito(n);
    
    if (ePerfeito == true) {
    	printf("O numero %i E perfeito.\n", n);
	}
	else {
		printf("O numero %i NAO E perfeito.\n", n);
	}

	system("pause");
    return 0;
}