/*AULA 4 - Exercicio 5*/
#include <stdio.h>

int main () {

	int num, par, x, impar;
	num=0;
	par=0;
	impar=0;

	while (num < 10) {
		num=num+1;

		scanf ("%d", &x);
		if (x%2==0) {
			par=par+1;
		}
			
		if (x%2!=0) {
			impar=impar+1;
		}
	}

		printf ("%d pares, %d impares\n", par, impar);

	return 0; 
}
