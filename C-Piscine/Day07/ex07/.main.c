#include <unistd.h>
#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int a;
	int b;

	a = 21;
	b = 13;
	printf("%d\n", ft_find_next_prime(a));
	printf("%d\n", ft_find_next_prime(b));
	return 0;
}

