#include<stdio.h>
#include<stdlib.h>

int cautare_liniara(int v[], int n,int cautat)
{
	int i;
	for (i = 0; i < n; i++)
		if (v[i] == cautat) return i;
	return -1;
}

int main()
{
	int v[] = { 7,9,10,13,19 };
	int cautat = 25;
	int n = sizeof(v);
	int rezultat = cautare_liniara(v, n, cautat);
	if (rezultat == -1) printf("Elementul nu a fost gasit");
	else printf("Elementul se afla pe pozitia %d", rezultat);
	return 0;
}