#include <stdio.h>

int main (void) {

  int valor_1 = 2;
  int valor_2 = 4;

  if (valor_1 >= valor_2) {
    printf("Condição é verdadeira\n");
  }
  else {
    printf("Condição é falsa\n");
  }

  /* 
   * Podemos realizar a mesma expressão de forma simplificada como a fórmula:
   * variável
   * (comparativo) ? função_se_verdade : função_se_falso;
  */
  
  (valor_1 >= valor_2) ? printf("\nCondição continua verdadeira") : printf("\nCondição continua falsa");
  
  return 0;
}
