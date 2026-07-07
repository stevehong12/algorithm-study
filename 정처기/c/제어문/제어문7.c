#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int number = 1234;
	int div = 10, result = 0;
	while (number != 0) {
		result = result * div;
		result = result + number % div;
		number = number / div;
	}
	printf("%d", result);
	return 0;
}
