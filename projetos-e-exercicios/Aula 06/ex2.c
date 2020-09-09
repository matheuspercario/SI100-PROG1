/*Aula 6 - exercício 2 - Transformar matriz (MAX20x20) em VETOR*/
#include <stdio.h>

#define N 20

int main () {
	
	int m[N][N];
	int nlin, ncol, l, c;

	printf ("Digite o número de linhas e colunas da matriz:\n");
	scanf ("%d %d", &nlin, &ncol);
	
	printf ("Entre com os elementos da matriz:\n");
	
	if (nlin * ncol <= 20) {// Elementos da matriz
		for (l = 0; l < nlin; l++) {
			for (c = 0; c < ncol; c++) {
				 scanf ("%d", &m[l][c]);
			}
		}
	}
	
	printf ("\n");

	printf ("O vetor é: \n"); //Lendo e printando vetor da matriz
	for (l = 0; l < nlin; l++) {
		for (c = 0; c < ncol; c++) {
			printf ("%d ", m[l][c]);
		}
	}
		
	printf ("\n");
	

return 0;
}

