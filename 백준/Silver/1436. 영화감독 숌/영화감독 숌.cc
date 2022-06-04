#include <stdio.h>

int main()
{
	int N;
	int cnt = 0;
	int num = 0;
	int temp;

	scanf("%d", &N);

	while (cnt != N)
	{
		num++;
		temp = num;

		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				cnt++;
				break;
			}
			else
			{
				temp /= 10;
			}
		}
	}
	printf("%d", num);
}