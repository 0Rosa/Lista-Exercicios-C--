#include <stdio.h>
#include <stdlib.h>

int segundos, h, m, s, resto;

int main() {

    printf("Digite o tempo de duracao da fabrica segundos: ");
    scanf("%d", &segundos);
    
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;

    printf("O tempo de duracao da fabrica em Horas:Minutos:Segundos foi: %d:%d:%d\n", h, m, s);

	system("pause");
    return 0;
}