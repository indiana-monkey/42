#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	int a;
	int b;

	a = 1;
	b = 12;
	printf("%d\n", ft_sqrt(a));
	printf("%d\n", ft_sqrt(b));
	return 0;
}
