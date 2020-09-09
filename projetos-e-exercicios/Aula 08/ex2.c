/*AULA 8 - EXS 2 - Verificar se os pontos do EXS1 são iguais ou não*/
#include <stdio.h>
#include <math.h>

int main () {

	float distancia;

	struct Ponto {
		float X;
		float Y;
	};
	
	struct Ponto p1, p2;

	printf ("Digite as coordenadas \'X\' e \'Y\' do primeiro ponto:\n");
	scanf ("%f %f", &p1.X, &p1.Y);

	printf ("Digite as coordenadas \'X\' e \'Y\' do segundo ponto:\n");
	scanf ("%f %f", &p2.X, &p2.Y);


	distancia  = sqrt(((p2.X - p1.X)*(p2.X - p1.X)) + ((p2.Y - p1.Y)*(p2.Y - p1.Y))); //Distancia euclidiana entre 2 pontos quaisquer do espaço bidimensional

	
	if (distancia <= 0.0000001) {
		printf ("os pontos sao iguais\n");
	}
	
	else {
		printf ("os pontos nao sao iguais\n");
	}

return 0;
}

	
