/*AULA 10 - EXS3 - Verificar se a matriz eh simetrica ou nao*/
//Matriz é simetrica quando "MATRIZ TRANSPOSTA = MATRIZ"
//Matriz só é simetrica se for QUADRATICA
#include <stdio.h>
#include <stdlib.h>

//Prototipos das funções
int** TRANSPOSTA(int LINHAS, int COLUNAS, int** M); 
int** ALOCAR_matriz(int LINHAS, int COLUNAS);


int main () {

	int linha, coluna;
	int flag = 0;
	int i, j, l, c;
	int **m1;
	int **m2;


	//printf ("Digite o valor da linha e coluna da matriz:\n");
		scanf ("%d %d", &linha, &coluna); //Usuario fornece numero de linhas e colunas

	m1 = ALOCAR_matriz(linha, coluna); //Chamada da função para alocar matriz
	if (m1 == NULL) {
		printf("encerrar");
		return 1;
	}


	for (i = 0; i < linha; i++) { //Percorre linhas
		for (j = 0; j < coluna; j++) {//Percorre colunas
			scanf ("%d", &m1[i][j]);// Salva valor da posicao
		}
	}

	if (linha != coluna) { //Verificar se é quadradatica
		printf ("Nao eh simetrica\n");
	}
	
	else {	
		m2 = TRANSPOSTA(linha, coluna, m1); //Chamada da função para transpor matriz

		//Percorrer linhas e colunas e verificar se os elementos são iguais
		for (l = 0; l < linha; l++) {
			for (c = 0; c < coluna; c++) {
				if (m1[l][c] != m2[l][c]) {
					flag = flag + 1;

				}
			}
		}
			
		if (flag == 0) {
			printf ("Eh simetrica\n");
		}
		else {
			printf ("Nao eh simetrica\n");
		}
	}


return 0;
}


int** TRANSPOSTA(int LINHAS, int COLUNAS, int** M)
{
	int i, j, nCOL = LINHAS, nLIN = COLUNAS;
	int** trp;
	
	trp = (int**) malloc(nLIN*sizeof(int*));
	
	if (trp == NULL) { // VERIFICAR ALOCAÇAO
		printf ("encerrar");
		return NULL;
	}
	
	for (i = 0; i < nLIN; i++) {
		trp[i] = (int*) malloc(nCOL*sizeof(int));

		if (trp[i] == NULL) { // VERIFICAR ALOCAÇAO
		printf ("encerrar");
		return NULL;
		}
	}

	for (i = 0; i < LINHAS; i++) {
		for (j = 0; j < COLUNAS; j++) {
			trp[j][i] = M[i][j];
		}
	}

return trp;
}


int** ALOCAR_matriz(int LINHAS, int COLUNAS)
{
	int** MATRIZ;
	int x;
	
	MATRIZ = (int**) malloc(LINHAS*sizeof(int*));
	for (x = 0; x < LINHAS; x++) {//Percorre linhas alocadas da matriz
		MATRIZ[x] = (int*) malloc(COLUNAS*sizeof(int));
	}

return MATRIZ;
}
	
