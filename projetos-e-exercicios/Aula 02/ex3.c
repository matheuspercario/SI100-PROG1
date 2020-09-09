/*AULA 2 - Exercicio 3 - Transformção de Celsius em Farenheit*/
#include <stdio.h>

int main () {

	float TC, TF;
	
	printf ("Digite a temperatura em Celsius:\n");
	scanf ("%f", &TC);

	TF = (TC*1.8) + 32;

	printf ("A temperatura correspondente em Farenheit é: %.1f\n", TF);

return 0;
}
