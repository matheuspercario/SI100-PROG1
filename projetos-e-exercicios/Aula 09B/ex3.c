/*AULA 9B - EXS3 - Procedimentos que implemente a SOMA e MULTIPLICAÇÃO dos numeros imaginarios*/
#include <stdio.h>

void SOMA(int w, int x, int y, int z)
{
	
	printf("%d + %di\n", (w+y), (x+z));
}

void MULT(int w, int x, int y, int z)
{
	printf("%d + %di\n", ((w*y)-(x*z)), ((w*z)+(x*y)));
}




int main () {

	//z + w = (a + bi) + (c + di) = (a + c) + (b + d)i
	//z * w = (a + bi) + (c + di) = (ac - bd) + (ad + bc)i

	int a, b, c, d;
	char op;

	scanf ("%d %d %c %d %d", &a, &b, &op, &c, &d);

	if (op == '+') {
		SOMA(a,b,c,d);
	}
	
	else {
		MULT(a,b,c,d);
	}

return 0;
}



