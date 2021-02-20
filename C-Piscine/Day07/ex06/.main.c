#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int ab);

int main(void)
{
	int a;
	int b;

	a = 13;
	b = 2147483647;
	printf("%d\n", ft_is_prime(a));
	printf("%d\n", ft_is_prime(b));	
}
