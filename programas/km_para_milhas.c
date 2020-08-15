#include <stdio.h>

int main(){
	/* float é tipo mais básico para representar
	 * números reais, ou seja, números com casas decimais.
	 * Em C, todos os tipos da linguagem são todos em 
	 * minúsculas.*/
	float km; 
	
	//Crie um programa para converter quilômetros para milhas (multiplica por 0.6)
	printf("Digite a quantidade de quilômetros: ");
	
	/*
	 * Para variáveis string (ou seja, char com mais
	 * de 1 caractere), não se deve utilizar & antes
	 * do nome da variável no scanf.
	 * Porém, para outras variáveis convencionais
	 * é obrigatório o uso do &.
	 */
	scanf("%f", &km);
	
	//printf("O valor em milhas é %f", km * 0.6);
	
	float milhas;
	
	milhas = km * 0.6;
	printf("O valor em milhas é %.2f", milhas);

	return 0;
}
