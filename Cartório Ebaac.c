#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de alica��es de Texto Por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //Fun��o Respons�vel por Cadastrar os usu�rios no sistema
{
	//inicio da cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	
	printf("Digite o cpf a ser cadastrado: "); // coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se a string, salvar
	
	strcpy(arquivo, cpf);  // Respons�vel por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");	//cria o arquivo
	fprintf(file,","); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando informa��o do usu�rio
	scanf("%s",nome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,nome); //salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	printf("Digite o sobrenome a Ser cadastrado: "); //coletando informa��es do usu�rio
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,sobrenome); //salva o valor da var�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //coletando informa��es do usu�rio
	fprintf(file,","); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coletando informa��es do usu�rio
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,cargo); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); // Definindo Linguagem
	
	//inicio da cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	//final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser consultado: ");// coletando informa��es do usu�rio
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf,"r"); //cria o arquivo
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as Informa��es do Usu�rio: "); // coletando informa��es do usu�rio
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n");
	}
	
	system("pause");
		
		
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: "); //coletando informa��es do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	remove(cpf); 
	
	FILE *file;
	file = fopen(cpf,"r"); // cria o arquivo
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n"); //coletando informa��es do usu�rio
		system("pause");
		
	}
	
	
}

int main()
	{
	int opcao=0; // Definindo Vari�veis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
 
		system("cls"); // respons�vel por limpar a tela, deletar

		setlocale(LC_ALL, "Portuguese"); // Definindo Linguagem
	
		printf("### Cart�rio da Ebac ###\n\n"); // Inicio do Menu
		printf("Escolha a op��o desejada do Menu:\n\n");
		printf("\t1 - Registrar Nomes\n");
		printf("\t2 - Consultar Nomes\n");
		printf("\t3 - Deletar Nomes\n"); // Fim do Menu	

		scanf("%d" , &opcao); // Armazenando a escolha do usu�rio

		system("cls");
		
		switch(opcao)	//inicio da sele��o do menu
		{
			case 1:
			registro(); // chamada de fun��es
			break;
			
			case 2:
			consulta();	
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa Op��o N�o Est� Disponivel!\n");
			system("pause");
			break;	
			
				
	}}	
		
		
 		
	
	}
	



	
	
	
	
	
