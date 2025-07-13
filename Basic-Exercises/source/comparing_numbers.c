#include <stdio.h>

int main(void) {

  int number = 16;

  // Verifica se é positivo ou negativo 

  if (number > 0) {
    printf("Número %d é positivo\n", number);
  }
  else if (number < 0) {
    printf("Número %d é negativo\n", number);
  }
  else {
    printf("O número é igual a 0\n");
  }

  // Verifica se o número é par (usando módulo)
  
  /*
   * Testando o cálculo de módulo
    * int modulo = number % 2;
    * printf("%d\n", modulo);
  */

  if (number % 2 && number != 0) {
    printf("E %d é impar", number);    // o impar primeiro, pois o C lê como falso - devido ao número par não deixar módulo, ou seja, a condição é 0 = false
  }
  else if (number == 0) {
    printf("A \"paridade do zero\" pode ser considerada");
  }
  else {
    printf("E %d é par", number);
  }

  return 0;
}
