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
  char nome [30];
  int dataNasc_dia;
  int dataNasc_mes;
  int dataNasc_ano;
  char cpf [20];
  char sexo; 
} dados_cliente;

typedef struct{
  int geral;
  int nome;
  int sexo;
  int v_cpf;
  int data_nasc; 
} valid_cadastro;

valid_cadastro cadastrar_cliente ();
int validarNome (char n[]);
int validarSexo (char sx); 
int validarCPF (char cpf_int[]);
int validarNacimento (int dia, int mes, int ano);

int main(void) {
  
  valid_cadastro validador;
  
  validador= cadastrar_cliente();

  if (validador.geral==4)
    printf(" Cadastro realizado com sucesso");
  
  else{
    printf("Cadastro não finalizado\n");
    
    if(validador.nome==0)
      printf("Falha no cadastro do nome\n");
    if(validador.sexo==0)
      printf("Falha no cadastro do sexo\n");
    if(validador.v_cpf==0)
      printf("Falha no cadastro do cpf\n");
    if(validador.data_nasc==0)
      printf("Falha no cadastro da data de nascimento");
  }
         
  return 0;
}

//FUNÇÕES

valid_cadastro cadastrar_cliente (){

  dados_cliente dados;
  valid_cadastro cadastro;
  int len1, len2, valid_nome, valid_sx, valid_cpf, valid_nasc;
    
  printf("Informe o nome do cliente: ");
  fgets(dados.nome, sizeof(dados.nome), stdin);
  len1 = strlen(dados.nome);
  if (dados.nome[len1 - 1] == '\n')
    dados.nome[len1 - 1] = '\0';
  
  printf("Informe o sexo do cliente (F: Feminino/ M: Masculino / O: outro): ");
  scanf("%c", & dados.sexo);
  getchar();
    
  printf("Informe o dia do nascimento do cliente: ");
  scanf ("%d", & dados.dataNasc_dia);
    
  printf("Informe o mês do nascimento do cliente: ");
  scanf ("%d", & dados.dataNasc_mes);
    
  printf("Informe o ano do nascimento do cliente: ");
  scanf ("%d", & dados.dataNasc_ano);

  //CORRIGIR PROBLEMA DE BUFFER
  int c;
  while ((c = getchar()) != '\n' && c != EOF) { }
  //
  
  printf("Informe o CPF do cliente: ");
  fgets(dados.cpf, sizeof(dados.cpf), stdin);
  len2 = strlen(dados.cpf);
  if (dados.cpf[len2 - 1] == '\n')
    dados.cpf[len2 - 1] = '\0';
     
  valid_nome= validarNome (dados.nome);
  valid_sx= validarSexo (dados.sexo); 
  valid_cpf= validarCPF (dados.cpf);
  valid_nasc= validarNacimento (dados.dataNasc_dia, dados.dataNasc_mes, dados.dataNasc_ano);

  cadastro.geral= valid_nome + valid_sx + valid_cpf + valid_nasc;
  cadastro.nome= valid_nome;
  cadastro.sexo= valid_sx;
  cadastro.v_cpf= valid_cpf;
  cadastro.data_nasc= valid_nasc;
  
  return cadastro; 
}


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

int validarCPF (char cpf_int[]){

  int cpf [11], validador, k, t, invalid;
  int i, dg1, soma_dg1=0, valid_dg1, verific_dg1=0; 
  int j, dg2, soma_dg2=0, valid_dg2, verific_dg2=0;

  if (strlen (cpf_int) != 11)
    return validador= 0;
  
  else{

    for (t=0; t<=10; t++)
      cpf[t]= cpf_int[t] - '0';
            
    for (i=0, dg1= 10; i<9; i++){
    soma_dg1= soma_dg1 + (cpf[i] * dg1);
    dg1--;
    }

    valid_dg1= (soma_dg1*10)%11;
    
    if (valid_dg1== cpf[9] || (valid_dg1== 10 && cpf[9]== 0))
      verific_dg1= 1;
    
    for (j=0, dg2= 11; j<10; j++){
      soma_dg2= soma_dg2 + (cpf[j] * dg2);
      dg2--;
    }
  
    valid_dg2= (soma_dg2*10)%11;
    
    if (valid_dg2== cpf[10] || (valid_dg2== 10 && cpf[10]== 0))
      verific_dg2= 1;
  
    for (k=0, invalid= 0; k<10; k++){
      if (cpf[k]==cpf[k+1])
        invalid++; 
    }
  
    if (verific_dg1== 1 && verific_dg2== 1 && invalid!=10)
      return validador=1;
  
    else
      return validador=0;    
    }
     
}

int validarNacimento (int dia, int mes, int ano){

  int validador, valid_ano=0, valid_mes=0, valid_dia=0;
  int mes_31=0, mes_30=0;
  
  if (ano >= 1 && ano <= 2022)
    valid_ano= 1;

  if (mes >= 1 && mes <= 12)
    valid_mes= 1;

  if (valid_mes==1 && dia>=1 && dia<= 31){
     
    switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      mes_31= 1;
    break;
//Tratanto fevereiro como mês de 30 dias. 
//Falta fazer função para verifcar ano bissexto.
    case 2: 
    case 4:
    case 6:
    case 9:
    case 11:
      mes_30= 1;
    break;
    }  
    
  if (dia<=31 && mes_31==1)
    valid_dia= 1;

  if (dia<=30 && mes_30==1)
    valid_dia= 1; 
  }

  if (valid_ano + valid_mes+ valid_dia==3)
    return validador=1;

  else
    return validador=0;
  
}