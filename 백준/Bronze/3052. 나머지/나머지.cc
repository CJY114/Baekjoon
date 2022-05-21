#include <stdio.h>

int main()
{
	int num[10];
	int cnt = 0, res;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		num[i] = num[i] % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		res = 0;
		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j])
			{
				res++;
			}
		}
		if (res == 0)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}