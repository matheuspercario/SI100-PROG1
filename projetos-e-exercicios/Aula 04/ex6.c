/*AULA 4 - Exercicio 6 - Quadrado pelas somas*/
#include <stdio.h>

int main () {

	int n, i, soma, impar, quad;

	printf ("Digite um número:\n");
	scanf ("%d", &n);

	impar = 1;
	quad = 0;
	
	for (i = 0; i < n; i++) {
		quad = quad + impar; // 
		impar = impar + 2; //
	}
	
	printf ("O quadrado de \'%d\' é \'%d\'.\n", n, quad);

return 0;
}
