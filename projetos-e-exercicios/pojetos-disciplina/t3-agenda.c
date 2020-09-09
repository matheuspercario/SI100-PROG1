/*TRABALHO DE PROGRAMAÇAO - AGENDA*/
#include <stdio.h>
#include <string.h>

#define LIM 1001
#define NOME 102
#define TELEFONE 22
#define EMAIL 52


//____________________________________________________________________________VARIAVEIS/ESTRUTURAS GLOBAIS_______________________________________________________________________

	char buscado[NOME];
	int flag, i, num; 

	typedef struct contato {
		char nome[NOME];
		char telefone[TELEFONE];
		char email[EMAIL];
		char sexo;
		int idade;
		float peso;
		float altura;
	} CONTATO; // Nome do "struct contato"

//__________________________________________________________________________PROTOTIPOS DAS FUNÇOES UTILIZADAS___________________________________________________________________
void adicionar(); 
void excluir();
void pesquisar();
void visualizar();

//__________________________________________________________________________________FUNÇOES PRINCIPAIS__________________________________________________________________________

int main () {

	CONTATO pessoa[LIM];
	CONTATO vazio = {"vazio", "vazio", "vazio", 'v', -1, -1.0, -1.0};
	CONTATO pessoa_ordem; //ORDENAR CONTATOS
	
	pessoa[0] = vazio;
	flag = 0;
	num = 1;

	

	while (num != 0) {
		system("cls");
		printf ("****MENU AGENDA ELETRONICA****\n1: Adicionar contato\n2: Excluir contato\n3: Pesquisar contato\n4: Visualizar todos os contatos\n0: Sair!\n");
		scanf ("%d", &num);
		getchar();


		switch (num) {

			case 1: //ADICIONAR CONTATO 
				adicionar();
				break;

			case 2: //EXCLUIR CONTATO
				printf ("****EXCLUIR CONTATO****\nDigite o nome da exclusao:\n");
				fgets (buscado, NOME, stdin); //pede nome do contato para conseguir comparar com os outros
				excluir();
				break;

			case 3: //PESQUISAR CONTATO
				printf ("****PESQUISAR CONTATO****\nDigite o nome da busca:\n");
				fgets (buscado, NOME, stdin);
				pesquisar();
				break;

			case 4: //VISUALIZAR TODOS CONTATOS
				visualizar();
				break;
		}

		if ((num != 0) && (num != 1) && (num != 2) && (num != 3) && (num != 4)) {
			printf ("****Opcao Invalida, tentar novamente****\n");
		}
	}


return 0;
}			

//_________________________________________________________________FUNÇAO ADICIONAR CONTATO_____________________________________________________________________________________
void adicionar()
{// FUNÇAO ADD CONTATO

	CONTATO pessoa[LIM];
	CONTATO vazio = {"vazio", "vazio", "vazio", 'v', -1, -1.0, -1.0};

		for (i = flag; num < LIM; i++) {
			printf ("****ADICIONAR CONTATO****\n");
			printf ("Digite o nome:\n");
			fgets (pessoa[i].nome, NOME, stdin);

			printf ("Digite o telefone (formato: (XX) XXXX-XXXX):\n");
			setbuf(stdin, NULL);
			fgets (pessoa[i].telefone, TELEFONE, stdin);

			printf ("Digite e-mail:\n");
			fgets (pessoa[i].email, EMAIL, stdin);

			printf ("Digite o sexo:\n");
			scanf ("%c", &pessoa[i].sexo);

			printf ("Digite a idade:\n");
			scanf ("%d", &pessoa[i].idade);

			printf ("Digite o peso:\n");
			scanf ("%f", &pessoa[i].peso);

			printf ("Digite a altura:\n");
			scanf ("%f", &pessoa[i].altura);

			pessoa[i + 1] = vazio;
			flag = flag + 1;
				break;
		}
}
//_______________________________________________________________________________FUNÇAO EXCLUIR CONTATO___________________________________________________________________________
void excluir()
{//FUNÇAO EXCLUIR CONTATO

	CONTATO pessoa[LIM];
	CONTATO vazio = {"vazio", "vazio", "vazio", 'v', -1, -1.0, -1.0};

		for (i = 0; i < flag; i++) { //Compara "nome_busca com os contatos existentes" para entao exclui-lo
			if ((strcmp (pessoa[i].nome, buscado)) == 0) {
				for (i + 1; i <= flag; i++) { 
					pessoa[i] = pessoa[i + 1];
				}
					flag = flag - 1;
					pessoa[flag] = vazio;
			}


			if (i == (flag - 1)) {//Se a busca não for concretizada com sucesso, printar
				printf ("****Nome nao encontrado!****\n");
			}
		}
}			

//_______________________________________________________________________________FUNÇAO PESQUISAR CONTATO___________________________________________________________________________
void pesquisar()
{//FUNÇAO PESQUISAR CONTATO

	CONTATO pessoa[LIM];

		for (i = 0; i < flag; i++) { //Compara strings
			if ((strcmp (pessoa[i].nome, buscado)) == 0) { //Se a busca for concretizada com sucesso, printar
			printf ("%s%s%s%c\n%d\n%.2f\n%.2f\n", pessoa[i].nome, pessoa[i].telefone, pessoa[i].email, pessoa[i].sexo, pessoa[i].idade, pessoa[i].peso, pessoa[i].altura);	
				break;//Mostra informações do contato e depois para
			}

			if (i == (flag - 1)) {//Se a busca não for concretizada com sucesso, printar
			printf ("****Nome nao encontrado!****\n");
			}
		}
}

//_______________________________________________________________________________FUNÇAO VISUALIZAR TODOS CONTATO___________________________________________________________________
void visualizar()
{//FUNÇAO VISUALIZAR TODOS CONTATOS

	CONTATO pessoa[LIM];
	CONTATO vazio = {"vazio", "vazio", "vazio", 'v', -1, -1.0, -1.0};
	CONTATO pessoa_ordem; //ORDENAR CONTATOS

		for (i = 0; i < flag; i++) {//ORDENAR
			if (i == (flag - 1)) {
				break;
			}

			if ((strcmp (pessoa[i].nome, pessoa[i + 1].nome)) > 0) {
				pessoa_ordem = pessoa[i];
				pessoa[i] = pessoa[i + 1];
				pessoa[i + 1] = pessoa_ordem;
			}
		}


		printf ("****VISUALIZAR TODOS OS CONTATOS****\n"); // Realmente visualizar todos os contatos
			if ((strcmp (pessoa[0].nome, vazio.nome)) == 0) {
				printf ("****Agenda Vazia!****\n");
			}

			else {
				for (i = 0; i < flag; i++) {
					printf ("%s%s%s%c\n%d\n%.2f\n%.2f\n", pessoa[i].nome, pessoa[i].telefone, pessoa[i].email, pessoa[i].sexo, pessoa[i].idade, pessoa[i].peso, pessoa[i].altura);
				}
			}

}
//____________________________________________________________________________________FIM__________________________________________________________________________________________



