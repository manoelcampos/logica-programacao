#include <stdio.h>

int main(){
    /*
    Quando estamos executando uma operação
    aritmética que acumula valores dentro de um laço de repetição, devemos seguir duas regras:
    1) declarar a variável que acumula os valores
       fora do laço de repetição
    2) inicializar tal variável com o elemento
       neutro da operação sendo feita.
       Se for uma soma ou subtração, 
       deve inicializar com zero.
       Se for multiplicação ou divisão, inicializa
       com 1.
    */
    int soma = 0;

    //for(int i = 1; i <= 100; i = i + 2)
    //for(int i = 1; i <= 100; i += 2)
    for(int i = 1; i <= 100; i++)
    {
        soma = i + soma;
        printf("i = %d - %d\n", i, soma);        
    }

    
}