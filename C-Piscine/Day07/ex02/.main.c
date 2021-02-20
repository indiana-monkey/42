#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int a;
	int b;

	a = 2;
	b = 2;
	printf("%d\n", ft_iterative_power(a, b));
	return 0;
}
