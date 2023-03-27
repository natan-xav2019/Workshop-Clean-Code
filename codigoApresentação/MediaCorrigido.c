#include <stdio.h>

/* 2. Entrar com 3 notas de um aluno e informar a sua situacao
(APROVADO caso media aritmetica >=7 e REPROVADO caso contrario). */

const int QUANTIDADE_NOTAS = 3;
const int MEDIA_INSTITUICAO = 7;

bool existeErroNota(float nota) {
	if(!(nota >= 0  && nota <= 10)) {
		return true;
	}
	else {
		return false;		
	}
}

void entradaNotas(float notas[]){
	int indice;
	
	for(indice = 0; indice < QUANTIDADE_NOTAS; indice++ ) {
		do {
			printf("\n Nota%i: ",indice + 1);
			scanf("%f",&notas[indice]);
			
			if(existeErroNota(notas[indice])) {
				printf("Digite numeros entre de 0 a 10!!!");
			}
		}while(existeErroNota(notas[indice]));
	}
}

void apresentarResultados(float notas[],float media) {
	int indice;
	
	for(indice = 0; indice < QUANTIDADE_NOTAS; indice++ ) {
		printf("\n Nota%i: %.2f",indice + 1,notas[indice]);
	}
	
	if (media >= MEDIA_INSTITUICAO)
		printf("\n APROVADO com media %.2f\n", media);
	else
		printf("\n REPROVADO com media %.2f\n", media);
}

float somaNotasTotal(float notas[]){
	float somaTotal = 0;
	int indice;
	for(indice = 0; indice < QUANTIDADE_NOTAS; indice++ ) {
		somaTotal += notas[indice];
	}
	
	return somaTotal;
}

float calculoMedia(float notas[]) {
	return somaNotasTotal(notas) / QUANTIDADE_NOTAS;
}

main()
{
	float notas[QUANTIDADE_NOTAS], media;
	
	entradaNotas(notas);
	
	media = calculoMedia(notas);
	
	apresentarResultados(notas, media);
}
