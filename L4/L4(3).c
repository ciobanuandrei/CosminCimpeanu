#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, *inter;
	inter = (int*)malloc(sizeof(int));
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	*inter = a;
	a = b;
	b = *inter;
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}