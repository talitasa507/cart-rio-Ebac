#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //bliblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> // bliblioteca de alocacao de string

int registro()
{
	char arquivo[40];
	char cpf[40]; 
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite O CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsavel por copiar valores das string

	FILE* file;  //cria o arquivo
	file = fopen(arquivo,"w");//cria o arquivo
	fprintf(file,cpf);  //salva o valor da variavel
	fclose(file); //fecha o arquivo
	
	file = fopen (arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file =  fopen(arquivo,"a");
	fprintf(file, nome);
	fclose(file);
	
	file =  fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite sobrenome a ser cadastrado: ");
	scanf("%s" , sobrenome);
	
	file = fopen(arquivo ,"a");
	fprintf(file,sobrenome);
	fclose(file);	
	
	file =  fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo),
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);

}


int consulta()
{
	setlocale(LC_ALL, "PORTUGUESE"); //Definindo linguagem
	
	char cpf[40]; 
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE* file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo n�o localizado!.\n");	
	}

	while(fgets(conteudo, 200,file) != NULL)  
	{
		printf("\nEssas s�o informa�oes do usuario:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}

int main()
	{
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	system("cls");
	
    setlocale(LC_ALL, "PORTUGUESE"); //Definindo linguagem
    
	printf("###Cart�rio da EBAC###\n\n"); //In�cio do menu
    printf("Escolha a op��o desejada do menu:\n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - Sair do sistema\n\n"); //Fim do menu
    printf("Opcao: ");//fim do menu
    
    scanf("%d", &opcao); //Armazenando a escolha do us�rio
    
	system("cls");
	
	
	switch(opcao)
	{   
		case 1:
		registro();
       	break;
       	
       	case 2:
       	consulta();
       	break;
       	
       	case 3:
        deletar();
    	break;
    	
    	case 4:
		printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;	
    	
    	
    	default:
    	printf("Essa op��o n�o est� disponivel!");
    	system("pause");
    	break;
	}     //fim da sele��o

}}
