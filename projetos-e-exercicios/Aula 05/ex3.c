/*AULA 5 (VETORES) - Exercício 3*/
#include <stdio.h>

int main () {

	float notas[20];
	float BUSCAnota;
	int i; // Variavel de controle 
	int b; // Variavel binaria
	

	for (i=0; i<20; i++) {
		scanf ("%f", &notas[i]);
	}
	
	
	scanf ("%f", &BUSCAnota);
	

	
	while (BUSCAnota > 0) {
		b = 0;	
		for (i=0; i<20; i++) {
	
			if (notas[i] == BUSCAnota) {
			b++;
			}
		}

		if (b > 0) {
			printf ("existe\n");
		}
	
		else {
			printf ("nao existe\n");
		}
	
		scanf ("%f", &BUSCAnota);
	}




return 0;

}
	
