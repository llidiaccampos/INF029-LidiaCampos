/*7) Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. A função main deve imprimir essas três palavras.*/

//http://wiki.foz.ifpr.edu.br/wiki/index.php/Caracteres_e_String_em_C
//https://pt.stackoverflow.com/questions/386738/vetor-de-strings-em-c

#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  char palavra [50];
} palavras;

palavras* ler3Palavras (palavras p[]);

int main(void) {
  
  palavras plv [3]; 
  int icont;

  ler3Palavras(plv);
      
  for (icont = 0; icont <3; icont++){
    printf("%dº palavra: %s ", plv[icont].id, plv[icont].palavra);
  }
         
  return 0;
}

palavras* ler3Palavras (palavras p[]){

  int icont, len;

  for (icont = 0; icont <3; icont++){
    printf("digite a %dº palavra: ", icont+1);
    fgets(p[icont].palavra, sizeof(p[icont].palavra), stdin);
    len = strlen(p[icont].palavra);
    if (p[icont].palavra[len - 1] == '\n')
      p[icont].palavra[len - 1] = '\0';
    p[icont].id= icont+1;
       
  }

}