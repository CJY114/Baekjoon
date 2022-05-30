#include <stdio.h>
#include <string.h>

int main()
{
	char S[20];
	int num, R;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %s", &R, &S);

		for (int j = 0; j < strlen(S); j++)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}