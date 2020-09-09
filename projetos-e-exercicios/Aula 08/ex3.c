/*AULA 8 - EXS 3 - Calcular area do retangulo contido no primeiro quadrante*/
#include <stdio.h>

int main () {

	float AREA;

	struct Retangulo {
		float X;
		float Y;
	};
	
	struct Retangulo inferior_esq, superior_dir;

	printf ("Digite as coordenadas \'X\' e \'Y\' do canto inferior esquerdo:\n");
	scanf ("%f %f", &inferior_esq.X, &inferior_esq.Y);

	printf ("Digite as coordenadas \'X\' e \'Y\' do canto superior direito:\n");
	scanf ("%f %f", &superior_dir.X, &superior_dir.Y);


	AREA = (superior_dir.X - inferior_esq.X) * (superior_dir.Y - inferior_esq.Y);

	
	printf ("\n%.3f\n", AREA);

return 0;
}


	
