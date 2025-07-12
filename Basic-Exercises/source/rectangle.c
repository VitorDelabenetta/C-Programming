#include <stdio.h>

int main() {
  printf("Cálculo da área de um retângulo em \"C\"\n");

  int comprimento = 5;
  int largura = 3;
  int area = comprimento * largura;

  printf("\nComprimento: %d \nLargura: %d", comprimento, largura);
  printf("\nResultado: %d", area);
  //printf("\nVar size: %zu", sizeof(area));

  return 0;
}
