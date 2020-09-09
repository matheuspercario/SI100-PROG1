/*AULA 5 (VETORES) - Exercício 5*/
#include <stdio.h>

int main () {

	int v1[10];
	int i;
	
	for (i = 0; i<10; i++) { // Inserir 10 valores do primeiro vetor
		scanf ("%d", &v1[i]);
	}



	int v2[10];
	int k;
	
	for (k = 0; k<10; k++) { // Inserir 10 valores do segundo vetor
		scanf ("%d", &v2[k]);
	}


	
	printf ("%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n", v1[0], v2[0], v1[1], v2[1], v1[2], v2[2], v1[3], v2[3], v1[4], v2[4], v1[5], v2[5], v1[6], v2[6], v1[7], v2[7], v1[8], v2[8], v1[9], v2[9]);

return 0;
}


	



	
