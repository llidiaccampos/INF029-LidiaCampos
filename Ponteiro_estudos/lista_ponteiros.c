/*
1) Crie um programa que defina variáveis do tipo int, char, string [10 posições], float, double. Deve ser definido também uma variável ponteiro para cada um dos tipos acima. Faça leituras (scanf) e escrita (printf) das variáveis primitivas e depois faça o mesmo utilizando ponteiros.


#include <stdio.h>

int main()
{
  int A = 10, *ponteiroA, *ponteiroV, i=0;
  char B= 'b', *ponteiroB;
  int vetor[4]= {1, 2, 3,4};
  float  C= 10.4, *ponteiroC;
  
  ponteiroA= &A;
  ponteiroB= &B;
  ponteiroV= vetor;
  ponteiroC= &C;
  
  printf ("questão 01: \n");
  printf ("%d - %c - %f\n", A, B, C);
  printf ("Vetor:");
  
  for (i=0; i<4; i++){
    printf("%d", vetor[i]);
  }

  printf ("\n");


  *ponteiroA= 20;
  *ponteiroB= 'K';
  *ponteiroC= 35.7;
  ponteiroV[2]= 5;

  printf ("%d - %c - %f\n", A, B, C);
  printf ("Vetor:");
  
  for (i=0; i<4; i++){
    printf("%d", vetor[i]);
  }

  printf ("***********************\n");


  return 0;
}
*/

/*2) Faça um programa que tenha uma função troca que recebe dois parâmetros inteiros e troque o valor das variáveis um pelo outro. A função main deve ler do usuário os dois valores, chamar a função troca, e depois imprimir os valores trocados.

#include <stdio.h>

void troca (int *a, int *b){
  int aux;
  aux= *a;
  *a= *b;
  *b= aux;
}


int main()
{
  int numeroA= 10, numeroB= 20;
  int *ponteiroA= &numeroA, *ponteiroB= &numeroB;
  
  troca (ponteiroA, ponteiroB);
  printf("questão 02: \n");
  printf("A: %d, B: %d\n", numeroA, numeroB);
  printf("***********************\n");
  
  return 0;
}

*/

/*3) Faça um programa que tenha uma função ordena que recebe um vetor de inteiros e ordene os valores. A função main deve ler do usuário os valores (ex. 5 valores), chamar a função ordena, e depois imprimir os valores ordenados.

#include <stdio.h>

void ordena (int vetor [], int tamanho){
  int icont;

  for (icont= 0; icont < tamanho; icont++)
    vetor [icont]= vetor[icont] + 100;
  
}

int main()
{
  int i, tam= 5, vetores[5]={3,5,7,4, 21};  
  
  ordena (vetores, tam);

  printf ("Vetores ordenados: ");
  
  for (i=0; i< tam; i++){
    printf("%d ", vetores[i]);
  }

    return 0;
}

*/

/*4) Faça um programa que monte uma pilha dinâmica com valores inteiros informados pelo usuário. Deve ter uma função insere, que recebe um ponteiro para o topo da pilha e insere o valor no topo.*/

#include <stdio.h>

typedef struct Node{
 int num;
 struct Node *prox;
} node;

node insere (int n){
  
}



int main()
{
  int numero=0;
  
  printf("digite zero para sair ou outro valor para ser adicionado a pilha: ");
  scanf ("%d", &numero);
  

    return 0;
}







