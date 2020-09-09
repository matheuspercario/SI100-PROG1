/*AULA 2 - Exercicio 5 - Lendo dados de uma pessoa e convertendo em frase*/
#include <stdio.h>

int main () {

	float alt;
	int id, sex, M, F;
	

 
	printf ("Digite a idade: \n");
	scanf ("%d", &id);
	
	printf ("Digite a altura: \n");
	scanf ("%f", &alt);

	printf ("Digite o sexo, sendo: (F) para feminino ou (M) para masculino: \n");	
	getchar();
	sex = getchar(); // Letra do sexo digitado pela pessoa
	
		
	printf ("A pessoa tem %d, %.2f de altura e é do sexo %c. \n", id, alt, sex);
		

		


return 0;
}
