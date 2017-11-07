#include <stdio.h>

int main(){
    float peso, altura;
    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (metros): ");
    scanf("%f", &altura);

    float imc = peso / (altura*altura);

    printf("O IMC é %f\n", imc);

    if(imc < 16){
        printf("Você está com magreza grave\n");
    }
    else if (imc < 17) {
        printf("Você está com magreza moderada\n");
    }
    else if (imc < 18.5) {
        printf("Você está com magreza leve\n");
    }

    return 0;
}