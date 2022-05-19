#include <stdio.h>

int main()
{
	int A, Sum = 0;

	for (int i = 1; i <= 5; i++)
	{
		scanf("%d", &A);
		Sum += A;
	}

	printf("%d", Sum);
}