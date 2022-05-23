#include <stdio.h>
#include <string.h>

int main()
{
	int alpa[26];
	char S[100] = { 0, };
	char n;

	scanf("%s", S); // baekjoon

	for (int i = 0; i < 26; i++)
	{
		alpa[i] = -1;
	}

	for (int i = 0; i < strlen(S); i++)
	{
		n = S[i];

		if (alpa[n - 'a'] == -1)
		{
			alpa[n - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpa[i]);
	}
}