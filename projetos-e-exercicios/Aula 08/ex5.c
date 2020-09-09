/*AULA 8 - EXS 5 - Calcular IMC através de "struct"*/
#include <stdio.h>

int main () {

	float IMC;
	char nome[100];

	struct corpo {
		float altura;
		float peso;
		char nome[100];
	};

	struct corpo c1;
	
	printf ("Digite a altura:\n");
	scanf ("%f", &c1.altura);

	printf ("Digite o peso:\n");
	scanf ("%f", &c1.peso);

	printf ("Digite o nome:\n");
	getchar ();
	gets (c1.nome);


	IMC = (c1.peso)/((c1.altura)*(c1.altura));

	
	printf ("\n%.3f\n", IMC);

return 0;
}




