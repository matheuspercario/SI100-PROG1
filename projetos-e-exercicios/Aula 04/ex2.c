/*AULA 4 - Exercício 2*/
#include <stdio.h>

int main () {
	
	char ch, c;
	printf ("Digite um caracter entre \'A\' e \'Z\' \n");
	scanf ("%c", &ch);

	while (ch != '#') {
		printf ("O valor da letra \'%c\' na tabela ASCII é: %d\n\n", ch, ch);

	}
	

	return 0;
}
