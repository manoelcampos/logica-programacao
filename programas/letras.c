#include <stdio.h>

int main(){
//for(inicialização; condição p/ executar;incremento)
/*
  Como podemos ler o laço for abaixo:
  - Inicia letra em A.
  - Enquanto letra for menor ou igual a z, executa
    os comandos e passa para a próxima letra
*/
    for(char letra = 'A'; letra <= 'z'; letra++)
    {
      int codigo = letra;
      printf("Letra %c Código %i\n", letra, codigo);
    }
    return 0;
}