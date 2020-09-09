/*AULA 9A - EXS 1 - Cálculo volume da esfera*/
#include <stdio.h>
#include <math.h>

float volume_esfera(float A) 
{//Bloco instruções da função "volume_esfera"

	float Volume;
	float PI = 3.14159;

	Volume = (4*PI*(pow(A,3))/3);
	return Volume;

}


int main () {
	
	float V;
	float R;

	printf ("Digite valor do RAIO da esfera:\n");
	scanf ("%f", &R);
	
	printf ("\n");

	V = volume_esfera(R);
	
	printf ("Volume da esfera: %.2f\n", V);

return 0;
}

	
