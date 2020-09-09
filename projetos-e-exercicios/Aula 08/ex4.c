/*AULA 8 - EXS 4 - Verificar se um retagulo está contido em outro*/
#include <stdio.h>

int main () {

	struct Retangulo {
		int X;
		int Y;
	};

	struct Retangulo R1_inf, R1_sup, R2_inf, R2_sup;

	printf ("Digite as coordenadas \'X\' e \'Y\' do canto inferior esquerdo do R1:\n");
	scanf ("%d %d", &R1_inf.X, &R1_inf.Y);

	printf ("Digite as coordenadas \'X\' e \'Y\' do canto superior direito do R1:\n");
	scanf ("%d %d", &R1_sup.X, &R1_sup.Y);


	printf ("Digite as coordenadas \'X\' e \'Y\' do canto inferior esquerdo do R2:\n");
	scanf ("%d %d", &R2_inf.X, &R2_inf.Y);

	printf ("Digite as coordenadas \'X\' e \'Y\' do canto superior direito do R2:\n");
	scanf ("%d %d", &R2_sup.X, &R2_sup.Y);

	printf ("\n");

	if ((R2_inf.X >= R1_inf.X) && (R2_sup.X <= R1_sup.X)) {
		if ((R2_inf.Y >= R1_inf.Y) && (R2_sup.Y <= R1_sup.Y)) {
			printf ("o segundo retangulo esta contido no primeiro\n");	
		}
	

		else {
			printf ("o segundo retangulo nao esta contido no primeiro\n");
		}

	}

return 0; 
}
