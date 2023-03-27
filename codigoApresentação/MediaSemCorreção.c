/* 2. Entrar com 3 notas de um aluno e informar a sua situasao
(APROVADO caso media aritmetica >=7 e REPROVADO caso contrario). */
#include<stdio.h>
main()
{
	float N1,N2,N3,M; printf("\n Nota1: ");
	scanf("%f",&N1); printf("\n Nota2: ");
	scanf("%f",&N2); printf("\n Nota3: "); scanf("%f",&N3);
	M = (N1+N2+N3)/3; if (M >= 7)printf("\n APROVADO"); else printf("\n REPROVADO"); 	
}
