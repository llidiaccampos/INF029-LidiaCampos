/*5) Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.*/

#include <stdio.h>
#define qtd 4

typedef struct{
  int numero [qtd];
} numeros;

numeros ler4Numeros ();

int main(void) {
  
  numeros num; 
  int icont;
    
  num = ler4Numeros();
  
  puts ( "Os valores digitados foram:");
  
  for (icont = 0; icont <qtd; icont++){
    printf("%d ", num.numero[icont]);
  }
         
  return 0;
}

numeros ler4Numeros (){
  
  int icont;
  numeros n;

  for (icont = 0; icont < qtd; icont++){
    printf("digite %d° número: ", icont+1);
    scanf("%d", &n.numero[icont]);
  
  }

  return n;
}