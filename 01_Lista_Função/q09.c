/*9) Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cada
validação deve ser feita em uma função diferente, conforme lista abaixo. A função cadastrarCliente
deve chamar cada uma dessas funções. A função main deve imprimir se o cadastro foi realizado
com sucesso ou se houve erro, informando onde foi o erro:
• função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;
• função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para
masculino; f e F para feminino, o e O para outro).
• função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
• função validarNacimento: recebe o data digitada, e valida é uma data válida.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
  char nome [21];
  int dataNasc_dia;
  int dataNasc_mes;
  int dataNasc_ano;
  long cpf;
  char sexo; 
} dados_cliente;

dados_cliente cadastrar_cliente (dados_cliente dc);

int validarNome (char n[]);

int validarSexo (char sx); 

int validarCPF (long cpf);

/*--------------------------

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

--------------------------*/

int validarNome (char n[]){

  int validador, i;

  for (i=0; n[i] != '\0'; i++);

  if (i<=20)
    validador= 1;
  else
    validador= 0;
    
  return validador;
}

int validarSexo (char sx){
  
  int validador;
  
  switch (sx) {
    case 'F':
    case 'f':
    case 'M':
    case 'm':
    case 'O':
    case 'o':
      return validador= 1;
    break;

    default:
      return validador= 0;
    break;
}  
}

int validarCPF (long cpf){
  
  int validador1= 0, validador2, soma=0, e=10; 
  long val_digito1= cpf, val_digito2=cpf;
  
  if (cpf< pow (10, 11)){
    
    for (e= 10; e>2; e--){
      
      x= val_digito1/(pow 10, e);
      if (val_digito1 > (pow 10, e)){
        val_digito1= (val_digito1 - (x * (pow 10, e)))
        soma= soma + (x * e);
      }
        
      else
        val_digito1= val_digito1%(pow 10, e);
        e--;
        
    }
  
  }

    x= x/10;
    
    
    
  }

  else
    return validador2=0
      
}