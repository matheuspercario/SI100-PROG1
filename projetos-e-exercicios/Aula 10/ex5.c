/*AULA 10 - EXS5 - ESTRUTURA*/
#include <stdio.h>
#include <stdlib.h>
#define N 102


int main () {

	int n, i, j;
	float Media;
	

	typedef struct contato {
		char nome[N];
		int RA;
		float P1;
		float P2;
	} CONTATO; // Nome do "struct contato"


	scanf ("%d", &n);
	getchar();

	CONTATO* aluno;
	aluno = (CONTATO*) malloc(n*sizeof(CONTATO));

	if (aluno == NULL) {
		printf ("qualquer coisa");
		return 1;
	}


	for (i = 0; i < n; i++) {
			
		//printf ("Digite o nome:\n");
		gets (aluno[i].nome);

		//printf ("Digite o RA:\n");
		scanf ("%d", &aluno[i].RA);

		//printf ("Digite P1:\n");
		scanf ("%f", &aluno[i].P1);

		//printf ("Digite P2:\n");
		scanf ("%f", &aluno[i].P2);
		getchar();
	}

	for (j = 0; j < n; j++) {
		Media = (aluno[j].P1 + aluno[j].P2)/2;
		
		printf("%d\t%s\t%.2f\n", aluno[j].RA, aluno[j].nome, Media);
	}

	
return 0;
}
