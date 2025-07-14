# Programação em C
![Arch](https://img.shields.io/badge/Arch%20Linux-1793D1?logo=arch-linux&logoColor=fff&style=for-the-badge)
![Neovim](https://img.shields.io/badge/NeoVim-%2357A143.svg?&style=for-the-badge&logo=neovim&logoColor=white)
![Git](https://img.shields.io/badge/GIT-E44C30?style=for-the-badge&logo=git&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Markdown](https://img.shields.io/badge/Markdown-000?style=for-the-badge&logo=markdown)

![W3Schools](https://img.shields.io/badge/W3Schools-04AA6D?style=for-the-badge&logo=W3Schools&logoColor=white)
![YouTube](https://img.shields.io/badge/YouTube-%23FF0000.svg?style=for-the-badge&logo=YouTube&logoColor=white)

<br>

> Autor do C: Dennis Ritchie (1972)

C is a general-purpose language

<br>

## Rodando no Terminal

Para rodar um código escrito em C pelo terminal, precisaremos:

1. Escrever o código (uso o Neovim)
2. Entrar no terminal (uso o Kitty), e compilar o arquivo (uso o gcc)
```bash
gcc [nome-arquivo].c -o [saída]
# exemplo: gcc main.c -o main
```
3. Após compilar, executar o output
```bash
./main
# executando o arquivo 'main'
```

<br>

## Sintaxe da Linguagem - Básico

Na linguagem C existem diferentes tipos de variáveis, das quais temos:

> int (2-4 bytes): números inteiros positivos e negativos
> 
> float (4 bytes): números com ponto flutuante - 6 a 7 - positivos e negativos
> 
> double (8 bytes): igual ao float, mas possui mais casas decimais - 15 casas
> 
> char (1 byte): caracteres individuais
> 
> bool (1 byte): resultado booleano (true or false)

<br>

Ainda dentro do C, nós temos o prefixo *short*, como *short int* para variáveis menores.\
Para fazer a desclaração de uma variável, precisaremos de seu tipo, nome e valor:

```c
int number = 10;    // define um número com valor 10
char string[] = "Hay!";    // define uma variável string de texto
```

<br>

### Format Specifiers

Os especificadores são caracteres especiais que indicam como os dados devem ser formatados ao serem exibidos com funções como *printf* e *scanf*. Eles indicam para o compilador qual tipo de dado a variável está armazenando.

```c
int number = 10;
printf(number);    // não retornará nada

number = 15;
char letter = "A";
printf("O número é: %d \nA letra é: %c", number, letter);    // retorna o número e letra
```

> %d: inteiro da base decimal, com sinal
> 
> %u: inteiro sem sinal
> 
> %f: ponto flutuante (float)
> 
> %lf: ponto flutuante (double)
> 
> %.4f: ponto flutuante, com precisão de 4 casas
> 
> %c: caractere
> 
> %s: string
> 
> %p: endereço de memória de um ponteiro
> 
> %e: notação científica

<br>

### Type Conversion

A conversão de valores de um *data type* para outro pode ser feita de forma implícita ou explícita.\
No caso da linguagem C, não é tão interessante trabalharmos com a conversão implícita, para evitar problemas como este exemplo:

```c
float division = 5 / 2;
printf("%f", division);    // o output será: 2.000000
```

Para evitarmos essas situações, devemos realizar a conversão explícita. Nesse caso, o *casting* é feito da seguinte forma:

```c
int dividend = 5;
int divisor = 2;
float quotient = (float) dividend / divisor;
printf("%.1f", quotient);    // output será: 2.5
```

<br>

### Constants

Podemos ainda declarar constantes em C, utilizando da inicial *const*, como abaixo:
```c
const int MINUTES_PER_HOUR = 60;
```

Obs.: importante ressaltar que é considerado uma boa prática usar constantes em uppercase, como no exemplo acima.

<br>

### Operators

Os operadores em C são semelhantes a outras linguagens de programação (poderíamos dizer que se trata do caminho inverso, na realidade). Dos gerais, teremos:

> Aritméticos: + (soma), - (subtração), * (multiplicação), / (divisão), % (módulo), ++ (incrementar), -- (decrescer).
>
> Atribuição: = (igual), += (soma o resultado com a variável - vale para as outras expressões)
>
> Lógicos: && (e), || (ou), ! (não)
>
> Comparativos (retorna um bool¹): == (igual, dois '='), != (diferente, um '!' e '='), > (maior que), < (menor que), >= (maior ou igual), <= (menor ou igual)

<br>

¹como exemplo de comparativo, temos:
```c
<stdbool.h>

int x = 10;
int y = 9;
bool result = x > y;

printf("%d", result);    // retorna 1 (true)
```

Obs.: importante ressaltar que o C não tem especificador para booleano, então retornará *true* como 1 e *false* como 0.

<br>

### Condicionais

Dentro da linguagem C, nós temos os chamados *condicionais*, que se referem a formas de executar blocos de códigos a partir de determinadas condições que são atendidas via comparações. 
Um exemplo seria dizer para o computador: 
> "mostre isso na tela se o usuário colocar um valor menor ou igual a x"

<br>

#### If...Else Statements

Uma das formas como fazemos isso é utilizando declaradores como *if* ou *else*. Caso a condição seja verdadeira¹, o sistema retorna aquilo que etiver dentro do if, senão retorna o conteúdo do else.

> ¹ lembrando que em C não temos *true* ou *false* por padrão, então estaremos retornando 1 (verdadeiro) ou 0 (falso).

```c
int age = 17;
if (age < 18) {
    printf("Você ainda não é de maior");
}
else {
    printf("Parabéns, você já é de maior");
}
```

Outra forma de escrevermos condicionais de forma simplificada é utilizando de um *operador ternário*. O operador ternário utiliza da seguinte sintaxe:

> (condicional) ? função_se_verdadeiro : função_se_falso;

Utilizando desta lógica para o mesmo trecho de código, teremos:

```c
int age = 17;
(age < 18) ? printf("Você ainda não é de maior") : printf("Parabéns, você já é de maior");
```

<br>

#### Switch Case

Outra forma de fazermos nossa condicional é através do *switch*, que pode ser utilizado quando tivermos valores pré-definidos para os inputs da função. Sua sintaxe é bem simples:

```c
switch (expressão) {
    caso 1:
        // bloco de código
        break;
    caso 2:
        // bloco de código
        break;
    default:
        // bloco de código caso os demais não forem atendidos
}
```

Uma outra utilidade para o switch é com os *loops*. Um loop de um programa ocorrerá enquanto a condição inicial não for satisfeita (ou seja, enquanto a condicional retornar **true**). Um exemplo seria:

```c
/* Contador de 0 a 5 */
int i = 0;

while (i < 5) {
    printf("%d\n", i);
    i++;    // soma 1 ao valor atual de i
}

/* Contagem Regressiva */
int countdown = 5;

while (coutdown > 0) {
    printf("%d\n", countdown);
    countdown--;
}
printf("Feliz ano novo!\n");
```

<br>

### For Loop

<!-- See https://www.w3schools.com/c/c_for_loop.php -->

Continuidade...
