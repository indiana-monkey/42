#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int a;
	int b;
	int c;

	a = 5;
	b = 0;
	c = -1;

	printf("%d\n", ft_iterative_factorial(a));
	printf("%d\n", ft_iterative_factorial(b));
	printf("%d\n", ft_iterative_factorial(c));
	return 0;
}
	
