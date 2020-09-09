/*TRABALHO DE PROGRAMAÇÃO - COLETA DE LEITE*/
#include <stdio.h>
#include <math.h>

#define N 5
#define M 100

int main () {
	

	float DIST1, DIST2, DIST3, DIST4, DIST5;
	float pd_X[N], pd_Y[N];
	float Rota01, Rota02, temp1;
	int produtores, i;

	int A = 0;
	int B = 1;
	int C = 2;
	int D = 3;
	int E = 4;
	
	float Rota0, Rota1, Rota2, Rota3, Rota4, Rota5, Rota6, Rota7, Rota8, Rota9, Rota10, Rota11, Rota12, Rota13, Rota14, Rota15, Rota16, Rota17, Rota18, Rota19, Rota20, Rota21, Rota22, Rota23;
	
	int l, k, j;

	
	scanf ("%d", &produtores); //Numero de produtores

	if ((produtores >= 1) && (produtores <= 4)) {

	for (i = 0; i < (produtores+1); i++) {
		scanf ("%f %f", &pd_X[i], &pd_Y[i]); //Vetor - Coordenadas dos produtores
		}

//(__________________________________________EMPRESA + 1 PRODUTOR________________________________________________)

		if (produtores == 1) { 

		//ROTAS:  
		//A B

		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A- > B
		DIST2 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> C

		Rota01 = DIST1 + DIST2;

	printf ("Distancia a ser percorrida: %.2f\n", Rota01);
		
		}

//(_________________________________________EMPRESA + 2 PRODUTORES_____________________________________________)
		
		if (produtores == 2) {

		//ROTAS:
		//A B C A
		//A C B A

		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B
		DIST2 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST3 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota02 = DIST1 + DIST2 + DIST3;
		
	
	printf ("Distancia a ser percorrida: %.2f\n", Rota02);
		}

//(__________________________________________EMPRESA + 3 PRODUTORES_________________________________________)
		
		if (produtores == 3) {

		//ROTAS: 
		//A B C D A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST3 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST4 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A
	
		Rota0 = DIST1 + DIST2 + DIST3 + DIST4;
		
	
		//A B D C A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST3 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST4 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota1 = DIST1 + DIST2 + DIST3 + DIST4;


		//A C B D A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST3 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST4 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota2 = DIST1 + DIST2 + DIST3 + DIST4;


		//A C D B A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST3 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST4 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota3 = DIST1 + DIST2 + DIST3 + DIST4;


		//A D B C A 
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST3 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST4 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota4 = DIST1 + DIST2 + DIST3 + DIST4;


		//A D C B A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST3 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST4 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota5 = DIST1 + DIST2 + DIST3 + DIST4;

	float RotasPD3[] = {Rota0, Rota1, Rota2, Rota3, Rota4, Rota5};

		for (l = 0; l < 6; l++) {  //Verificar se as rotas foram calculadas corretamente
			//printf("Rota: %.2f\n", RotasPD3[l]);
		}

		for (j = 5; j > 0; j--) { //PERMUTACAO: Encontrar a melhor rota
			for (k = 0; k < j; k++) {
				if (RotasPD3[k] > RotasPD3[k+1]) {
					temp1 = RotasPD3[k];
					RotasPD3[k] = RotasPD3[k+1];
					RotasPD3[k+1] = temp1;
				}
			}
		}
	
		printf ("Distancia a ser percorrida: %.2f\n", RotasPD3[0]);

		}
//(______________________________________________EMPRESA + 4 PRODUTORES_________________________________________)

		if (produtores == 4) {

		//ROTAS:
		//A B C D E A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST3 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST4 = sqrt((pow((pd_X[E] - pd_X[D]),2)) + (pow((pd_Y[E] - pd_Y[D]),2))); //D -> E
		DIST5 = sqrt((pow((pd_X[A] - pd_X[E]),2)) + (pow((pd_Y[A] - pd_Y[E]),2))); //E -> A

		Rota0 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A B C E D A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST3 = sqrt((pow((pd_X[E] - pd_X[C]),2)) + (pow((pd_Y[E] - pd_Y[C]),2))); //C -> E
		DIST4 = sqrt((pow((pd_X[D] - pd_X[E]),2)) + (pow((pd_Y[D] - pd_Y[E]),2))); //E -> D
		DIST5 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota1 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A B D C E A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST3 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST4 = sqrt((pow((pd_X[E] - pd_X[C]),2)) + (pow((pd_Y[E] - pd_Y[C]),2))); //C -> E
		DIST5 = sqrt((pow((pd_X[A] - pd_X[E]),2)) + (pow((pd_Y[A] - pd_Y[E]),2))); //E -> A

		Rota2 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A B D E C A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST3 = sqrt((pow((pd_X[E] - pd_X[D]),2)) + (pow((pd_Y[E] - pd_Y[D]),2))); //D -> E
		DIST4 = sqrt((pow((pd_X[C] - pd_X[E]),2)) + (pow((pd_Y[C] - pd_Y[E]),2))); //E -> C
		DIST5 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota3 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A B E C D A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[E] - pd_X[B]),2)) + (pow((pd_Y[E] - pd_Y[B]),2))); //B -> E
		DIST3 = sqrt((pow((pd_X[C] - pd_X[E]),2)) + (pow((pd_Y[C] - pd_Y[E]),2))); //E -> C
		DIST4 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST5 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota4 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A B E D C A
		DIST1 = sqrt((pow((pd_X[B] - pd_X[A]),2)) + (pow((pd_Y[B] - pd_Y[A]),2))); //A -> B 
		DIST2 = sqrt((pow((pd_X[E] - pd_X[B]),2)) + (pow((pd_Y[E] - pd_Y[B]),2))); //B -> E
		DIST3 = sqrt((pow((pd_X[D] - pd_X[E]),2)) + (pow((pd_Y[D] - pd_Y[E]),2))); //E -> D
		DIST4 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST5 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota5 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A C B D E A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST3 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST4 = sqrt((pow((pd_X[E] - pd_X[D]),2)) + (pow((pd_Y[E] - pd_Y[D]),2))); //D -> E
		DIST5 = sqrt((pow((pd_X[A] - pd_X[E]),2)) + (pow((pd_Y[A] - pd_Y[E]),2))); //E -> A

		Rota6 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A C B E D A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST3 = sqrt((pow((pd_X[E] - pd_X[B]),2)) + (pow((pd_Y[E] - pd_Y[B]),2))); //B -> E
		DIST4 = sqrt((pow((pd_X[D] - pd_X[E]),2)) + (pow((pd_Y[D] - pd_Y[E]),2))); //E -> D
		DIST5 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota7 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A C D B E A 
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST3 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST4 = sqrt((pow((pd_X[E] - pd_X[B]),2)) + (pow((pd_Y[E] - pd_Y[B]),2))); //B -> E
		DIST5 = sqrt((pow((pd_X[A] - pd_X[E]),2)) + (pow((pd_Y[A] - pd_Y[E]),2))); //E -> A
	
		Rota8 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A C D E B A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST3 = sqrt((pow((pd_X[E] - pd_X[D]),2)) + (pow((pd_Y[E] - pd_Y[D]),2))); //D -> E
		DIST4 = sqrt((pow((pd_X[B] - pd_X[E]),2)) + (pow((pd_Y[B] - pd_Y[E]),2))); //E -> B
		DIST5 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A
		
		Rota9 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A C E B D A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[E] - pd_X[C]),2)) + (pow((pd_Y[E] - pd_Y[C]),2))); //C -> E
		DIST3 = sqrt((pow((pd_X[B] - pd_X[E]),2)) + (pow((pd_Y[B] - pd_Y[E]),2))); //E -> B
		DIST4 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST5 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota10 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A C E D B A
		DIST1 = sqrt((pow((pd_X[C] - pd_X[A]),2)) + (pow((pd_Y[C] - pd_Y[A]),2))); //A -> C
		DIST2 = sqrt((pow((pd_X[E] - pd_X[C]),2)) + (pow((pd_Y[E] - pd_Y[C]),2))); //C -> E
		DIST3 = sqrt((pow((pd_X[D] - pd_X[E]),2)) + (pow((pd_Y[D] - pd_Y[E]),2))); //E -> D
		DIST4 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST5 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota11 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;


		//A D B C E A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST3 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST4 = sqrt((pow((pd_X[E] - pd_X[C]),2)) + (pow((pd_Y[E] - pd_Y[C]),2))); //C -> E
		DIST5 = sqrt((pow((pd_X[A] - pd_X[E]),2)) + (pow((pd_Y[A] - pd_Y[E]),2))); //E -> A

		Rota12 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A D B E C A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST3 = sqrt((pow((pd_X[E] - pd_X[B]),2)) + (pow((pd_Y[E] - pd_Y[B]),2))); //B -> E
		DIST4 = sqrt((pow((pd_X[C] - pd_X[E]),2)) + (pow((pd_Y[C] - pd_Y[E]),2))); //E -> C
		DIST5 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota13 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A D C B E A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST3 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST4 = sqrt((pow((pd_X[E] - pd_X[B]),2)) + (pow((pd_Y[E] - pd_Y[B]),2))); //B -> E
		DIST5 = sqrt((pow((pd_X[A] - pd_X[E]),2)) + (pow((pd_Y[A] - pd_Y[E]),2))); //E -> A

		Rota14 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A D C E B A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST3 = sqrt((pow((pd_X[E] - pd_X[C]),2)) + (pow((pd_Y[E] - pd_Y[C]),2))); //C -> E
		DIST4 = sqrt((pow((pd_X[B] - pd_X[E]),2)) + (pow((pd_Y[B] - pd_Y[E]),2))); //E -> B
		DIST5 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota15 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A D E B C A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[E] - pd_X[D]),2)) + (pow((pd_Y[E] - pd_Y[D]),2))); //D -> E
		DIST3 = sqrt((pow((pd_X[B] - pd_X[E]),2)) + (pow((pd_Y[B] - pd_Y[E]),2))); //E -> B
		DIST4 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST5 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota16 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A D E C B A
		DIST1 = sqrt((pow((pd_X[D] - pd_X[A]),2)) + (pow((pd_Y[D] - pd_Y[A]),2))); //A -> D
		DIST2 = sqrt((pow((pd_X[E] - pd_X[D]),2)) + (pow((pd_Y[E] - pd_Y[D]),2))); //D -> E
		DIST3 = sqrt((pow((pd_X[C] - pd_X[E]),2)) + (pow((pd_Y[C] - pd_Y[E]),2))); //E -> C
		DIST4 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST5 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota17 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A E B C D A
		DIST1 = sqrt((pow((pd_X[E] - pd_X[A]),2)) + (pow((pd_Y[E] - pd_Y[A]),2))); //A -> E
		DIST2 = sqrt((pow((pd_X[B] - pd_X[E]),2)) + (pow((pd_Y[B] - pd_Y[E]),2))); //E -> B
		DIST3 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST4 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST5 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota18 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A E B D C A
		DIST1 = sqrt((pow((pd_X[E] - pd_X[A]),2)) + (pow((pd_Y[E] - pd_Y[A]),2))); //A -> E
		DIST2 = sqrt((pow((pd_X[B] - pd_X[E]),2)) + (pow((pd_Y[B] - pd_Y[E]),2))); //E -> B
		DIST3 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST4 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST5 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A
		
		Rota19 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A E C B D A
		DIST1 = sqrt((pow((pd_X[E] - pd_X[A]),2)) + (pow((pd_Y[E] - pd_Y[A]),2))); //A -> E
		DIST2 = sqrt((pow((pd_X[C] - pd_X[E]),2)) + (pow((pd_Y[C] - pd_Y[E]),2))); //E -> C
		DIST3 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST4 = sqrt((pow((pd_X[D] - pd_X[B]),2)) + (pow((pd_Y[D] - pd_Y[B]),2))); //B -> D
		DIST5 = sqrt((pow((pd_X[A] - pd_X[D]),2)) + (pow((pd_Y[A] - pd_Y[D]),2))); //D -> A

		Rota20 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A E C D B A
		DIST1 = sqrt((pow((pd_X[E] - pd_X[A]),2)) + (pow((pd_Y[E] - pd_Y[A]),2))); //A -> E
		DIST2 = sqrt((pow((pd_X[C] - pd_X[E]),2)) + (pow((pd_Y[C] - pd_Y[E]),2))); //E -> C
		DIST3 = sqrt((pow((pd_X[D] - pd_X[C]),2)) + (pow((pd_Y[D] - pd_Y[C]),2))); //C -> D
		DIST4 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST5 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota21 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;
		
		//A E D C B A
		DIST1 = sqrt((pow((pd_X[E] - pd_X[A]),2)) + (pow((pd_Y[E] - pd_Y[A]),2))); //A -> E
		DIST2 = sqrt((pow((pd_X[D] - pd_X[E]),2)) + (pow((pd_Y[D] - pd_Y[E]),2))); //E -> D
		DIST3 = sqrt((pow((pd_X[C] - pd_X[D]),2)) + (pow((pd_Y[C] - pd_Y[D]),2))); //D -> C
		DIST4 = sqrt((pow((pd_X[B] - pd_X[C]),2)) + (pow((pd_Y[B] - pd_Y[C]),2))); //C -> B
		DIST5 = sqrt((pow((pd_X[A] - pd_X[B]),2)) + (pow((pd_Y[A] - pd_Y[B]),2))); //B -> A

		Rota22 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

		//A E D B C A
		DIST1 = sqrt((pow((pd_X[E] - pd_X[A]),2)) + (pow((pd_Y[E] - pd_Y[A]),2))); //A -> E
		DIST2 = sqrt((pow((pd_X[D] - pd_X[E]),2)) + (pow((pd_Y[D] - pd_Y[E]),2))); //E -> D
		DIST3 = sqrt((pow((pd_X[B] - pd_X[D]),2)) + (pow((pd_Y[B] - pd_Y[D]),2))); //D -> B
		DIST4 = sqrt((pow((pd_X[C] - pd_X[B]),2)) + (pow((pd_Y[C] - pd_Y[B]),2))); //B -> C
		DIST5 = sqrt((pow((pd_X[A] - pd_X[C]),2)) + (pow((pd_Y[A] - pd_Y[C]),2))); //C -> A

		Rota23 = DIST1 + DIST2 + DIST3 + DIST4 + DIST5;

	float RotasPD4[] = {Rota0, Rota1, Rota2, Rota3, Rota4, Rota5, Rota6, Rota7, Rota8, Rota9, Rota10, Rota11, Rota12, Rota13, Rota14, Rota15, Rota16, Rota17, Rota18, Rota19, Rota20, Rota21, Rota22, Rota23};

		for (l = 0; l < 24; l++) { //Verificar se as rotas foram calculadas corretamente
			//printf("Rota: %.2f\n", RotasPD4[l]);
		}

		for (j = 23; j > 0; j--) { //PERMUTACAO: Encontrar a melhor rota
			for (k = 0; k < j; k++) {
				if (RotasPD4[k] > RotasPD4[k+1]) {
					temp1 = RotasPD4[k];
					RotasPD4[k] = RotasPD4[k+1];
					RotasPD4[k+1] = temp1;
				}
			}
		}
	
		printf ("Distancia a ser percorrida: %.2f\n", RotasPD4[0]);

		}
//(_____________________________________________________FIM_____________________________________________________)
	

	}




	else {
		printf ("Numero de produtores invalido.\n");
	}

return 0;
}
