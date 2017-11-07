#include <stdio.h>

/**
 * Função main, necessária para permitir 
 * que um algoritmo em C seja compilado 
 * para um programa executável.
*/
int main()
{
    /*
    Qualquer comando ou estrutua (por exemplo, um if ou for), 
    incluído dentro das chaves, precisa estar mais 
    à direta das chaves.

    Por exemplo, a declaração de variáveis abaixo e qualquer 
    outro comando que não inclua outras chaves, 
    deve estar alinhados na mesma coluna.
    */

    float altura;
    printf("Digite sua altura (metros): ");
    scanf("%f", &altura);
    printf("Sua altura é %.2f\n", altura);

    return 0;
}