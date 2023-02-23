Revisão sobre Algoritmos em C - Lista de Exercícios


1) Condições (if, switch..case):
a. Escreva um programa que recebe dois números como entrada e imprime o maior dos dois.
b. Escreva um programa que verifique se um número é par ou ímpar e imprima uma mensagem correspondente.
c. Escreva um programa que verifique se um ano digitado pelo usuário é bissexto ou não.

2) Laços de Repetição (for, while):
a. Escreva um programa que use um laço para imprimir os números de 1 a 10.
b. Escreva um programa que use um laço para encontrar o fatorial de um número digitado pelo usuário.
c. Escreva um programa que use um laço para imprimir a tabuada de um número digitado pelo usuário.

3) Arrays:
a. Escreva um programa que receba 10 números como entrada e imprima o maior número entre eles.
b. Escreva um programa que classifique um array de números em ordem crescente ou decrescente com base na escolha do usuário.
c. Escreva uma função que receba uma matriz de números como parâmetro e retorne o maior número da matriz.

4) Funções:
a. Escreva uma função que receba dois números como entrada e retorne a soma deles.
b. Escreva uma função que receba um array de números como entrada e retorne a média dos números.
c. Escreva uma função que receba uma string como entrada e retorne o número de vogais na string.

5) Arquivos:
a. Escreva um programa que leia o conteúdo de um arquivo de texto e imprima o número de linhas do arquivo.
b. Escreva um programa que receba um nome de arquivo como entrada e crie um novo arquivo com o mesmo conteúdo, mas com todas as palavras do arquivo original em letras maiúsculas.
c. Escreva um programa que leia um arquivo CSV e calcule a média de uma coluna específica no arquivo.

Exercícios avançados combinando todos os tópicos

6) Escreva um programa que receba uma lista de números como entrada, classifique os números em ordem crescente e, a seguir, encontre a média dos números. O programa deve imprimir a média e também todos os números maiores que a média.

7) Escreva um programa que leia um arquivo de texto e execute as seguintes operações no conteúdo do arquivo:
a. Conte o número de linhas no arquivo.
b. Conte o número de vogais no arquivo.
c. Conte o número de palavras no arquivo.
d. Substitua todas as ocorrências de uma palavra inserida pelo usuário por outra palavra inserida pelo usuário.

8) Escreva um programa que receba um arquivo CSV como entrada, leia o conteúdo do arquivo e execute as seguintes operações:
a. Conte o número de linhas no arquivo.
b. Conte o número de colunas no arquivo.
c. Calcule a média dos valores em uma coluna específica inserida pelo usuário.
d. Encontre os valores máximo e mínimo em uma coluna específica inserida pelo usuário.

9) Escreva um programa que execute as seguintes operações em uma lista de números:
a. Encontre a soma dos números na lista.
b. Encontre a média dos números na lista.
c. Encontre os valores máximo e mínimo na lista.
d. Conte o número de números pares e ímpares na lista.
e. Classifique os números na lista em ordem crescente ou decrescente com base na escolha do usuário.

 
Exemplos

Exemplo de Leitura de Arquivo

#include <stdio.h>

int main() {
   FILE *fp;
   char filename[100];
   char ch;

   printf("digite o caminho completo do arquivo: ");
   scanf("%s", filename);

   fp = fopen(filename, "r");
   if (fp == NULL) {
       printf("Falha ao abrir o arquivo %s\n", filename);
       return 1;
   }

   while ((ch = fgetc(fp)) != EOF) {
       printf("%c", ch);
   }

   fclose(fp);
   return 0;
}


Exemplo de ordenação de strings

#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 10
#define MAX_LENGTH 50

void sort_strings(char strings[MAX_STRINGS][MAX_LENGTH], int n) {
   int i, j, min_index;
   char temp[MAX_LENGTH];
   for (i = 0; i < n-1; i++) {
       min_index = i;
       for (j = i+1; j < n; j++) {
           if (strcmp(strings[j], strings[min_index]) < 0) {
               min_index = j;
           }
       }
       if (min_index != i) {
           strcpy(temp, strings[i]);
           strcpy(strings[i], strings[min_index]);
           strcpy(strings[min_index], temp);
       }
   }
}

int main() {
   int i, n;
   char strings[MAX_STRINGS][MAX_LENGTH];
   printf("Enter the number of strings: ");
   scanf("%d", &n);
   printf("Enter the strings: \n");
   for (i = 0; i < n; i++) {
       scanf("%s", strings[i]);
   }
   sort_strings(strings, n);
   printf("The sorted strings are: \n");
   for (i = 0; i < n; i++) {
       printf("%s\n", strings[i]);
   }
   return 0;
}

A implementação acima usa o algoritmo selection sort para classificar o array de strings. O selection sort é um algoritmo de classificação simples que funciona encontrando repetidamente o elemento mínimo da parte não ordenada do array e trocando-o pelo primeiro elemento da parte não ordenada, conforme ilustrado abaixo:

 


