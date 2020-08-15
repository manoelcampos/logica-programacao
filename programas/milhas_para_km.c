#include <stdio.h>


/**
 * Programa que converte um valor em milhas para KM.
 * O código está separado nas três partes básicas de um algoritmo: 
 * entrada, processamento e saída.
 * 
 * Leia os comentários no código para mais detalhes.
*/
int main(){
    //Entrada de dados-----------------------------------
    float milhas; 
    /*Apesar do printf ser um comando de saída, e esta
    parte do código ser referente à entrada de dados,
    precisamos usar o printf apenas para informar
    ao usuário que dado ele precisa entrar (digitar).
    */
    printf("Digite a quantidade de milhas: ");
    /*
    O scanf é comando de entrada.

    Para cada variável que for identificada como de entrada,
    deve-se utilizar um comando de entrada para obter tal dado.
    Neste caso temos apenas um dado de entrada que é o total
    de milhas. 
    O total de dados de entrada pode variar e depende de cada problema.
    */
    scanf("%f", &milhas);
    //--------------------------------------------------

    //Processamento-------------------------------------
    /*
    Na parte de processamento, nunca deve-se usar um comando 
    de entrada como o scanf.
    Se um scanf for utilizado, o programa passa a solicitar 
    ao usuário um dado que o programa deveria encontrar
    (por meio de cálculos, por exemplo).
    */
    float km;
    km = milhas / 0.6;
    //---------------------------------------------------

    //Saída de dados-------------------------------------
    /*
    O printf é comando de saída.
    Podemos imprimir vários dados de saída.
    No caso deste exemplo, a única saída é o total em KM,
    que utilizamos uma variável para armazenar tal valor e 
    posteriormente imprimir.
    Assim como podemos ter vários dados de entrada, podemos
    ter vários de saída.

    Pode-se colocar % em qualquer lugar dentro das aspas
    para imprimir o conteúdo de uma variável.
    Como regra, a quantidade de % deve ser igual a quantidade
    de variáveis fora das aspas.
    O 1º % é substituído pelo conteúdo da 1ª variável,
    e assim por diante.
    */
    printf("%.2f milhas é igual a %.2f KM", milhas, km);
    
    return 0;
}
