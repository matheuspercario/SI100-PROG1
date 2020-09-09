/*AULA 9A - EXS 3 - Cálculo da média por função*/
#include <stdio.h>
#include <math.h>

float media(char Z, float n1, float n2)
{//Bloco de instruções da função "media"
	
	if (Z == 'A') {
		return ((n1+n2)/2);
	}

	if (Z == 'B') {
		return (sqrt(n1*n2));
	}
}

int main () {

	char Controle;
	float X, Y;
	
	scanf ("%c", &Controle);
	scanf ("%f %f", &X, &Y); //Variavel de controle (A ou B) e Notas

	if (Controle == 'A') {
		printf ("%.3f\n", media(Controle, X, Y));//Media Aritmética
	}

	else {
		printf ("%.3f\n", media(Controle, X, Y));//Media Geométrica
	}

return 0;
}
