/*AULA 7 - Exercício 1 - Contar numero de caracteres sem função strlen*/
#include <stdio.h>
#include <string.h>

int main () {

	char string[81];
	int i;

	printf ("Digite uma \'string\' qualquer: \n");
	fgets (string, 81, stdin);

	for (i = 0; string[i] != '\n'; i++) {
	}
	
	printf ("%d\n", i);
		
return 0;
}
	
	
