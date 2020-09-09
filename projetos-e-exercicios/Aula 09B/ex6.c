/*AULA 9B - EXS 6 - Maior e menos valores do vetor (criar procedimento para ordenar)*/
#include <stdio.h>


int N,maior,menor;

void busca(int vetor[])
{//PROCEDIMENTO = Não retorna valor
	int k;
	maior = vetor[0];
	menor = vetor[0];

		for (k = 0;k < N; k++) {
	     		 if (vetor[k] > maior) {
          			maior = vetor[k];
			}
		}

	  	for (k = 0; k < N; k++) {
       			 if (vetor[k] < menor) {
         			 menor = vetor[k];
	   		 }
		}
}		
int main () {
	
	scanf("%d",&N);

	int VETOR[N];
	int i;

		for (i = 0 ;i < N; i++) {
			scanf("%d",&VETOR[i]);
		}

	busca(VETOR);


printf("maior valor: %d\n",maior);
printf("menor valor: %d\n",menor);

return 0;
}
