#include <stdio.h>

int main()
{
	int num1, num2;
	int max = 0, min = 0;
	int A = 0;

	scanf("%d %d", &num1, &num2);

	// 최대공약수
	if (num1 > num2)
	{
		for (int i = 1; i <= num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				max = i;
			}
		}
	}
	else if (num1 < num2)
	{
		for (int i = 1; i <= num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				max = i;
			}
		}
	}
	else
	{
		max = num1;
	}

	//최소공배수
	min = (num1 / max) * (num2 / max) * max;

	printf("%d\n", max);
	printf("%d\n", min);
}