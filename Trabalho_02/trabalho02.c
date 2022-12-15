#include <stdio.h>

//função de ordenação

//função para excluir um elemento

//função para acrescentar elementos
//https://wagnergaspar.com/como-aumentar-o-tamanho-de-um-vetor-com-a-funcao-realloc/


int main()
{
  typedef struct {
    int tam= 0;   
    int *estrutura_aux= Null;  
  } vetor

  vetor vetorPrincipal [10];
  int opcao=0, posicao, tam_aux;

  while (opcao >= 0){
    printf ("Informe a opção desejada:\n
    1- Inserir um elemento\n 
    2- Listar os elementos de toda estrutura \n
    3- Listar os elementos de uma estrura auxiliar ordenado\n
    4- Listar todos os números ordenado\n
    5- Excluir um elemento\n
    6- Aumentar uma das estruturas auxiliares\n
    7- Sair
    ");
      
    scanf ("%d", &opcao);
    
    switch (opcao) {
      case 1:
        printf ("Informe a posição da estrutra principal (1 à 10): ");
        scanf ("%d", &posicao);
        if (vetorPrincipal[posicao-1].tam == 0){
          printf("Estrutura auxiliar ainda não criada, informe o tamanho da estrutura: ");
          scanf ("%d", &tam_aux);
          
        }
        
        Instruções;

     case 2:
       Instruções;
      
      case 3:
        Instruções;

      case 4:
        Instruções;

      case 5:
        Instruções;

      case 6:
        Instruções;

      case 7:
        opcao= -1;
        break;
      
    }
    
  }
  
    
  return 0;
}

