/*AULA 9A - EXS 5 - Calculadora utilizando funções*/
#include <stdio.h>
#include <math.h>


float soma		(float A, float B); //Protótipo da função
float subtrai		(float A, float B); //Protótipo da função
float multiplica	(float A, float B); //Protótipo da função
float divide		(float A, float B); //Protótipo da função
float potencia		(float A, float B); //Protótipo da função

int main () {

	float X,Y; 
	char op;

	scanf ("%f%c%f", &X, &op, &Y);
	

	if (op == '+') {
		printf ("%.3f\n", soma(X, Y));
	}

	if (op == '-') {
		printf ("%.3f\n", subtrai(X, Y));
	}

	if (op == '*') {
		printf ("%.3f\n", multiplica(X, Y));
	}

	if (op == '/') {
		printf ("%.3f\n", divide(X, Y));
	}

	if (op == '^') {
		printf ("%.3f\n", potencia(X, Y));
	}

return 0;
}


float soma(float A, float B)
{//Corpo de instruçoes da função
	return (A+B);
}

float subtrai(float A, float B)
{//Corpo de instruçoes da função
	return (A-B);
}	

float multiplica(float A, float B)
{//Corpo de instruçoes da função
	return (A*B);
}

float divide(float A, float B)
{//Corpo de instruçoes da função
	return (A/B);
}

float potencia(float A, float B)
{//Corpo de instruçoes da função
	return (pow(A,B));
}
