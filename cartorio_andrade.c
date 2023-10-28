#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o de memoria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

   int registro()// fun��o responsavel por cadastrar os usuarios no sistema
{
	//inicio da cria��o de variaveis/string
	char arquivo[40];
	char cpf [40];
	char nome[40];
	char sobrenome[40];
	char cargo [40];
    //final da cria��o de variaveis/string
    
	printf("digitar o cpf a ser cadastrado: ");//coletando informa��es do usuario
	scanf("%s", cpf);//%s refere-se a string (salvar uma string)
	
	strcpy(arquivo, cpf);//responsavel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo eo "w" significa escrever 
	fprintf(file,cpf);//salvo o valor da variavel
	fclose(file);//fecho o arquivo
	
	file = fopen(arquivo, "a");//responsavel por abrir o arquivo,adicionar informa��es a um arquivo existente ou criar um novo arquivo se ele n�o existir, sem perder os dados anteriores.
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");//responsavel por abrir o arquivo,adicionar informa��es a um arquivo existente ou criar um novo arquivo se ele n�o existir, sem perder os dados anteriores.
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");//responsavel por abrir o arquivo,adicionar informa��es a um arquivo existente ou criar um novo arquivo se ele n�o existir, sem perder os dados anteriores.
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");//responsavel por abrir o arquivo,adicionar informa��es a um arquivo existente ou criar um novo arquivo se ele n�o existir, sem perder os dados anteriores.
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");//responsavel por abrir o arquivo,adicionar informa��es a um arquivo existente ou criar um novo arquivo se ele n�o existir, sem perder os dados anteriores.
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");//responsavel por abrir o arquivo,adicionar informa��es a um arquivo existente ou criar um novo arquivo se ele n�o existir, sem perder os dados anteriores.
	fprintf(file,cargo);
	fclose(file);
	
	
	system("pause");
	

}
int consultar()//fun��o responsavel por consultar os usuarios no sistema

{  setlocale(LC_ALL, "portuguese"); //definindo a linguagem

   char cpf[40];
   char conteudo[200];
   
   printf("digite o cpf a ser consultado!\n");//armazenando a variavel"cpf" utilizando a fun��o "%s"
   scanf("%s",cpf);
   
   FILE *file;//cria o arquivo
   file = fopen(cpf,"r");//abre o arquivo correspondente ao cpf para leitura "R" de road (ler) a inform��o
   
   if(file == NULL)//se o arquivo na� puder ser aberto exibe uma mensagem de erro
   {
   	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
   }
   
   while(fgets(conteudo, 200, file) != NULL)
   {
   	printf("\nEssas s�o as informa��es do usuario: ");
   	printf("%s", conteudo);
   	printf("\n\n");//comando utilizado para pular linhas um final
   	
   	system("pause");
   }
}
    int deletar()//fun��o responsavel por deletar os usuarios
{
	char cpf [40];
	printf("digite o cpf do usuario a ser deletado:");
	scanf("%s",cpf);
	remove(cpf);
	FILE *file;
	file = fopen(cpf,"r");//abre o arquivo correspondente ao cpf para leitura "R" de road (ler) a inform��o
	if(file == NULL)
	{
	printf("usuario deletado com sucesso! \n");
	system("pause");
	}
	
}

int main() 
{
	int opcao=0; //definindo vari�veis
	int laco=1;
	for(laco =1; laco ==1;)
   	{
   	   system("cls");//responsavel por linpar a tela
	
       setlocale(LC_ALL, "portuguese"); //definindo a linguagem
       
       printf("### cart�rio da EBAC ###\n\n"); //inicio do menu
       printf("escolha a op��o desejada no menu:\n\n");  
       printf("\t1 -  registrar nomes \n\n");
       printf("\t2 -  consultar nomes \n\n");
       printf("\t3 -  deletar  nomes \n\n"); 
       printf("opc�o:");//fim do menu
    
       scanf("%d", &opcao); //armazenando a escolha do usu�rio
    
       system("cls");//responsavel por linpar a tela
       
       
       switch(opcao)//inicio da sele��o  do menu 
       
       {
       	case 1:
	    registro();// ira fazer a chamada da fun��o registro
  	    break;
  	   
  	    case 2:
  	   	consultar();// ira fazer a chamada da fun��o consultar
  	    break;
  	   
  	    case 3:
  	   	deletar ();// ira fazer a cahamada da fun��o deletar
  	    break;
  	    
  	   
  	    default:
  	    printf("essa opc�o n�o est� disponivel!\n ");
  	    system("pause");
  	    break;
	   }
       


}




}
  	
  
  
    
 
    

