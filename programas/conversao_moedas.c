#include <stdio.h>

int main(){
    float reais, dolares, cotacao;
    int opcao;

    printf("1 - Converter de reais para dolares\n");
    printf("2 - Converter de dólares para reais\n");
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);

    printf("Digite a cotação do dolar: ");
    scanf("%f", &cotacao);

    if(opcao == 1){
        printf("Digite o valor em reais: ");
        scanf("%f", &reais);
        /*Para converter de uma moeda menor (como o real)
        para uma moeda maior (como o dolar), divide-se
        o valor da menor pela cotação da maior.*/
        float dolares = reais / cotacao;
        printf("%.2f Reais equivale a %.2f Dolares\n", reais, dolares);
    } else {
        printf("Digite o valor em dolares: ");
        scanf("%f", &dolares);

        /*Para converter de uma moeda maior (como o dolar)
        para uma moeda menor (como o real), multiplica-se
        o valor da maior pela cotação dela.*/
        float reais = dolares * cotacao;
        printf("%.2f Dólares equivale a %.2f Reais\n", dolares, reais);
    }

    return 0;
}