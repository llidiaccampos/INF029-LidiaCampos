/*4) Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.*/

#include <stdio.h>

int* ler3Numeros (int v[]);

int main(void) {
  
  int vetor[3], icont;
    
  ler3Numeros(vetor);
  
  for (icont = 0; icont <3; icont++){
    printf("%d ", vetor[icont]);
    }
         
  return 0;
}

int* ler3Numeros (int v[]){

  int icont;

  for (icont = 0; icont <3; icont++){
    printf("digite o %dº número: ", icont);
    scanf("%d", &v[icont]);
  }

  return v;
}