#include <stdio.h>
#include <string.h>

int main(void)
{
	int number, i, result = 0;
	char number2[100];
	scanf("%d", &number);
	scanf("%s", number2);

	for (i = 0; i < number; i++)
		result += (number2[i]-'0');

	printf("%d\n", result);

	return 0;
}