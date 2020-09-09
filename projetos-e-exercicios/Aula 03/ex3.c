/*AULA 3 - Exercicio 3 - Escreva uma data no formato dd/mm/aaa e obtenha saida por extenso*/
#include <stdio.h>

int main () {
	
	int dia, mes, ano;

	printf ("Digite a data no formato \"dd/mm/aaaa\".\n");
	scanf ("%d/%d/%d", &dia, &mes, &ano);

	if (mes == 1) {
		printf ("%d de Janeiro de %d\n", dia, ano);
	}

	if (mes == 2) {
		printf ("%d de Feveiro de %d\n", dia, ano);
	}

	if (mes == 3) {
		printf ("%d de Março de %d\n", dia, ano);
	}

	if (mes == 4) {
		printf ("%d de Abril de %d\n", dia, ano);
	}

	if (mes == 5) {
		printf ("%d de Maio de %d\n", dia, ano);
	}

	if (mes == 6) {
		printf ("%d de Junho de %d\n", dia, ano);
	}

	if (mes == 7) {
		printf ("%d de Julho de %d\n", dia, ano);
	}

	if (mes == 8) {
		printf ("%d de Agosto de %d\n", dia, ano);
	}

	if (mes == 9) {
		printf ("%d de Setembro de %d\n", dia, ano);
	}

	if (mes == 10) {
		printf ("%d de Outubro de %d\n", dia, ano);
	}
	
	if (mes == 11) {
		printf ("%d de Novembro de %d\n", dia, ano);
	}

	if (mes == 12) {
		printf ("%d de Dezembro de %d\n", dia, ano);
	}


return 0;
}
