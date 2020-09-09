/*AULA 7 - Exercício 2 - Imrpimindo versão espelhado da string*/
#include <stdio.h>
#include <string.h>

int main () {

	char string[81];
	int i;

	printf ("Digite uma \'string\' qualquer: \n");
	fgets (string, 81, stdin);

	for (i = (strlen(string) - 1); i >= 0; i--) {
		printf ("%c", string[i]);
	}
		
	printf ("\n");
	
return 0;
}
