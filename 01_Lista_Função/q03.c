/*3) Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.*/

#include <stdio.h>

int fatorial (int x);

int main(void) {
  
  int valor1, fat;
  
  printf("Insira o número: ");
  scanf ("%d", &valor1);

  fat= fatorial (valor1);

  if (fat != 0)
    printf("Fatorial de %d = %d", valor1, fat);
  
      
  return 0;
}

int fatorial (int x){
  
  if (x > 0) {

    if (x==0 || x==1){
    return 1;
    }
    
    else{
      return x * fatorial (x-1);
    }

  }

  else if (x<0){
    printf("Não é possivel calcular o fatorial de numero negativo");
    return 0; 
      
  }
 
}