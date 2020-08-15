#include <stdio.h>

/**
 * Calcula a área de um triângulo isósceles (que tem 2 lados iguais).
*/
int main(){
	//Entrada-------------------------------
	float base;
	printf("Digite a base: ");
	scanf("%f", &base);

	float altura;
	printf("Digite a altura: ");
	scanf("%f", &altura);
	//--------------------------------------
	
	//Processamento--------------------------
	float area = base * altura / 2;
	//---------------------------------------
	
	//Saída----------------------------------
	printf("A área do triângulo é %f", area);
	
	return 0;
}
