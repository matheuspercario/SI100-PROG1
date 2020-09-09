/*AULA 4 - Exercício 4*/
#include <stdio.h>

int main () {
	
	int n, s, c, r1, r2, r3;

	scanf ("%d", &n);
	scanf ("%d", &s);

	c = n-s;

	for (r1=1; n>1; n=n-1) {
		r1=r1*n;
	}

	for (r2=1; s>1; s=s-1) {
		r2=r2*s;
	}

	for (r3=1; c>1; c=c-1) {
		r3=r3*c;
	}

	printf ("\n%d\n", (r1/(r2*r3)));

return 0;
}
		



	
