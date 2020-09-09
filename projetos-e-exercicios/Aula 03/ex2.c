/*AULA 3 - Exercicio 2 - Ler 10 números e dizer quantos pares e quantos impares*/
#include <stdio.h>

int main () {

	int a, b, c, d, e, f, g, h, i, j;
	int par, impar;
	par = 0;
	impar = 0;


	printf ("Digite 10 números:\n");

	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	scanf ("%d", &d);
	scanf ("%d", &e);
	scanf ("%d", &f);
	scanf ("%d", &g);
	scanf ("%d", &h);
	scanf ("%d", &i);
	scanf ("%d", &j);

	if (a%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (b%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (c%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (d%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (e%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (f%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (g%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (h%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (i%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	if (j%2==0) {
		par = par + 1;
	}
	else {
		impar = impar + 1;
	}

	printf ("Foram escritos %d pares e %d impares.\n", par, impar);

return 0; 
}

	
	

