#include <stdio.h>
#include <conio.h>
#include <math.h>

int nPrimo(int numero) {
    int i=0;
    int p=1;

    for (i=2;i<numero;i++) {
        if (numero%i==0) {
            p=0;
        }
    }
    return p;
}

int main() {
    int num1,res;
    printf("----- Checar Numero Primo -----\n");
    printf(" Digite um numero: ");
    scanf("%d",&num1);

    res = nPrimo(num1);

    if(res == 1) {
        printf("%i E um numero primo.\n", num1);
    }
    else {
        printf("%i NAO E um numero primo.\n");
    }

	system("pause");
    return 0;
}