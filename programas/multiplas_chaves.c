#include <stdio.h>

int main()
{
    char sexo;
    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);

    float gordura;
    printf("Digite seu percentual de gordura: ");
    scanf("%f", &gordura);

    // % é um caractere usado pra imprimir o conteúdo de uma varíavel.
    // Para de fato imprimir um caractere % pra o usuário, 
    // devemos incluir %% no printf. 
    printf("\nOlá %s. Você tem %.1f%% de gordura corporal.\n", nome, gordura);
    if(sexo == 'm' && gordura >= 25)
    {
        printf("Você está com obesidade.\n");
        printf("O percentual de gordura ideal para homens é abaixo de 25%%\n");
    }
    else if(sexo == 'f' && gordura >= 32)
    {
        printf("Você está com obesidade.\n");
        printf("O percentual de gordura ideal para homens é abaixo de 32%%\n");
    }

    return 0;
}