#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

string operacao = "";

float media(float n1, float n2, float n3, char op) {
    if (op == 'A') {
    	operacao = "Aritimetica";
        return (n1 + n2 + n3) / 3;
    } 
    else if (op == 'P') {
    	operacao = "Ponderada";
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}

int main() {
    float nota1, nota2, nota3, res;
    char op;

    printf("Digite [A] para Media Aritimetica ou [P] para Media ponderada: ");
    scanf("%c", &op);
    printf("Digite as notas(Nota1 Nota2 Nota3): \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    res = media(nota1, nota2, nota3, op);

    printf("Media %s = %f", operacao.c_str(), res);

	system("pause");
    return 0;
}