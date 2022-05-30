#include <stdio.h>

int main()
{
	int A, B, C;
	int sum = 0;
	int ABC[10] = { 0, };
	int cnt = 0;

	scanf("%d %d %d", &A, &B, &C);
	sum = A * B * C;

	while (sum != 0)
	{
		cnt = sum % 10;
		ABC[cnt]++;
		sum /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", ABC[i]);
	}
}