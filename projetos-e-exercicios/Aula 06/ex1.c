/*Aula 6 - exercício 1 - Matriz transposta (MAX20x20)*/
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

	printf ("A matriz transposta é: \n"); //Lendo e printando matriz
	for (l = 0; l < ncol; l++) {
		for (c = 0; c < nlin; c++) {
			printf ("%d \t", m[c][l]);
		}
		printf ("\n");
	}

return 0;
}
	


	
