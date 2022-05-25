#include <stdio.h>
#include <string.h>

int main()
{
	int num, sum = 0;
	int score = 0, cnt = 0;
	char OX[80] = { 0, };

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		sum = 0, cnt = 1;
		scanf("%s", OX);

		for (int j = 0; j < strlen(OX); j++)
		{
			if (OX[j] == 'O')
			{
				sum += cnt;
				cnt++;
			}
			else if (OX[j] == 'X')
			{
				cnt = 1;
			}
		}
		printf("%d\n", sum);
	}
}