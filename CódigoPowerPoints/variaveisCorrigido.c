#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float calculoLucro(float ganho, float percentualLucro, float Prejuizo) {
	percentualLucro = percentualLucro/100;
	
	return ganho + (ganho * percentualLucro) - Prejuizo;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float ganho, prejuizo, PercentualLucro, lucro;
	
	printf("Programa para calcular o lucro\n");
	
	printf("Digite o valor ganho\n");
	scanf("%f",&ganho);
	printf("Digite o percentual do lucro\n");
	scanf("%f",&PercentualLucro);
	printf("Digite o valor perdido\n");
	scanf("%f",&prejuizo);
	
	lucro = calculoLucro( ganho, PercentualLucro, prejuizo);
	
	if(lucro < 0)
		printf("O projuizo e de R$%.2f",fabs(lucro));
	else
		if(lucro > 0)
			printf("O lucro e de R$%.2f",lucro);
		else
			if(lucro == 0)
				printf("Nao ganhou nem perdeu dinheiro");
	
	
	return 0;
}
