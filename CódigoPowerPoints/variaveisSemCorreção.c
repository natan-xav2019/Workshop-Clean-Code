#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float proceso(float x, float y, float z) {
	y = y/100;
	return x+(x*y)-z;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, p1, r;
	
	printf("Programa para calcular o lucro\n");
	
	printf("Digite o valor ganho\n");
	scanf("%f",&n1);
	printf("Digite o percentual do lucro\n");
	scanf("%f",&p1);
	printf("Digite o valor perdido\n");
	scanf("%f",&n2);
	
	r = proceso(n1,p1,n2);
	
	if(r < 0)
		printf("O projuizo e de R$%.2f",fabs(r));
	else
		if(r > 0)
			printf("O lucro e de R$%.2f",r);
		else
			if(r == 0)
				printf("Nao ganhou nem perdeu dinheiro");
	
	
	return 0;
}
