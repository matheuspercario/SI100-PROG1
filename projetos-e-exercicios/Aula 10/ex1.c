/*AULA 10 - EXS1 - Calcular polinomio*/
#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>

int main () {
	
	int k, j, i, g;
	float x;
	float SOMA = 0.0;
	float* vetor;

	vetor = (float*) malloc((g + 1)*sizeof(float)); // ALOCAR DINAMICAMENTE

	//printf("Digite o grau do polinomio:\n");
		scanf("%d", &g);

	//printf("Digite os coeficientes numericos do polinomio:\n");
		for (i = 0; i < (g + 1); i++) {
			scanf ("%f", &vetor[i]);
		}

	//printf ("Digite o valor de X:\n");
		scanf("%f", &x);

	for (j = 1; j < (g + 1); j++) {
		vetor[j] = vetor[j]*(pow(x,j));
	}

	for (k = 0; k < (g + 1); k++) {
		SOMA = SOMA + vetor[k];
	}


	printf("%.2f\n", SOMA);

	free(vetor);

return 0;
}
