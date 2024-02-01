#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alicações de Texto Por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() //Função Responsável por Cadastrar os usuários no sistema
{
	//inicio da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o cpf a ser cadastrado: "); // coletando informação do usuário
	scanf("%s",cpf); //%s refere-se a string, salvar
	
	strcpy(arquivo, cpf);  // Responsável por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");	//cria o arquivo
	fprintf(file,","); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando informação do usuário
	scanf("%s",nome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,nome); //salva o valor da variável
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // cria o arquivo
	fprintf(file,","); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	printf("Digite o sobrenome a Ser cadastrado: "); //coletando informações do usuário
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,sobrenome); //salva o valor da varável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //coletando informações do usuário
	fprintf(file,","); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coletando informações do usuário
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo
	fprintf(file,cargo); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); // Definindo Linguagem
	
	//inicio da criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	//final da criação de variáveis/string
	
	printf("Digite o CPF a ser consultado: ");// coletando informações do usuário
	scanf("%s",cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf,"r"); //cria o arquivo
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as Informações do Usuário: "); // coletando informações do usuário
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n");
	}
	
	system("pause");
		
		
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: "); //coletando informações do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	remove(cpf); 
	
	FILE *file;
	file = fopen(cpf,"r"); // cria o arquivo
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!.\n"); //coletando informações do usuário
		system("pause");
		
	}
	
	
}

int main()
	{
	int opcao=0; // Definindo Variáveis 
	int laco=1;
	
	for(laco=1;laco=1;)
	{
 
		system("cls"); // responsável por limpar a tela, deletar

		setlocale(LC_ALL, "Portuguese"); // Definindo Linguagem
	
		printf("### Cartório da Ebac ###\n\n"); // Inicio do Menu
		printf("Escolha a opção desejada do Menu:\n\n");
		printf("\t1 - Registrar Nomes\n");
		printf("\t2 - Consultar Nomes\n");
		printf("\t3 - Deletar Nomes\n"); // Fim do Menu	

		scanf("%d" , &opcao); // Armazenando a escolha do usuário

		system("cls");
		
		switch(opcao)	//inicio da seleção do menu
		{
			case 1:
			registro(); // chamada de funções
			break;
			
			case 2:
			consulta();	
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa Opção Não Está Disponivel!\n");
			system("pause");
			break;	
			
				
	}}	
		
		
 		
	
	}
	



	
	
	
	
	
