# C Completo

## Tipos de Dados

Os tipos de dados na linguagem de programação C possuem modificadores de acesso contendo pre-fixos como "short", "long", etc.

## Identificadores

Os nomes de variáveis e funções em C são precedidos por identificadores. Assim como em Java e em outras linguagens de mais alto-nível, eles não podem conter caracteres especiais ou iniciar com números.

Além disso, os identificadores devem ter os primeiros 6 dígitos sendo os **significativos**, tendo em vista que serão eles a serem reconhecidos durante o processo de linkedição. 
Quando o identificador não é utilizado para linkedição, seus primeiros 31 caracteres serão considerados os significativos.

## Variáveis

Uma variável é uma posição nomeada de memória, utilizada pelo programa para guardar um valor que poderá ou não ser modificado ao longo da execução. Além disso, na linguagem C, as variáveis devem ser declaradas no início da função.

As variáveis em C podem ser declaradas em três locais distintos: 

### variáveis locais

São declaradas dentro de uma função, podendo apenas ser utilizadas por comandos que estão dentro dos blocos de código no qual são utilizadas. 
Elas só existem quando o bloco de código onde foram declaradas estiver em execução, sendo destruídas na saída.

```c
void func_1 (void) {
    int number = 10;
    return number;
}

void func_2 (void) {
    int number = 12;

    if (number >= 20) {
        printf("Número %d é maior ou igual a 20", number);
    }
    else {
        printf("Número %d é inferior a 20", number);
    }
}

```

A principal vantagem em alocar uma variável local dentro de um bloco ou de uma função, deve-se ao fato de que a memória para ela será alocada pelo compilador somente se necessário.

### variáveis globais

São reconhecidas pelo programa inteiro, não apenas dentro do bloco de código em que foram declaradas. Além disso, elas guardam o valor aos quais são atribuidas ao longo de toda a execução. 
Embora estas podem ser declaradas em qualquer lugar do programa, é considerado uma boa prática declará-las no início do mesmo. 

```c
#include <stdio.h>

int counter;

void func_1 (void) {
    for (counter = 1; counter <= 10; counter++) {
        printf("d%\n", counter);
    }
    func_2();
}

void func_2 (void) {
    sum = counter + 10;

    printf("O valor final foi: d%", sum);   // retornará 20
}

```


