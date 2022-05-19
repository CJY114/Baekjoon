#include <stdio.h>

int main()
{
	int two, three;
	int num, one;

	scanf("%d", &three);
	scanf("%d", &two);
	
	num = two - three;
	one = two + num;

	printf("%d", one);
}