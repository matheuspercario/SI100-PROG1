/*AULA 9B - EXS2 - Salvar em B o cubo de todos elementos do vetor A*/
#include <stdio.h>
#define N 10

void Cubo(int vX[N], int vY[N]) 
//Procedimento que armazenara o Cubo de cada elemento de A em cada elemento de B
{
	int j;
	int AUX;

	for (j = 0; j < N; j++) {//Elevar cada elemento de A ao cubo
		AUX = vX[j];
		vY[j] = (AUX*AUX*AUX);
	}


}


int main () {

	int i, k;
	int vA[N], vB[N];

	for (i = 0; i < N; i++) {
		scanf ("%d", &vA[i]);
	}


	Cubo(vA, vB); //PROCEDIMENTO - Elevar todos elementos de A ao cubo.


	for (k = 0; k < N; k++) {// Printar valor ao cubo
	printf ("%d\n", vB[k]);

	}

	

return 0;
}

