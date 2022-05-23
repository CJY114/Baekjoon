#include <stdio.h>

int main()
{
	int num, sum = 0;
	char arr[100] = { 0, };

	scanf("%d", &num);
	scanf("%s", arr);

	for (int i = 0; i < num; i++)
	{
		sum += arr[i] - 48;
	}
	printf("%d", sum);
}