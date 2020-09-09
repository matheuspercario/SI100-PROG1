/*AULA 5 (VETORES) - Exercício 4*/
#include <stdio.h>

int main () {


	int produtos[10];
	int i;
	
	for (i = 0; i<10; i++) { //Quantidade vendida de cada um dos 10 produtos:
		scanf ("%d", &produtos[i]);
	}

		int soma1 = 0;
		for (i = 0; i<10; i++) {
			soma1 = soma1 + produtos[i];
			
		}





	float precoUNIT[10];
	int k;

	for (k = 0; k<10; k++) { //O preço unitário de cada um dos 10 produtos vendidos:
		scanf ("%f",&precoUNIT[k]);
	}

		float soma2 = 0.0;
		for (k = 0; k<10; k++) {
			soma2 = soma2 + precoUNIT[k];
		}
		
	float l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, lucroTOT;
	l1 = produtos [0]*precoUNIT[0];
	l2 = produtos [1]*precoUNIT[1];
	l3 = produtos [2]*precoUNIT[2];
	l4 = produtos [3]*precoUNIT[3];
	l5 = produtos [4]*precoUNIT[4];
	l6 = produtos [5]*precoUNIT[5];
	l7 = produtos [6]*precoUNIT[6];
	l8 = produtos [7]*precoUNIT[7];
	l9 = produtos [8]*precoUNIT[8];
	l10 = produtos [9]*precoUNIT[9];

	lucroTOT = l1+l2+l3+l4+l5+l6+l7+l8+l9+l10;


	printf("O lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n", lucroTOT, soma1);

return 0;
}
	

