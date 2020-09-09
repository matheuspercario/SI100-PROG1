/*Aula 6 - Algoritmo Matriz */
#include <stdio.h>

#define N 20

int main () {

	int m[N][N];
	int nlin, ncol, l, c;

	printf ("Digite o número de linhas e colunas da matriz:\n");
	scanf ("%d %d", &nlin, &ncol);
	
	printf ("Entre com os elementos da matriz:\n"); //Elementos matriz
	
	if (nlin * ncol <= 20) {
		for (l = 0; l < nlin; l++) {
			for (c=0; c<ncol; c++) {
				 scanf ("%d", &m[l][c]);
			}
		}
	}

	printf ("A matriz é: \n"); //Lendo e printando matriz
	for (l = 0; l < nlin; l++) {
		for (c = 0; c < ncol; c++) {
			printf ("%d \t", m[l][c]);
		}
		printf ("\n");
	}

return 0;
}
	
