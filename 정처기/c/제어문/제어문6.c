#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n[] = { 5, 4, 3, 2, 1 };
	for (int i = 0; i < 5; i++)
		printf("%d", n[(i + 1) % 5]);
	return 0;
}
