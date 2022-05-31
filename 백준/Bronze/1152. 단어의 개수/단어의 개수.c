#include <stdio.h>
#include <string.h>

char input[1000001] = { 0, };

int main()
{
	int cnt = 1;
	

	gets(input);

	if (input[0] == ' ')
	{
		cnt--;
	}
	if (input[strlen(input)-1] == ' ')
	{
		cnt--;
	}

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == ' ')
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}