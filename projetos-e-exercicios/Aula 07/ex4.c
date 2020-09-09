/*AULA 7 - Exercício 4 - Palíndromo sem diferenciar maiúsculas*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

	char string[101];
	int i;
	int flag = 0;

	printf ("Digite uma \'string\' qualquer:\n");
	gets (string);
	
	for (i = 0; i < strlen(string); i++) {
		if ((string [i] > 64) && (string [i] < 91)) {
			string[i] = string [i] + 32;
		}
	}

	for (i = (strlen(string)-1); i >= 0; i--) {
		
		if (string[i] != string[(strlen(string) - 1) - i]) {
			flag = flag + 1;
		}

	}

	if (flag > 0) {
		printf ("Esta palavra nao e um palindromo\n");
	}
	else {
		printf ("Esta palavra e um palindromo\n");
	}
		


return 0;
}
