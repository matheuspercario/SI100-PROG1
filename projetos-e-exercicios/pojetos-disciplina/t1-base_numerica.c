/*Exercício SUSY - Base Numérica*/
#include <stdio.h>

int main () {
	
	int tmtl, dec1, n1, n2, n3, n4, n5, n6;
	scanf ("%d", &tmtl); // valor TMTL

		
		while (tmtl != -1) { //1234

			n1 = tmtl/1000; //1
			n2 = tmtl/100; //12
			n3 = tmtl/10; //123
			n4 = n3%10; //3
			n5 = n2%10; //2
			n6 = tmtl%10; // 4

			dec1 = (n1*24)+(n5*6)+(n4*2)+(n6*1); // soma dos produtos dos fatoriais
			printf ("%d\n", dec1);

			scanf ("%d", &tmtl);
		}

return 0;
}
