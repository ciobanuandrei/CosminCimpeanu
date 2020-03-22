#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ZecimalBinar(int n)
{
	 int rez = 0, p = 1;
	while (n)
	{
		rez = rez + n % 2 * p;
		n = n / 2;
		p = p * 10;
	}
	return rez;
}

int Inversare(int n)
{
	n = n ^ 255;
	return n;
	
}

int BinarZecimal(int n)
{
	int num = n, zecimal = 0, putere = 1, nr_nou,ultima;
	nr_nou = num;
	while (nr_nou)
	{
		ultima = nr_nou % 10;
		nr_nou = nr_nou / 10;
		zecimal = zecimal + ultima * putere;
		putere = putere * 2;
	}
	return zecimal;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Inversare(ZecimalBinar(n))) ;
	return 0;
}