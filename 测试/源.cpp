#include<stdio.h>
int main()
{
	int m,n;
	int a[10000];
	int i, j;
	int k;
	int min;
	int x;
	scanf("%d", &x);
	for (i = 0; i < x; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < x-1; i++)
	{
		k = i;
		min = a[k];
		for (j = i; j < x; j++)
		{
			if (a[j] < min)
				k = j;
		}
		m = a[i];
		a[i] = a[k];
		a[k] = m;
		for (n = 0; n < x; n++)
		{
			printf("%d ", a[n]);
		}
		printf("\n");
	}
	return 0;
}