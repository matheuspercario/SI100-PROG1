/*AULA 3 - Exercicio 6 - Media e status do aluno na facul*/
#include <stdio.h>

int main () {

	float P1, P2, P3, media, exame, media2;
	
	printf ("Digite a nota da P1:\n");
	scanf ("%f", &P1);

	printf ("Digite a nota da P2:\n");
	scanf ("%f", &P2);

	printf ("Digite a nota da P3:\n");
	scanf ("%f", &P3);

	media = (P1+P2+P3)/3;

	printf ("Média do aluno: %.2f. \n", media);

	
	if (((P1 < 2.0) || (P2 < 2.0) || (P3 < 2.0)) || ((P1 >= 6.0) && (P2 >= 6.0) && (P3 >= 6.0))) {


		if ((P1 < 2.0) || (P2 < 2.0) || (P3 < 2.0)) {
			printf ("Aluno Reprovado!\n");
		}
	
		if ((P1 >= 6.0) && (P2 >= 6.0) && (P3 >= 6.0)) {
			printf ("Aluno Aprovado!\n");
		}
	}

	else {
		printf ("Digite a nota do exame:\n");
		scanf ("%f", &exame);
		media2 = (media + exame)/2;
		printf ("Média do aluno após exame: %.2f\n", media2);
		
		if (media2 > 6.0) {
			printf ("Aluno Aprovado!\n");
		}

		else {
			printf ("Aluno Reprovado!\n");
		}
	}

return 0;
}
