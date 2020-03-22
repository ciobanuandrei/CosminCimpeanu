#include <stdio.h>
#include <stdlib.h>

int *suma(int a, int b)
{
	int *s;
	s = (int*)malloc(sizeof(int));
	*s = a + b;
	return s;
}

int main()
{
	int a, b, *s;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	s = suma(a, b);
	printf("s=%d\n", *s);
	system("pause");
	return 0;
}