#include <stdio.h>

int main() {
  printf("Calcular o preço de um item em \"C\"\n");

  int itens = 2; 
  float item_cost = 3.89;
  float total_cost = itens * item_cost;
  char currency = '$';

  printf("\nO valor do item foi de: %c %.2f", currency, item_cost);
  printf("\nO total para %d itens foi de: %c %.2f", itens, currency, total_cost);
  
  return 0;
}
