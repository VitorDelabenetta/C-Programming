#include <stdio.h>

int main(void) {
  // Algoritmo que calcula a Sequência (incremental) a partir do input:
  
  int actual;

  printf("Digite um valor inteiro positivo: ");
  scanf("%d", &actual);   // pegar o primeiro valor da sequência
  printf("O número foi: %d\n", actual);

  /* Calcular o Fibonnacci */

  int startup = actual - 1; // verifica um número anterior ao valor, iniciando o cálculo
  int previous = startup;
  int next = previous + actual; 
  
  printf("\n1º: %d", next);

  int counter = 1;

  while (counter < 5) {
    counter++;

    /* re-define os valores dentro do loop */
    previous = actual; 
    actual = next;
    next = previous + actual;
    
    printf("\n%dº: %d", counter, next);
  }

  printf("\nEsses são os 5 números da Sequência de Fibonnacci");

  return 0;
}
