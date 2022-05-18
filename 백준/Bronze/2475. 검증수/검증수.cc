#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		num *= num;
		sum += num;
	}
	
	printf("%d\n", sum % 10);
}