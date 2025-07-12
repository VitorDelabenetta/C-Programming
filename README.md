## Programação em C

> Autor: Dennis Ritchie (1972)

C is a general-purpose language.

<br>

### Rodando no Terminal

Para rodar um código escrito em C pelo terminal, precisaremos:

> 1. Escrever o código (uso o Neovim)
> 2. Entrar no terminal (uso o Kitty), e compilar o arquivo (uso o gcc)
```bash
gcc [nome-arquivo].c -o [saída]
# exemplo: gcc main.c -o main
```
> 3. Após compilar, executar o output
```bash
./main
```

<br>

### Sintaxe da Linguagem - Básico

Na linguagem C existem diferentes tipos de variáveis, das quais temos:

> int (2-4 bytes): números inteiros positivos e negativos
> float (4 bytes): números com ponto flutuante - 6 a 7 - positivos e negativos
> double (8 bytes): igual ao float, mas possui mais casas decimais - 15 casas
> char (1 byte): caracteres individuais
> bool (1 byte): resultado booleano (true or false)

Ainda dentro do C, nós temos o prefixo <i>short</i>, como <i>short int</i> para variáveis menores.\
Para fazer a desclaração de uma variável, precisaremos de seu tipo, nome e valor:

```c
int number = 10;    // define um número com valor 10
char string[] = "Hay!";    // define uma variável string de texto
```

<br>

*Format Specifiers*

Os especificadores são caracteres especiais que indicam como os dados devem ser formatados ao serem exibidos com funções como <i>printf</i> e <i>scanf</i>. Eles indicam para o compilador qual tipo de dado a variável está armazenando.

```c
int number = 10;
printf(number);    // não retornará nada

number = 15;
char letter = "A";
printf("O número é: %d \nA letra é: %c", number, letter);    // retorna o número e letra
```

> %d: inteiro da base decimal, com sinal
> %u: inteiro sem sinal
> %f: ponto flutuante (float)
> %lf: ponto flutuante (double)
> %.4f: ponto flutuante, com precisão de 4 casas
> %c: caractere
> %s: string
> %p: endereço de memória de um ponteiro
> %e: notação científica

<br>

*Type Conversion*

A conversão de valores de um <i>data type</i> para outro pode ser feita de forma implícita ou explícita.\
No caso da linguagem C, não é tão interessante trabalharmos com a conversão implícita, para evitar problemas como este exemplo:

```c
float division = 5 / 2;
printf("%f", division);    // o output será: 2.000000
```

Para evitarmos essas situações, devemos realizar a conversão explícita. Nesse caso, o <i>casting</i> é feito da seguinte forma:

```c
int dividend = 5;
int divisor = 2;
float quotient = (float) dividend / divisor;
printf("%.1f", quotient);    // output será: 2.5
```

<br>

*Constants*

Podemos ainda declarar constantes em C, utilizando da inicial <i>const</i>, como abaixo:
```c
const int MINUTES_PER_HOUR = 60;
```

Obs.: importante ressaltar que é considerado uma boa prática usar constantes em uppercase, como no exemplo acima.

<br>

*Operators*

Os operadores em C são semelhantes a outras linguagens de programação (poderíamos dizer que se trata do caminho inverso, na realidade). Dos gerais, teremos:

> Aritméticos: + (soma), - (subtração), * (multiplicação), / (divisão), % (módulo), ++ (incrementar), -- (decrescer).
>
> Atribuição: = (igual), += (soma o resultado com a variável - vale para as outras expressões)
>
> Lógicos: && (e), || (ou), ! (não)
>
> Comparativos (retorna um bool*): == (igual, dois '='), != (diferente, um '!' e '='), > (maior que), < (menor que), >= (maior ou igual), <= (menor ou igual)


*como exemplo de comparativo, temos:
```c
<stdbool.h>

int x = 10;
int y = 9;
bool result = x > y;

printf("%d", result);    // retorna 1 (true)
```

Obs.: importante ressaltar que o C não tem especificador para booleano, então retornará <i>true</i> como 1 e <i>false</i> como 0.

<br>

### Condicionais (if statements)

<!-- See https://www.w3schools.com/c/c_conditions.php -->

