#include <stdio.h>
#include <string.h>

int main()
{
	char input[1000000];
	int alphabet[26] = { 0, };
	int max = 0, cnt = 0;
	int word = 0;

	scanf("%s", &input);

	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < strlen(input); j++)
		{
			if (i == input[j])
			{
				alphabet[i - 'a']++;
			}
		}
	}

	for (int i = 'A'; i <= 'Z'; i++)
	{
		for (int j = 0; j < strlen(input); j++)
		{
			if (i == input[j])
			{
				alphabet[i - 'A']++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			word = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == alphabet[i])
		{
			cnt++;
		}
	}

	if (cnt > 1)
	{
		printf("?");
	}
	else
	{
		printf("%c", word + 'A');
	}

}