/*1) Crie um programa que tenha uma função soma e a função main. A função main deve ler dois valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A Função main deve imprimir o resultado da soma*/

#include <stdio.h>


int soma (int x, int y);


int main(void) {
  
  int valor1, valor2, resultado;
  
  printf("valor 1: ");
  scanf ("%d", &valor1);
  printf("valor 2: ");
  scanf ("%d", &valor2);

  resultado= soma (valor1, valor2);
  printf("Resultado da soma: %d", resultado);
  
  return 0;
}

int soma (int x, int y){
  int r= x + y;
  return r;
}