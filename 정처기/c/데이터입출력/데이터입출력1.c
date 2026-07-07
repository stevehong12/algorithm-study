// #include <stdio.h>
// int main(void)
// {
// 	int i, j, k;
// 	scanf("%d %d", &i, &j);
// 	k = i + j;
// 	printf("%d\n", k);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int i = 10, j = 10, k = 30;
// 	i /= j;
// 	j -= i;
// 	k %= j;
// 	printf("%d, %d, %d\n", i, j, k);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int result, a = 100, b = 200, c = 300;
// 	result = a < b ? b++ : --c;
// 	printf("%d, %d, %d\n", result, b, c);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int i, j;
// 	scanf("%o#%x", &i, &j);
// 	printf("%d %d", i, j);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int j = 024, k = 24, L = 0x24, hap;
// 	hap = j + k + L;
// 	printf("%d\n", hap);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int x = 7, y = 4, z;
// 	z = y % 3 < 3 ? 2 : 1;
// 	z = z & z >> 1;
// 	z = x > 5 && z <= 3 ? z * x : z / x;
// 	printf("%d\n", z);
// 	return 0;
// }

// #include <stdio.h>
// int main(void)
// {
// 	int x = 7, y = 4, z;
// 	z = y % 3 < 3 ? 2 : 1;
// 	z = z & z >> 1;
// 	z = x > 5 && z <= 3 ? z * x : z / x;
// 	printf("%d", z);
// 	return 0;
// }

#include <stdio.h>
int main(void)
{
	int x = 7, y = 4, z;
	z = y % 3 < 3 ? 2 : 1;
	z = z & z >> 1;
	z = x > 5 && z <= 3 ? z * x : z / x;
	printf("%d", z);
	return 0;
}
