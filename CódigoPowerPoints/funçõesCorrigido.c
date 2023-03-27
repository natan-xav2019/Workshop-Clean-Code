#include <stdio.h>
#include <stdbool.h>

	typedef struct{
		float numero1;		
		float numero2;
	} Aritimeticas;

Aritimeticas aritimetica;

void setNumero1(float novoNumero) {
    aritimetica.numero1 = novoNumero;
    }
    
void setNumero2(float novoNumero) {
    aritimetica.numero2 = novoNumero;
}
    
float getNumero1() {
	return aritimetica.numero1;
}

float getNumero2() {
	return aritimetica.numero2;
}

float soma() {
	return getNumero1() + getNumero2();
}

float subtrair() {
	return getNumero1() - getNumero2();
}

float multiplicar() {
	return getNumero1() * getNumero2();
}

float dividir() {
	return getNumero1() / getNumero2();	
}

bool verficarDivisao() {
	if(getNumero2())
		return true;
	else {
		printf("nao pode fazer divisao por 0.");
		return false;
	}	
}

void apresentasao(){
	printf("A soma de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),soma());
	printf("A subtracao de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),subtrair());
	printf("A multiplicasao de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),multiplicar());
	if(verficarDivisao())
		printf("A divisao de %.2f e %.2f e de %.2f.\n",getNumero1(),getNumero2(),dividir());
}

void main() {
	
	setNumero1(4);
	setNumero2(7);
	apresentasao();
	
}
