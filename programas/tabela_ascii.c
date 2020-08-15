#include <stdio.h>

int main(){
    for(int codigo = 32; codigo <= 126; codigo++)
    {
      char letra = codigo;
      printf("Letra %c Código %i\n", letra, codigo);
    }
    return 0;
}