#include<stdio.h>
#include<stdlib.h>

const int n = 8;

int v[8] = { 12 ,16, 19 ,34 ,56, 67, 77,89 };

int cautare_binara( int cautat)
{
	int sol = -1, left = 0, right = n - 1, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (v[mid] == cautat)
		{
			sol = mid;
			break;
		}
		else if (v[mid] > cautat)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return sol;
}

int main()
{
	printf("%d", cautare_binara(19));
	return 0;
}