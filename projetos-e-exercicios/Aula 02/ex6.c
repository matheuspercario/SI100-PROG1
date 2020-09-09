/*AULA 2 - Exercicio 6 - Lê idade da pessoa em anos e imprime em minutos*/
#include <stdio.h>

int main () {

	int ID, IDmin;


	printf ("Digite sua idade:\n");
	scanf ("%d", &ID);

	IDmin = ID*365*24*60;

	printf ("A idade em minutos é: %d\n", IDmin);

return 0;
}

	
