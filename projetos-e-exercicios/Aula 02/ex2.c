/*AULA 2 - Exercicio 2 - Insira caracter e veja o caracter posterior*/
#include <stdio.h>

int main () {

	char c, i;
	
	printf ("Pressione algum caractere do teclado\n");
	scanf ("%c", &c);
	
	i = c+1;

	printf ("O caractere \'%c\' tem como posterior o caractere \'%c\' ", c, i );

return 0;
}
