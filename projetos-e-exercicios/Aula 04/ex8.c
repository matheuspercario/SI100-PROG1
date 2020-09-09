/*AULA 4 - Exercicio 8 - Menor numero inteiro que aceite as condições mencionadas*/
#include <stdio.h>

int main () {

	int n, i;

	for (i = 100000 ; i > n; i--) {
		while ((n%3==2) && (n%5==3) && (n%7==4)) {
			printf ("Digite outro número, porque o primeiro não deu certo...:\n");
		}
	}

	printf ("O número que aceita as condições é: %d\n", n);

return 0;
}
