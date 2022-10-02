#include <stdlib.h>
#include <stdio.h>

int main()
{
    float alt, altPeso=0.0;
    char sexo;

    printf("Digite a sua altura em metros. (Ex.: 1.75): ");
    scanf("%f",&alt);

    printf("Digite o seu sexo biologico. (M para Masculino e F para Feminino): ");
    fflush(stdin);
    scanf("%c",&sexo);

    if(sexo == 'M' || sexo == 'm') {
        altPeso+=((72.7*alt)-58);
        printf("O seu peso ideal e: %.3f\n", altPeso);
    }
    else {
        altPeso=((62.1*alt)-44.7);
        printf("O seu peso ideal e: %.3f\n", altPeso);
    }

    system("pause");
    return 0;
}