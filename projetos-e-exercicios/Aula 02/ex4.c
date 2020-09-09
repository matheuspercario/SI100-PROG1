/*AULA 2 - Exercicio 4 - Transformção de Farenheit em Celsius*/
#include <stdio.h>

int main () {

	float TC, TF;
	
	printf ("Digite a temperatura em Farenheit:\n");
	scanf ("%f", &TF);

	TC = (TF - 32)/1.8;
	
	printf ("A temperatura correspondente em Celsius é: %.1f\n", TC);

return 0;
}

