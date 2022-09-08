/*2) Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o resultado da subtração.*/

#include <stdio.h>

int subtrai (int x, int y, int z);

int main(void) {
  
  int valor1, valor2, valor3, resultado;
  
  printf("Insira os valores: \n valor 1 \n valor 2 \n valor 3\n ");
  scanf ("%d %d %d", &valor1, &valor2, &valor3);
  
  
  resultado= subtrai (valor1, valor2, valor3);
  printf("Resultado da subtração: %d", resultado);
  
  return 0;
}

int subtrai (int x, int y, int z){
  int r= x - y - z;
  return r;
}