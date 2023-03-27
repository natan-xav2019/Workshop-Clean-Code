#include <stdio.h>
#include <stdbool.h>

	typedef struct{
		float numero1;		
		float numero2;
		float resultado[4]
	} Aritimeticas;

Aritimeticas aritimetica;

void setNumero1e2(float novoNumero1,float novoNumero2) {
    aritimetica.numero1 = novoNumero1;
    aritimetica.numero2 = novoNumero2;
    }

float getNumero1() {
	return aritimetica.numero1;
}

float getNumero2() {
	return aritimetica.numero2;
}

float contas() {
	aritimetica.resultado[0] = getNumero1() + getNumero2();
	aritimetica.resultado[1] = getNumero1() - getNumero2();
	aritimetica.resultado[2] = getNumero1() * getNumero2();
	if(verficarDivisao())
		aritimetica.resultado[3] = getNumero1() / getNumero2();	
}

void apresentasao(){
	printf("A soma de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),aritimetica.resultado[0]);
	printf("A subtracao de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),aritimetica.resultado[1]);
	printf("A multiplicasao de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),aritimetica.resultado[2]);
	if(verficarDivisao())
		printf("A divisao de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),aritimetica.resultado[3]);
	else
		printf("nao pode fazer divisao por 0.");
}

bool verficarDivisao() {
	if(getNumero2())
		return true;
	else {
		return false;
	}	
}
void main() {
	
	setNumero1(4,7);
	contas();
	apresentasao();
	
}
