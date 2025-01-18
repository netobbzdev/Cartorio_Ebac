 #include <stdio.h> // biblioteca de comunica��o com o usuario
 #include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
 #include <locale.h> //biblioteca de aloca��o de texto por regi�o (acentos, caracteres)
 #include <string.h> // colocar palavras
 
 int registro() // fun��o por cadastrar os usuarios no sistema
{
	printf("Voc� escolheu registrar nomes!\n");
	
	//inicio de cria��o de variaveis/strings
	
	char arquivo [40]; // char � variavel de string
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	//final de cria��o de variaveis
	
	printf("Digite o seu CPF: \n"); // coletando os dados
	scanf("%s", cpf); // %s porque � string
	
	strcpy(arquivo,cpf); //responsavel por copiar os valores das string
	
		FILE *file; //cria o arquivo
		
		file = fopen(arquivo,"w"); //cria o arquivo - w significa escrever
		fprintf(file,cpf); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
		
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,", "); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
	
	printf("Digite o seu nome: \n");
	scanf("%s", nome);
	
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,nome); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,", "); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
	
	printf("Digite o seu sobrenome: \n");
	scanf("%s", sobrenome);
	
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,sobrenome); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,", "); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
	
	printf("Digite o seu cargo: \n");
	scanf("%s", cargo);
	
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,cargo); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
		file = fopen(arquivo,"a"); //atualiza o arquivo - a
		fprintf(file,"."); //salvo o valor da variavel
		fclose(file); //fecho o arquivo
	
	system("pause");
 } 
 
 int consulta()
{	

	setlocale(LC_ALL,"Portuguese"); // escolhe a biblioteca portugues para permitir o acento
	
	printf("Voc� escolheu consultar nomes!\n");
	
	char cpf[40];
	char conteudo[200];
	
		printf("Digite o CPF a ser consultado.\n");
		scanf("%s",cpf);
		
		FILE *file;
		file = fopen(cpf,"r"); // apenas le o arquivo 'r' de reading
		
		
		if(file==NULL){
			printf("N�o foi possivel localizar o arquivo!\n");
		}
	
		while(fgets(conteudo, 200, file) != NULL){
			printf("\nEssas s�o as informa��es do usu�rio: ");
			printf("%s", conteudo);
			printf("\n\n");
		}
		
	system("pause");
	fclose(file);	
 } 
 
 int deleta()
{
	char cpf[40];
	
	
	
	printf("Voc� escolheu deletar nomes!\n");
	printf("Digite o CPF a ser deletado: \n");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	
	if(file == NULL);
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system ("pause");
		
	}
	
	
 } 
 
 int main()
{
 	int opcao=0;
 	int laco=1;
 	
 	for(laco=1;laco=1;)
 	{
	 
 	system("cls"); // limpa a tela
 	setlocale(LC_ALL,"Portuguese"); //defini��o do idioma
 	
 	printf ("### CART�RIO DA EBAC ###\n\n"); 
 	printf ("Escolha a op��o desejada do menu\n");
 	printf ("\t 1- Registrar Nomes\n");
 	printf ("\t 2- Consultar Nomes\n"); 	
 	printf ("\t 3- Deletar Nomes\n"); 
	printf ("Op��o: "); 	
	scanf("%d", &opcao);// d porque � inteiro
	system("cls");//zerar a interface
	
	
		switch(opcao)
		{
		case 1:
		registro();
		break;	
		
		case 2:
		consulta();
		break;	
		
		case 3:
		deleta();
		break;	
		
		default:
		printf("Essa op��o n�o est� dispon�vel\n");
		system("pause");
		break;
		}
		
	
	
	
	}
	
	
 	printf ("Esse software � feito por MBNeto\n");
 }
 	
 	
 
