/*6) Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. A função main deve imprimir esses três letras.*/

#include <stdio.h>

char* ler3Letras (char l[]);

int main(void) {
  
  char letra[3]; 
  int icont;
    
  ler3Letras(letra);
  
  for (icont = 0; icont <3; icont++){
    printf("%c ", letra[icont]);
    }
         
  return 0;
}

char* ler3Letras (char l[]){

  int icont;

  for (icont = 0; icont <3; icont++){
    printf("digite a %dº letra: ", icont+1);
    scanf("%c", &l[icont]);
    //printf ("Voce pressionou a tecla %c\n",l[icont]);
    getchar();
       
  }

  return l;
}