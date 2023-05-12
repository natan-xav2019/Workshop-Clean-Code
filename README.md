# Workshop Clean Code

Workshop Clean Code feito na semana Rumo ao Sucesso da UniCarioca.

Esse Workshop se trata dos primeiros capítulos do livro do Código Limpo.

Aqui iremos postar os artefatos da apresentação e os códigos desenvolvidos para você tentar corrigir por conta propria a sua maneira.

Abaixo está o passo a passo usado na apresentação.

## codigo a se aplicar o Clean Code.
``` c
#include<stdio.h>
main() {
	float N1,N2,N3,M; printf("\n Nota1: ");
	scanf("%f",&N1); printf("\n Nota2: "); scanf("%f",&N2); printf("\n Nota3: "); scanf("%f",&N3);
	M = (N1+N2+N3)/3; if (M >= 7)printf("\n APROVADO"); else printf("\n REPROVADO"); 	
}
```
## lista de afazeres

1.	Dar espaçamento para o código.
	1. Isso vai facilitar a legibilidade do seu código.
``` c
#include<stdio.h>

main() {
	float N1,N2,N3,M;
	
	printf("\n Nota1: ");
	scanf("%f",&N1);
	
	printf("\n Nota2: "); 
	scanf("%f",&N2);
	
	printf("\n Nota3: "); 
	scanf("%f",&N3);
	
	M = (N1+N2+N3)/3;
	
	if (M >= 7)
		printf("\n APROVADO");
	else 
		printf("\n REPROVADO");
	
}
```
2.	Renomear variáveis.
	1. Não tenha medo de usar nomes grandes e descritivos para dizer o que aquela variavel ou função faz e para que serve.
``` c
#include<stdio.h>

main() {
	float nota1,nota2,nota3,media;
	
	printf("\n Nota1: ");
	scanf("%f",&nota1);
	
	printf("\n Nota2: "); 
	scanf("%f",&nota2);
	
	printf("\n Nota3: "); 
	scanf("%f",&nota2);
	
	media = (nota1+nota2+nota3)/3;
	
	if (media >= 7)
		printf("\n APROVADO");
	else 
		printf("\n REPROVADO");
			
}
```
3.	Dividir nosso programa em várias partes
	1. Dividindo nosso programa em programas menores fica mais facil dar manuntenção e expandi-lo.
``` c
#include <stdio.h>

const int QUANTIDADE_NOTAS = 3;
const int MEDIA_INSTITUICAO = 7;

void entradaNotas(float notas[]){
	int indice;
	
	for(indice = 0; indice < QUANTIDADE_NOTAS; indice++ ) {
		printf("\n Nota%i: ",indice + 1);
		scanf("%f",&notas[indice]);
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
```
4.	O tratamento de erro
	1.	Quanto mais tratar seus erros mais seu codigo se tornara robusto e a prova de falhas.
``` c
#include <stdio.h>

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
```
