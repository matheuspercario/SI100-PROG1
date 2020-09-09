/*AULA 2 - Exercicio 1 - Média dos alunos*/
#include <stdio.h>

int main () {
	
	float P1, P2, T, med;

	printf ("Digite a nota da sua P1:\n");
	scanf ("%f", &P1); // Usuário digita nota da P1

	printf ("Digite a nota da sua P2:\n");
	scanf ("%f", &P2); // Usuário digita nota da P2

	printf ("Digite a nota do seu trabalho:\n");
	scanf ("%f", &T); // Usuário digita nota do seu Trabalho

	med = (P1+P2+T)/3.0;


	printf ("Sua média é: %.1f\n", med);


return 0;
}

