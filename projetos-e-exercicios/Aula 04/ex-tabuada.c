/*Tabuado do 2 ao 10 - Comando FOR (Repetição)*/
#include <stdio.h>

int main () {

	int i, j, k;
	
	printf ("\n");
	for (k=0; k<=1; k++) {
		printf ("\n");
		for (i=1; i<5; i++) 
			printf ("TABUADA DO %2d\t", i+4*k+1);	
		printf ("\n");
		for (i=1; i<=9; i++) {
			for (j=2+4*k; j<=5+4*k; j++)
				printf ("%2d x %-2d = %2d\t", j, i, j*i);
			printf ("\n");
		}
	}
	return 0;
}
		
