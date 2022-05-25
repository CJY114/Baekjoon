#include <stdio.h>
#include <string.h>

int main()
{
	int dajangzo[8] = { 0, };
	int num = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &dajangzo[i]);
	}

	num = dajangzo[0];

	if (num == 1)
	{
		for (int i = 1; i < 8; i++)
		{
			num++;

			if (dajangzo[i] != num)
			{
				printf("mixed\n");
				break;
			}
			if (i == 7)
			{
				printf("ascending\n");
			}
		}
	}
	else if (num == 8)
	{
		for (int i = 1; i < 8; i++)
		{
			num--;

			if (dajangzo[i] != num)
			{
				printf("mixed\n");
				break;
			}
			if(i == 7)
			{
				printf("descending\n");
			}
		}
	}
	else
	{
		printf("mixed\n");
	}
}
