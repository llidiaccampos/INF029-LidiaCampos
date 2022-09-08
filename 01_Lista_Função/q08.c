/*8) Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve imprimir os dados do cliente.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  char nome [50];
  int dataNasc_dia;
  int dataNasc_mes;
  int dataNasc_ano;
  long cpf;
  char sexo [15]; 

} dados_cliente;

dados_cliente cadastrar_cliente (dados_cliente dc);

int main(void) {
   
 dados_cliente cliente;
  int icont;
    
  cliente= cadastrar_cliente(cliente);

printf("\nNome: %s - Data: %d/%d/%d\nCPF: %ld - Sexo: %s", cliente.nome, cliente.dataNasc_dia, cliente.dataNasc_mes, cliente.dataNasc_ano, cliente.cpf, cliente.sexo);
  
            
  return 0;
}

dados_cliente cadastrar_cliente (dados_cliente dc){

  dados_cliente dados;
  int len, i;
  char sexo_cliente;

  printf("Informe o nome do cliente: ");
  fgets(dados.nome, sizeof(dados.nome), stdin);
  len = strlen(dados.nome);
  if (dados.nome[len - 1] == '\n')
    dados.nome[len - 1] = '\0';

  printf("Informe o dia do nascimento do cliente: ");
  scanf ("%d", & dados.dataNasc_dia);

  printf("Informe o mês do nascimento do cliente: ");
  scanf ("%d", & dados.dataNasc_mes);

  printf("Informe o ano do nascimento do cliente: ");
  scanf ("%d", & dados.dataNasc_ano);

  printf("Informe o CPF do cliente: ");
  scanf ("%ld", & dados.cpf);

  __fpurge (stdin); 
  
  printf("Informe o sexo do cliente (F: Feminino/ M: Masculino / O: outro): ");
  scanf("%c", & sexo_cliente);
  getchar();
    
  if (sexo_cliente== 'F'|| sexo_cliente== 'f'){
    char sexxo []= "Feminino";
    for (i=0; sexxo[i] != '\0'; i++)
     dados.sexo[i]=sexxo[i];
    dados.sexo[i]='\0';
  }

  if (sexo_cliente== 'M'|| sexo_cliente== 'm'){
    char sexxo []= "Masculino";
    for (i=0; sexxo[i] != '\0'; i++)
     dados.sexo[i]=sexxo[i];
    dados.sexo[i]='\0';
  }

  if (sexo_cliente== 'O'|| sexo_cliente== 'o'){
    char sexxo []= "Outro";
    for (i=0; sexxo[i] != '\0'; i++)
     dados.sexo[i]=sexxo[i];
    dados.sexo[i]='\0';
  }
            
  return dados; 
}