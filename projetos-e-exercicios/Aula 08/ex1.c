/*AULA 8 - EXS 1 - Estrutura chamada "Ponto"*/
#include <stdio.h>
#include <math.h>

int main () {

	float distancia;

	struct Ponto {
		float X;
		float Y;
	};
	
	struct Ponto p1, p2;

	printf ("Digite a primeira coordenada \'X\':\n");
	scanf ("%f", &p1.X);

	printf ("Digite a primeira coordenada \'Y\':\n");
	scanf ("%f", &p1.Y);


	printf ("Digite a segunda coordenada \'X\':\n");
	scanf ("%f", &p2.X);

	printf ("Digite a primeira coordenada \'Y\':\n");
	scanf ("%f", &p2.Y);
	

	distancia  = sqrt(((p2.X - p1.X)*(p2.X - p1.X)) + ((p2.Y - p1.Y)*(p2.Y - p1.Y))); //Distancia euclidiana entre 2 pontos quaisquer do espaço bidimensional


	printf ("\n%.2f\n", distancia);

return 0;
}

	
	

	


	
