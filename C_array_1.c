#include <stdio.h>

int main(void)
{
	int a[10], b = 1;
	for (int i = 0; i <= 9; i++)
	{
		a[i] = b;
		printf("%d ", a[i]);
		b++;
	}
	return 0;
}