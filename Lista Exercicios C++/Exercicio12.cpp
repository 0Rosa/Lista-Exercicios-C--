#include<stdio.h>
#include<stdlib.h>

int jogo() {
	int h1,m1,h2,m2,t;
 
	printf("Digite a hora os minutos do inicio do jogo. (Hora Minutos)\n");
	scanf("%d%d",&h1,&m1);
	 
	printf("Digite a hora e os minutos do fim do jogo. (Hora Minutos)\n");
	scanf("%d%d",&h2,&m2);
	
	if (h1==h2 && m1==m2) {
		t=1140;
	}
	else {
		if(m1>m2) {
			if (h1>h2) {
				t=(((h2+24)-h1)*60)+((m2+60)-m1);
			}
			else {
				t=((h2-h1)*60)+((m2+60)-m1);
			}
		}
		else {
			if(h1>h2) {
				t=(((h2+24)-h1)*60)+(m2-m1);
			}
			else {
				t=((h2-h1)*60)+(m2-m1);
			}
		}
	}
	return t;
}

int main() {
	int partida;
	
	partida=jogo();
	
	printf("Tempo de jogo foi de %d minutos.\n",partida);
	
	system("pause");
	return 0;
}