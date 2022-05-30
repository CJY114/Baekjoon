#include <stdio.h>

int main()
{
	int M = 0;
	int num;
	double res[1000] = { 0, };
	double sum = 0;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%lf", &res[i]);
		
		if (M < res[i])
		{
			M = res[i];
		}
	}
	
	for (int i = 0; i < num; i++)
	{
		res[i] = res[i] / M * 100;
		sum += res[i];
	}

	sum = sum/num;
	
	printf("%lf", sum);
}