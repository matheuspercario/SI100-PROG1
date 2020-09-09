/*AULA 3 - Exercicio 1 - Número par ou ímpar*/
#include <stdio.h>

int main () {
		
	int par, impar, a;
	

	printf ("Digite um número:\n");
	scanf ("%d", &a);

	if (a%2==0) {
		printf ("Número \'%d\' é par.\n", a);
	}
	
	else {
		printf ("Número \'%d\' é impar.\n", a);
	}

return 0;
}
