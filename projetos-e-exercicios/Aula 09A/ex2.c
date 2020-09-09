/*AULA 9A - EXS 2 - Cálculo volume da esfera usando protótipo e definição*/
#include <stdio.h>
#include <math.h>

float volume_esfera(float A); //Protótipo da função

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


float volume_esfera(float A) //Definição da Função: volume_esfera

{//Bloco instruções da função "volume_esfera"

	float Volume;
	float PI = 3.14159;

	Volume = (4*PI*(pow(A,3))/3);
	return Volume;

}
