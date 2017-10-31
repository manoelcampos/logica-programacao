#include <stdio.h>

/**
 * Programa para solicitar o nome e sobrenome de uma pessoa e exibir uma mensagem de boas vindas.
 */
int main(){
	/*Declaração de variáveis: 
	 * - indicar que deseja-se usar um espaço
	 *   de memória RAM.
	 * - as variáveis devem ser declaradas antes do local onde 
	 *   serão usadas.
	 * 
	 * A declaração de variáveis segue a seguinte estrutura: */
	//tipo nome_da_variavel;
	
	/* O tipo char é utilizado para declarar variáveis que
	 * armazenarão texto.
	 * O valor entre colchetes, para variáveis do tipo char,
	 * indica quantos caracteres a variável pode armazenar
	 * no máximo. 
	 * No caso da variável nome, neste exemplo ela pode armazenar 
	 * no máximo 50 caracteres. Então a variável representa
	 * uma sequência de caracteres, o que é chamado de String.
	 * */
    char nome[50]; 
	
	/*
	 * Para imprimir uma mensagem fixa (pré-definida)
	 * utilizando o printf, basta colocar a mensagem
	 * entre aspas duplas.
	 * */
    printf("Digite seu primeiro nome: ");  
    
    /* O comando scanf captura dados digitados
     * pelo usuário no teclado e armazena dentro
     * de uma variável.
     * 
     * Neste exemplo, o conteúdo será armazenado
     * na variável chamada nome.
     * 
     * Ao usar o scanf precisamos indicar qual o tipo 
     * da variável, para que o comando saiba o que 
     * pode ser armazenado dentro dela.
     * No caso da variável nome, ela é uma sequência de
     * caracteres, o que chamamos de String.
     * Logo, precisamos usar "%s" para indicar isso ao scanf.
     * A regra: o caractere % seguido de uma letra que representa
     * o tipo da variável.
     * Em seguida teremos uma vírgula e o nome da variável
     * onde o conteúdo digitado será armazenado.
     */
    scanf("%s", nome); 
   
    
    /* Em c, variáveis podem ser declaradas em qualquer lugar,
     * desde que antes do local onde elas forem ser usadas 
     * pela primeira vez.
     * Isto quer dizer que não precisamos declarar 
     * todas as variáveis num lugar só.
     * Uma boa prática é exatamente declarar
     * cada variável próxima do lugar onde
     * ela será usada.
     */
    
    char sobrenome[100];
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    
    
    /* Este printf vai imprimir na tela o conteúdo da variável chamada
     * nome.
     * O %s indica que desejamos imprimir o conteúdo de uma variável
     * String na posição onde o %s está.
     * Precisamos indicar fora das aspas qual a variável que
     * desejamos que seja impressa.
     * Se a variável for colocada dentro das pastas, o programa
     * vai entender que desejamos imprimir a palavra que corresponde
     * com o nome da variável e não o conteúdo da variável.
     * 
     * O comando \n significa "new line" e é
     * usado para pular para a próxima linha
     * antes de imprimir a próxima mensagem na tela.
     * Pode-se utilizar quantos \n desejar, em qualquer
     * posição dentro das aspas.
     */
    printf("\nBem vindo %s %s\n", nome, sobrenome);    
    printf("Obrigado pro se cadastrar em nosso aplicativo.");
}
