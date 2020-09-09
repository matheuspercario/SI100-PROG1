/*AULA 3 - Exercicio 7 - Simular funcionamento de uma calculadora 4 operadores*/
#include <stdio.h>

int main () {
	
	char op;
	float num1, num2;
	
	printf ("Conta a ser realizada: \n\n\tEx.:\n\t1. 2 + 2\n\t2. 5 - 3\n\t3. 4 * 2\n\t4. 12 / 3\n\nDigite a conta conforme o exemplo acima:\n\n");
	scanf ("%f %c %f", &num1, &op, &num2);


		if (op == '+') {
			printf ("%.1f + %.1f = %.2f\n", num1, num2, (num1+num2));
		}

		if (op == '-') {
			printf ("%.1f - %.1f = %.2f\n", num1, num2, (num1-num2));
		}

		if (op == '*') {
			printf ("%.1f * %.1f = %.2f\n", num1, num2, (num1*num2));
		}

		if (op == '/') {
			printf ("%.1f / %.1f = %.2f\n", num1, num2, (num1/num2));
		}
	

return 0;
}
