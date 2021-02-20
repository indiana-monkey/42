#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
	int a;
	int b;

	a = 2;
	b = 3;
	printf("%d\n", ft_recursive_power(a, b));
	return 0;
}
