/*AULA 3 - Exercicio 5 - Ler caracter e transforma-lo em maisculo */
#include <stdio.h>

int main () {

	char ch, d;

	printf ("Digite alguma letra do teclado.\n");
	scanf ("%c", &ch);

	if (((ch > 64) && (ch < 91) || (ch > 96) && (ch < 123))) {

		if ((ch > 64) && (ch < 91)) {
			printf ("%c\n", ch);
		}

		if ((ch > 96) && (ch < 123)) {
			d = ch - 32;
			printf ("%c\n", d);
		}
	}

	else {
		printf ("Digito incompatível.\n");
	}

return 0; 
}
