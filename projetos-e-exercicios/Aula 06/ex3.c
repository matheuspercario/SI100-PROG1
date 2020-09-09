/*Aula 6 - Exercício 3 - Multiplicação de Matrizes */
#include <stdio.h>
#define N 20
    
int main () {

       int L1, C1, L2, C2, l, c, k, m1[N][N], m2[N][N], m3[N][N];

        scanf("%d %d", &L1, &C1);
        scanf("%d %d", &L2, &C2);

	if (C1 != L2) { // Condição que IMPEDE a multiplicação de matrizes

		for (l = 0; l < L1; l++) { //Lendo matriz 1
				for (c = 0; c < C1; c++) {
					scanf("%d", &m1[l][c]);
				}
			}

			for (l = 0; l < L2; l++) {//Lendo matriz 2
				for (c = 0; c < C2; c++) {
					scanf("%d", &m2[l][c]);
				}
			}
		printf ("\n");
		printf ("As dimensoes das duas matrizes nao permitem a multiplicacao\n");
	}
	
	else {
		if (L1 < N && C1 < N && C2 < N) {
			for (l = 0; l < L1; l++) { //Lendo Matriz 1
				for (c = 0; c < C1; c++) {
					scanf("%d", &m1[l][c]);
				}
			}

			for (l = 0; l < L2; l++) { // Lendo Matriz 2
				for (c = 0; c < C2; c++) {
					scanf("%d", &m2[l][c]);
				}
			}

			printf("\n");

			for (l = 0; l < L1; l++) { //
				for (c = 0; c < C2; c++) {

					m3[l][c] = 0;

					for (k = 0; k < C1; k++) //Multiplicação
						m3[l][c] = m3[l][c] + (m1[l][k] * m2[k][c]);
						printf("%d ", m3[l][c]);
				}
					printf ("\n");
			}
		}
	}


return 0;
}
