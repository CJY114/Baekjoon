#include <stdio.h>

int main()
{
	int sum = 0;
	int sangsuA, sangsuB;

	scanf("%d %d", &sangsuA, &sangsuB);
	sangsuA = ((sangsuA % 10) * 100) + ((sangsuA / 10 % 10) * 10) + (sangsuA / 100);
	sangsuB = ((sangsuB % 10) * 100) + ((sangsuB / 10 % 10) * 10) + (sangsuB / 100);

	if (sangsuA > sangsuB)
	{
		printf("%d", sangsuA);
	}
	else
	{
		printf("%d", sangsuB);
	}
}